
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
typedef enum TwinVQFrameType { ____Placeholder_TwinVQFrameType } TwinVQFrameType ;
struct TYPE_3__ {int* n_div; int** length; int* length_change; int* bits_main_spec_change; int*** bits_main_spec; size_t** permut; } ;
typedef TYPE_1__ TwinVQContext ;



__attribute__((used)) static void FUNC_0(TwinVQContext *VAR_0, const uint8_t *VAR_1, float *VAR_2,
                    enum TwinVQFrameType VAR_3,
                    const int16_t *VAR_4, const int16_t *VAR_5, int VAR_6)
{
    int VAR_7 = 0;
    int VAR_8, VAR_9;

    for (VAR_8 = 0; VAR_8 < VAR_0->n_div[VAR_3]; VAR_8++) {
        int VAR_10, VAR_11;
        int VAR_12 = 1;
        int VAR_13 = 1;
        const int16_t *VAR_14, *VAR_15;
        int VAR_16 = VAR_0->length[VAR_3][VAR_8 >= VAR_0->length_change[VAR_3]];
        int VAR_17 = (VAR_8 >= VAR_0->bits_main_spec_change[VAR_3]);

        int VAR_18 = VAR_0->bits_main_spec[0][VAR_3][VAR_17];
        VAR_10 = *VAR_1++;
        if (VAR_18 == 7) {
            if (VAR_10 & 0x40)
                VAR_12 = -1;
            VAR_10 &= 0x3F;
        }

        VAR_18 = VAR_0->bits_main_spec[1][VAR_3][VAR_17];
        VAR_11 = *VAR_1++;
        if (VAR_18 == 7) {
            if (VAR_11 & 0x40)
                VAR_13 = -1;
            VAR_11 &= 0x3F;
        }

        VAR_14 = VAR_4 + VAR_10 * VAR_6;
        VAR_15 = VAR_5 + VAR_11 * VAR_6;

        for (VAR_9 = 0; VAR_9 < VAR_16; VAR_9++)
            VAR_2[VAR_0->permut[VAR_3][VAR_7 + VAR_9]] = VAR_12 * VAR_14[VAR_9] +
                                                VAR_13 * VAR_15[VAR_9];

        VAR_7 += VAR_16;
    }
}
