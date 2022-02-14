
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
                        int VAR_4, int VAR_5, uint32_t VAR_6,
                        uint32_t *VAR_7, uint32_t *VAR_8,
                        int VAR_9, int VAR_10,
                        uint32_t *VAR_11, uint32_t *VAR_12,
                        uint32_t VAR_13, int VAR_14, int VAR_15,
                        int *VAR_16, int *VAR_17)
{
    uint32_t VAR_18, VAR_19, VAR_20;
    int VAR_21;

    switch (VAR_2) {
    case 0:
        while (VAR_3-- > 0) {
            if (*VAR_12 >= VAR_1->height)
                return VAR_0;

            VAR_7[*VAR_12 * VAR_9 + *VAR_11] = VAR_6;
            (*VAR_11)++;
            if (*VAR_11 >= VAR_4 * 16 + VAR_15 || *VAR_11 >= VAR_1->width) {
                *VAR_11 = VAR_4 * 16 + VAR_14;
                (*VAR_12)++;
            }
        }
        break;
    case 1:
        while (VAR_3-- > 0) {
            if (*VAR_11 == 0) {
                if (*VAR_12 < 1)
                    return VAR_0;
                VAR_21 = VAR_13;
            } else {
                VAR_21 = 0;
            }

            if (*VAR_12 >= VAR_1->height)
                return VAR_0;

            VAR_6 = VAR_7[*VAR_12 * VAR_9 + *VAR_11 - 1 - VAR_21];
            VAR_7[*VAR_12 * VAR_9 + *VAR_11] = VAR_6;
            (*VAR_11)++;
            if (*VAR_11 >= VAR_4 * 16 + VAR_15 || *VAR_11 >= VAR_1->width) {
                *VAR_11 = VAR_4 * 16 + VAR_14;
                (*VAR_12)++;
            }
        }
        break;
    case 2:
        while (VAR_3-- > 0) {
            if (*VAR_12 < 1 || *VAR_12 >= VAR_1->height)
                return VAR_0;

            VAR_6 = VAR_7[(*VAR_12 - 1) * VAR_9 + *VAR_11];
            VAR_7[*VAR_12 * VAR_9 + *VAR_11] = VAR_6;
            (*VAR_11)++;
            if (*VAR_11 >= VAR_4 * 16 + VAR_15 || *VAR_11 >= VAR_1->width) {
                *VAR_11 = VAR_4 * 16 + VAR_14;
                (*VAR_12)++;
            }
        }
        break;
    case 3:
        while (VAR_3-- > 0) {
            if (*VAR_12 >= VAR_1->height)
                return VAR_0;

            VAR_6 = VAR_8[*VAR_12 * VAR_10 + *VAR_11];
            VAR_7[*VAR_12 * VAR_9 + *VAR_11] = VAR_6;
            (*VAR_11)++;
            if (*VAR_11 >= VAR_4 * 16 + VAR_15 || *VAR_11 >= VAR_1->width) {
                *VAR_11 = VAR_4 * 16 + VAR_14;
                (*VAR_12)++;
            }
        }
        break;
    case 4:
        while (VAR_3-- > 0) {
            uint8_t *VAR_22 = (uint8_t *)VAR_7;

            if (*VAR_12 < 1 || *VAR_12 >= VAR_1->height)
                return VAR_0;

            if (*VAR_11 == 0) {
                if (*VAR_12 < 2)
                    return VAR_0;
                VAR_21 = VAR_13;
            } else {
                VAR_21 = 0;
            }

            VAR_18 = VAR_22[((*VAR_12 - 1) * VAR_9 + *VAR_11) * 4] +
                VAR_22[(*VAR_12 * VAR_9 + *VAR_11 - 1 - VAR_21) * 4] -
                VAR_22[((*VAR_12 - 1) * VAR_9 + *VAR_11 - 1 - VAR_21) * 4];
            VAR_19 = VAR_22[((*VAR_12 - 1) * VAR_9 + *VAR_11) * 4 + 1] +
                VAR_22[(*VAR_12 * VAR_9 + *VAR_11 - 1 - VAR_21) * 4 + 1] -
                VAR_22[((*VAR_12 - 1) * VAR_9 + *VAR_11 - 1 - VAR_21) * 4 + 1];
            VAR_20 = VAR_22[((*VAR_12 - 1) * VAR_9 + *VAR_11) * 4 + 2] +
                VAR_22[(*VAR_12 * VAR_9 + *VAR_11 - 1 - VAR_21) * 4 + 2] -
                VAR_22[((*VAR_12 - 1) * VAR_9 + *VAR_11 - 1 - VAR_21) * 4 + 2];
            VAR_6 = ((VAR_20 & 0xFF) << 16) + ((VAR_19 & 0xFF) << 8) + (VAR_18 & 0xFF);
            VAR_7[*VAR_12 * VAR_9 + *VAR_11] = VAR_6;
            (*VAR_11)++;
            if (*VAR_11 >= VAR_4 * 16 + VAR_15 || *VAR_11 >= VAR_1->width) {
                *VAR_11 = VAR_4 * 16 + VAR_14;
                (*VAR_12)++;
            }
        }
        break;
    case 5:
        while (VAR_3-- > 0) {
            if (*VAR_12 < 1 || *VAR_12 >= VAR_1->height)
                return VAR_0;

            if (*VAR_11 == 0) {
                if (*VAR_12 < 2)
                    return VAR_0;
                VAR_21 = VAR_13;
            } else {
                VAR_21 = 0;
            }

            VAR_6 = VAR_7[(*VAR_12 - 1) * VAR_9 + *VAR_11 - 1 - VAR_21];
            VAR_7[*VAR_12 * VAR_9 + *VAR_11] = VAR_6;
            (*VAR_11)++;
            if (*VAR_11 >= VAR_4 * 16 + VAR_15 || *VAR_11 >= VAR_1->width) {
                *VAR_11 = VAR_4 * 16 + VAR_14;
                (*VAR_12)++;
            }
        }
        break;
    }

    if (VAR_1->bits_per_coded_sample == 16) {
        *VAR_17 = (VAR_6 & 0x3F00) >> 2;
        *VAR_16 = (VAR_6 & 0x3FFFFF) >> 16;
    } else {
        *VAR_17 = (VAR_6 & 0xFC00) >> 4;
        *VAR_16 = (VAR_6 & 0xFFFFFF) >> 18;
    }

    return 0;
}
