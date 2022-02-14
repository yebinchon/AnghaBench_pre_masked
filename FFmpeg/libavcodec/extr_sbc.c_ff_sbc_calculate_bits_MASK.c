
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct sbc_frame {int subbands; size_t frequency; scalar_t__ mode; int channels; scalar_t__ allocation; int** scale_factor; int bitpool; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int** VAR_5 ;
 int** VAR_6 ;

void FUNC_0(const struct sbc_frame *VAR_7, int (*VAR_8)[8])
{
    int VAR_9 = VAR_7->subbands;
    uint8_t VAR_10 = VAR_7->frequency;

    if (VAR_7->mode == VAR_2 || VAR_7->mode == VAR_0) {
        int VAR_11[2][8], VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
        int VAR_17, VAR_18;

        for (VAR_17 = 0; VAR_17 < VAR_7->channels; VAR_17++) {
            VAR_13 = 0;
            if (VAR_7->allocation == VAR_3) {
                for (VAR_18 = 0; VAR_18 < VAR_9; VAR_18++) {
                    VAR_11[VAR_17][VAR_18] = VAR_7->scale_factor[VAR_17][VAR_18];
                    if (VAR_11[VAR_17][VAR_18] > VAR_13)
                        VAR_13 = VAR_11[VAR_17][VAR_18];
                }
            } else {
                for (VAR_18 = 0; VAR_18 < VAR_9; VAR_18++) {
                    if (VAR_7->scale_factor[VAR_17][VAR_18] == 0)
                        VAR_11[VAR_17][VAR_18] = -5;
                    else {
                        if (VAR_9 == 4)
                            VAR_12 = VAR_7->scale_factor[VAR_17][VAR_18] - VAR_5[VAR_10][VAR_18];
                        else
                            VAR_12 = VAR_7->scale_factor[VAR_17][VAR_18] - VAR_6[VAR_10][VAR_18];
                        if (VAR_12 > 0)
                            VAR_11[VAR_17][VAR_18] = VAR_12 / 2;
                        else
                            VAR_11[VAR_17][VAR_18] = VAR_12;
                    }
                    if (VAR_11[VAR_17][VAR_18] > VAR_13)
                        VAR_13 = VAR_11[VAR_17][VAR_18];
                }
            }

            VAR_14 = 0;
            VAR_15 = 0;
            VAR_16 = VAR_13 + 1;
            do {
                VAR_16--;
                VAR_14 += VAR_15;
                VAR_15 = 0;
                for (VAR_18 = 0; VAR_18 < VAR_9; VAR_18++) {
                    if ((VAR_11[VAR_17][VAR_18] > VAR_16 + 1) && (VAR_11[VAR_17][VAR_18] < VAR_16 + 16))
                        VAR_15++;
                    else if (VAR_11[VAR_17][VAR_18] == VAR_16 + 1)
                        VAR_15 += 2;
                }
            } while (VAR_14 + VAR_15 < VAR_7->bitpool);

            if (VAR_14 + VAR_15 == VAR_7->bitpool) {
                VAR_14 += VAR_15;
                VAR_16--;
            }

            for (VAR_18 = 0; VAR_18 < VAR_9; VAR_18++) {
                if (VAR_11[VAR_17][VAR_18] < VAR_16 + 2)
                    VAR_8[VAR_17][VAR_18] = 0;
                else {
                    VAR_8[VAR_17][VAR_18] = VAR_11[VAR_17][VAR_18] - VAR_16;
                    if (VAR_8[VAR_17][VAR_18] > 16)
                        VAR_8[VAR_17][VAR_18] = 16;
                }
            }

            for (VAR_18 = 0; VAR_14 < VAR_7->bitpool &&
                            VAR_18 < VAR_9; VAR_18++) {
                if ((VAR_8[VAR_17][VAR_18] >= 2) && (VAR_8[VAR_17][VAR_18] < 16)) {
                    VAR_8[VAR_17][VAR_18]++;
                    VAR_14++;
                } else if ((VAR_11[VAR_17][VAR_18] == VAR_16 + 1) && (VAR_7->bitpool > VAR_14 + 1)) {
                    VAR_8[VAR_17][VAR_18] = 2;
                    VAR_14 += 2;
                }
            }

            for (VAR_18 = 0; VAR_14 < VAR_7->bitpool &&
                            VAR_18 < VAR_9; VAR_18++) {
                if (VAR_8[VAR_17][VAR_18] < 16) {
                    VAR_8[VAR_17][VAR_18]++;
                    VAR_14++;
                }
            }

        }

    } else if (VAR_7->mode == VAR_4 || VAR_7->mode == VAR_1) {
        int VAR_19[2][8], VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
        int VAR_25, VAR_26;

        VAR_21 = 0;
        if (VAR_7->allocation == VAR_3) {
            for (VAR_25 = 0; VAR_25 < 2; VAR_25++) {
                for (VAR_26 = 0; VAR_26 < VAR_9; VAR_26++) {
                    VAR_19[VAR_25][VAR_26] = VAR_7->scale_factor[VAR_25][VAR_26];
                    if (VAR_19[VAR_25][VAR_26] > VAR_21)
                        VAR_21 = VAR_19[VAR_25][VAR_26];
                }
            }
        } else {
            for (VAR_25 = 0; VAR_25 < 2; VAR_25++) {
                for (VAR_26 = 0; VAR_26 < VAR_9; VAR_26++) {
                    if (VAR_7->scale_factor[VAR_25][VAR_26] == 0)
                        VAR_19[VAR_25][VAR_26] = -5;
                    else {
                        if (VAR_9 == 4)
                            VAR_20 = VAR_7->scale_factor[VAR_25][VAR_26] - VAR_5[VAR_10][VAR_26];
                        else
                            VAR_20 = VAR_7->scale_factor[VAR_25][VAR_26] - VAR_6[VAR_10][VAR_26];
                        if (VAR_20 > 0)
                            VAR_19[VAR_25][VAR_26] = VAR_20 / 2;
                        else
                            VAR_19[VAR_25][VAR_26] = VAR_20;
                    }
                    if (VAR_19[VAR_25][VAR_26] > VAR_21)
                        VAR_21 = VAR_19[VAR_25][VAR_26];
                }
            }
        }

        VAR_22 = 0;
        VAR_23 = 0;
        VAR_24 = VAR_21 + 1;
        do {
            VAR_24--;
            VAR_22 += VAR_23;
            VAR_23 = 0;
            for (VAR_25 = 0; VAR_25 < 2; VAR_25++) {
                for (VAR_26 = 0; VAR_26 < VAR_9; VAR_26++) {
                    if ((VAR_19[VAR_25][VAR_26] > VAR_24 + 1) && (VAR_19[VAR_25][VAR_26] < VAR_24 + 16))
                        VAR_23++;
                    else if (VAR_19[VAR_25][VAR_26] == VAR_24 + 1)
                        VAR_23 += 2;
                }
            }
        } while (VAR_22 + VAR_23 < VAR_7->bitpool);

        if (VAR_22 + VAR_23 == VAR_7->bitpool) {
            VAR_22 += VAR_23;
            VAR_24--;
        }

        for (VAR_25 = 0; VAR_25 < 2; VAR_25++) {
            for (VAR_26 = 0; VAR_26 < VAR_9; VAR_26++) {
                if (VAR_19[VAR_25][VAR_26] < VAR_24 + 2) {
                    VAR_8[VAR_25][VAR_26] = 0;
                } else {
                    VAR_8[VAR_25][VAR_26] = VAR_19[VAR_25][VAR_26] - VAR_24;
                    if (VAR_8[VAR_25][VAR_26] > 16)
                        VAR_8[VAR_25][VAR_26] = 16;
                }
            }
        }

        VAR_25 = 0;
        VAR_26 = 0;
        while (VAR_22 < VAR_7->bitpool) {
            if ((VAR_8[VAR_25][VAR_26] >= 2) && (VAR_8[VAR_25][VAR_26] < 16)) {
                VAR_8[VAR_25][VAR_26]++;
                VAR_22++;
            } else if ((VAR_19[VAR_25][VAR_26] == VAR_24 + 1) && (VAR_7->bitpool > VAR_22 + 1)) {
                VAR_8[VAR_25][VAR_26] = 2;
                VAR_22 += 2;
            }
            if (VAR_25 == 1) {
                VAR_25 = 0;
                VAR_26++;
                if (VAR_26 >= VAR_9)
                    break;
            } else
                VAR_25 = 1;
        }

        VAR_25 = 0;
        VAR_26 = 0;
        while (VAR_22 < VAR_7->bitpool) {
            if (VAR_8[VAR_25][VAR_26] < 16) {
                VAR_8[VAR_25][VAR_26]++;
                VAR_22++;
            }
            if (VAR_25 == 1) {
                VAR_25 = 0;
                VAR_26++;
                if (VAR_26 >= VAR_9)
                    break;
            } else
                VAR_25 = 1;
        }

    }

}
