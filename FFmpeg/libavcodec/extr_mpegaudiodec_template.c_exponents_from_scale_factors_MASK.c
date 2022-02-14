
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_6__ {int global_gain; int scalefac_scale; size_t preflag; int long_end; int const* scale_factors; int short_start; int* subblock_gain; } ;
struct TYPE_5__ {size_t sample_rate_index; } ;
typedef TYPE_1__ MPADecodeContext ;
typedef TYPE_2__ GranuleDef ;


 int** VAR_0 ;
 int** VAR_1 ;
 int** VAR_2 ;

__attribute__((used)) static void FUNC_0(MPADecodeContext *VAR_3, GranuleDef *VAR_4,
                                         int16_t *VAR_5)
{
    const uint8_t *VAR_6, *VAR_7;
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16[3];
    int16_t *VAR_17;

    VAR_17 = VAR_5;
    VAR_15 = VAR_4->global_gain - 210;
    VAR_14 = VAR_4->scalefac_scale + 1;

    VAR_6 = VAR_0[VAR_3->sample_rate_index];
    VAR_7 = VAR_2[VAR_4->preflag];
    for (VAR_9 = 0; VAR_9 < VAR_4->long_end; VAR_9++) {
        VAR_13 = VAR_15 - ((VAR_4->scale_factors[VAR_9] + VAR_7[VAR_9]) << VAR_14) + 400;
        VAR_8 = VAR_6[VAR_9];
        for (VAR_10 = VAR_8; VAR_10 > 0; VAR_10--)
            *VAR_17++ = VAR_13;
    }

    if (VAR_4->short_start < 13) {
        VAR_6 = VAR_1[VAR_3->sample_rate_index];
        VAR_16[0] = VAR_15 - (VAR_4->subblock_gain[0] << 3);
        VAR_16[1] = VAR_15 - (VAR_4->subblock_gain[1] << 3);
        VAR_16[2] = VAR_15 - (VAR_4->subblock_gain[2] << 3);
        VAR_11 = VAR_4->long_end;
        for (VAR_9 = VAR_4->short_start; VAR_9 < 13; VAR_9++) {
            VAR_8 = VAR_6[VAR_9];
            for (VAR_12 = 0; VAR_12 < 3; VAR_12++) {
                VAR_13 = VAR_16[VAR_12] - (VAR_4->scale_factors[VAR_11++] << VAR_14) + 400;
                for (VAR_10 = VAR_8; VAR_10 > 0; VAR_10--)
                    *VAR_17++ = VAR_13;
            }
        }
    }
}
