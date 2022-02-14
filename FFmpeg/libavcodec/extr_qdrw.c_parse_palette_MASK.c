
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ pix_fmt; } ;
typedef int GetByteContext ;
typedef TYPE_1__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,char*,unsigned int) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_3, GetByteContext *VAR_4,
                         uint32_t *VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8;

    for (VAR_8 = 0; VAR_8 <= VAR_6; VAR_8++) {
        uint8_t VAR_9, VAR_10, VAR_11;
        unsigned int VAR_12 = FUNC_1(VAR_4);
        if (VAR_12 > 255 && !VAR_7) {
            FUNC_0(VAR_3, VAR_1,
                   "Palette index out of range: %u\n", VAR_12);
            FUNC_3(VAR_4, 6);
            continue;
        }
        if (VAR_3->pix_fmt != VAR_2)
            return VAR_0;
        VAR_9 = FUNC_2(VAR_4);
        FUNC_3(VAR_4, 1);
        VAR_10 = FUNC_2(VAR_4);
        FUNC_3(VAR_4, 1);
        VAR_11 = FUNC_2(VAR_4);
        FUNC_3(VAR_4, 1);
        VAR_5[VAR_7 ? VAR_8 : VAR_12] = (0xFFU << 24) | (VAR_9 << 16) | (VAR_10 << 8) | VAR_11;
    }
    return 0;
}
