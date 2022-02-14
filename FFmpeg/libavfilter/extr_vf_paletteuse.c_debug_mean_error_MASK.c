
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {size_t** data; int* linesize; int width; int height; } ;
struct TYPE_6__ {int* palette; unsigned int total_mean_err; int trans_thresh; } ;
typedef TYPE_1__ PaletteUseContext ;
typedef TYPE_2__ AVFrame ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,unsigned int,float const) ;
 scalar_t__ FUNC_1 (size_t const*,size_t const*,int ) ;

__attribute__((used)) static void FUNC_2(PaletteUseContext *VAR_1, const AVFrame *VAR_2,
                             const AVFrame *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;
    const uint32_t *VAR_7 = VAR_1->palette;
    uint32_t *VAR_8 = (uint32_t *)VAR_2->data[0];
    uint8_t *VAR_9 = VAR_3->data[0];
    const int VAR_10 = VAR_2->linesize[0] >> 2;
    const int VAR_11 = VAR_3->linesize[0];
    const float VAR_12 = VAR_2->width * VAR_2->height * 3;
    unsigned VAR_13 = 0;

    for (VAR_6 = 0; VAR_6 < VAR_2->height; VAR_6++) {
        for (VAR_5 = 0; VAR_5 < VAR_2->width; VAR_5++) {
            const uint32_t VAR_14 = VAR_8[VAR_5];
            const uint32_t VAR_15 = VAR_7[VAR_9[VAR_5]];
            const uint8_t VAR_16[] = {0xff, VAR_14 >> 16 & 0xff, VAR_14 >> 8 & 0xff, VAR_14 & 0xff};
            const uint8_t VAR_17[] = {0xff, VAR_15 >> 16 & 0xff, VAR_15 >> 8 & 0xff, VAR_15 & 0xff};
            VAR_13 += FUNC_1(VAR_16, VAR_17, VAR_1->trans_thresh);
        }
        VAR_8 += VAR_10;
        VAR_9 += VAR_11;
    }

    VAR_1->total_mean_err += VAR_13;

    FUNC_0(((void*)0), VAR_0, "MEP:%.3f TotalMEP:%.3f\n",
           VAR_13 / VAR_12, VAR_1->total_mean_err / (VAR_12 * VAR_4));
}
