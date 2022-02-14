
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {unsigned int const* global_palette; } ;
typedef TYPE_1__ DVDSubtitleContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int const) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_1, int VAR_2[],
                            const uint32_t VAR_3[],
                            const int VAR_4[], unsigned int const VAR_5[])
{
    DVDSubtitleContext *VAR_6 = VAR_1->priv_data;
    int VAR_7, VAR_8, VAR_9, VAR_10;
    uint32_t VAR_11[4];

    for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
        VAR_11[VAR_7] = (VAR_5[VAR_7] << 24) |
                       VAR_6->global_palette[VAR_4[VAR_7]];
    for (VAR_7 = 0; VAR_7 < 256; VAR_7++) {
        VAR_10 = VAR_0;
        for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
            VAR_9 = FUNC_0(VAR_11[VAR_8], VAR_3[VAR_7]);
            if (VAR_9 < VAR_10) {
                VAR_2[VAR_7] = VAR_8;
                VAR_10 = VAR_9;
            }
        }
    }
}
