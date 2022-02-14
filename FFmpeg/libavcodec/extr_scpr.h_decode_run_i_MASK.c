
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int height; int width; int bits_per_coded_sample; } ;
typedef TYPE_1__ AVCodecContext ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(AVCodecContext *VAR_1, uint32_t VAR_2, int VAR_3,
                        int *VAR_4, int *VAR_5, uint32_t VAR_6, uint32_t *VAR_7,
                        int VAR_8, uint32_t *VAR_9, uint32_t *VAR_10,
                        uint32_t VAR_11, int VAR_12, int *VAR_13, int *VAR_14)
{
    uint32_t VAR_15, VAR_16, VAR_17;
    int VAR_18;
    int VAR_19 = *VAR_4,
        VAR_20 = *VAR_5;
    uint32_t VAR_21 = *VAR_9,
             VAR_22 = *VAR_10;

    if (VAR_20 >= VAR_1->height)
        return VAR_0;

    switch (VAR_2) {
    case 0:
        while (VAR_3-- > 0) {
            VAR_7[VAR_20 * VAR_8 + VAR_19] = VAR_6;
            VAR_21 = VAR_19;
            VAR_22 = VAR_20;
            (VAR_19)++;
            if (VAR_19 >= VAR_1->width) {
                VAR_19 = 0;
                (VAR_20)++;
                if (VAR_20 >= VAR_1->height && VAR_3)
                    return VAR_0;
            }
        }
        break;
    case 1:
        while (VAR_3-- > 0) {
            VAR_7[VAR_20 * VAR_8 + VAR_19] = VAR_7[VAR_22 * VAR_8 + VAR_21];
            VAR_21 = VAR_19;
            VAR_22 = VAR_20;
            (VAR_19)++;
            if (VAR_19 >= VAR_1->width) {
                VAR_19 = 0;
                (VAR_20)++;
                if (VAR_20 >= VAR_1->height && VAR_3)
                    return VAR_0;
            }
        }
        VAR_6 = VAR_7[VAR_22 * VAR_8 + VAR_21];
        break;
    case 2:
        if (VAR_20 < 1)
            return VAR_0;

        while (VAR_3-- > 0) {
            VAR_6 = VAR_7[VAR_20 * VAR_8 + VAR_19 + VAR_12 + 1];
            VAR_7[VAR_20 * VAR_8 + VAR_19] = VAR_6;
            VAR_21 = VAR_19;
            VAR_22 = VAR_20;
            (VAR_19)++;
            if (VAR_19 >= VAR_1->width) {
                VAR_19 = 0;
                (VAR_20)++;
                if (VAR_20 >= VAR_1->height && VAR_3)
                    return VAR_0;
            }
        }
        break;
    case 4:
        if (VAR_20 < 1 || (VAR_20 == 1 && VAR_19 == 0))
            return VAR_0;

        while (VAR_3-- > 0) {
            uint8_t *VAR_23 = (uint8_t *)VAR_7;
            int VAR_24 = (VAR_22 * VAR_8 + VAR_21) * 4;
            int VAR_25 = ((VAR_20 * VAR_8 + VAR_19) + VAR_12) * 4;

            if (VAR_19 == 0) {
                VAR_18 = VAR_11 * 4;
            } else {
                VAR_18 = 0;
            }

            VAR_15 = VAR_23[VAR_24] +
                VAR_23[VAR_25 + 4] -
                VAR_23[VAR_25 - VAR_18 ];
            VAR_16 = VAR_23[VAR_24 + 1] +
                VAR_23[VAR_25 + 5] -
                VAR_23[VAR_25 - VAR_18 + 1];
            VAR_17 = VAR_23[VAR_24 + 2] +
                VAR_23[VAR_25 + 6] -
                VAR_23[VAR_25 - VAR_18 + 2];
            VAR_6 = ((VAR_17 & 0xFF) << 16) + ((VAR_16 & 0xFF) << 8) + (VAR_15 & 0xFF);
            VAR_7[VAR_20 * VAR_8 + VAR_19] = VAR_6;
            VAR_21 = VAR_19;
            VAR_22 = VAR_20;
            (VAR_19)++;
            if (VAR_19 >= VAR_1->width) {
                VAR_19 = 0;
                (VAR_20)++;
                if (VAR_20 >= VAR_1->height && VAR_3)
                    return VAR_0;
            }
        }
        break;
    case 5:
        if (VAR_20 < 1 || (VAR_20 == 1 && VAR_19 == 0))
            return VAR_0;

        while (VAR_3-- > 0) {
            if (VAR_19 == 0) {
                VAR_18 = VAR_11;
            } else {
                VAR_18 = 0;
            }

            VAR_6 = VAR_7[VAR_20 * VAR_8 + VAR_19 + VAR_12 - VAR_18];
            VAR_7[VAR_20 * VAR_8 + VAR_19] = VAR_6;
            VAR_21 = VAR_19;
            VAR_22 = VAR_20;
            (VAR_19)++;
            if (VAR_19 >= VAR_1->width) {
                VAR_19 = 0;
                (VAR_20)++;
                if (VAR_20 >= VAR_1->height && VAR_3)
                    return VAR_0;
            }
        }
        break;
    }

    *VAR_4 = VAR_19;
    *VAR_5 = VAR_20;
    *VAR_9= VAR_21;
    *VAR_10= VAR_22;

    if (VAR_1->bits_per_coded_sample == 16) {
        *VAR_14 = (VAR_6 & 0x3F00) >> 2;
        *VAR_13 = (VAR_6 & 0x3FFFFF) >> 16;
    } else {
        *VAR_14 = (VAR_6 & 0xFC00) >> 4;
        *VAR_13 = (VAR_6 & 0xFFFFFF) >> 18;
    }

    return 0;
}
