
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,int,int,int) ;
 float FUNC_1 (float*,int ) ;
 float VAR_0 ;
 float VAR_1 ;
 int * VAR_2 ;
 int* VAR_3 ;
 float FUNC_2 (float) ;

float FUNC_3(float VAR_4, float VAR_5, float VAR_6) {
    int VAR_7, VAR_8[3], VAR_9[3], VAR_10[4], VAR_11, VAR_12, VAR_13;
    float VAR_14[4], VAR_15[4] = {0.0f, 0.0f, 0.0f, 0.0f};
    float VAR_16 = (VAR_4 + VAR_5 + VAR_6) * VAR_0;
    float VAR_17 = FUNC_2(VAR_4 + VAR_16);
    float VAR_18 = FUNC_2(VAR_5 + VAR_16);
    float VAR_19 = FUNC_2(VAR_6 + VAR_16);
    float VAR_20 = (VAR_17 + VAR_18 + VAR_19) * VAR_1;

    float VAR_21[4][3];

    VAR_21[0][0] = VAR_4 - (VAR_17 - VAR_20);
    VAR_21[0][1] = VAR_5 - (VAR_18 - VAR_20);
    VAR_21[0][2] = VAR_6 - (VAR_19 - VAR_20);

    if (VAR_21[0][0] >= VAR_21[0][1]) {
        if (VAR_21[0][1] >= VAR_21[0][2]) {
            FUNC_0(VAR_8, 1, 0, 0);
            FUNC_0(VAR_9, 1, 1, 0);
        } else if (VAR_21[0][0] >= VAR_21[0][2]) {
            FUNC_0(VAR_8, 1, 0, 0);
            FUNC_0(VAR_9, 1, 0, 1);
        } else {
            FUNC_0(VAR_8, 0, 0, 1);
            FUNC_0(VAR_9, 1, 0, 1);
        }
    } else {
        if (VAR_21[0][1] < VAR_21[0][2]) {
            FUNC_0(VAR_8, 0, 0, 1);
            FUNC_0(VAR_9, 0, 1, 1);
        } else if (VAR_21[0][0] < VAR_21[0][2]) {
            FUNC_0(VAR_8, 0, 1, 0);
            FUNC_0(VAR_9, 0, 1, 1);
        } else {
            FUNC_0(VAR_8, 0, 1, 0);
            FUNC_0(VAR_9, 1, 1, 0);
        }
    }

    for (VAR_7 = 0; VAR_7 <= 2; VAR_7++) {
        VAR_21[3][VAR_7] = VAR_21[0][VAR_7] - 1.0f + 3.0f * VAR_1;
        VAR_21[2][VAR_7] = VAR_21[0][VAR_7] - VAR_9[VAR_7] + 2.0f * VAR_1;
        VAR_21[1][VAR_7] = VAR_21[0][VAR_7] - VAR_8[VAR_7] + VAR_1;
    }

    VAR_11 = (int) VAR_17 & 255;
    VAR_12 = (int) VAR_18 & 255;
    VAR_13 = (int) VAR_19 & 255;
    VAR_10[0] = VAR_3[VAR_11 + VAR_3[VAR_12 + VAR_3[VAR_13]]] % 12;
    VAR_10[1] = VAR_3[VAR_11 + VAR_8[0] + VAR_3[VAR_12 + VAR_8[1] + VAR_3[VAR_8[2] + VAR_13]]] % 12;
    VAR_10[2] = VAR_3[VAR_11 + VAR_9[0] + VAR_3[VAR_12 + VAR_9[1] + VAR_3[VAR_9[2] + VAR_13]]] % 12;
    VAR_10[3] = VAR_3[VAR_11 + 1 + VAR_3[VAR_12 + 1 + VAR_3[VAR_13 + 1]]] % 12;

    for (VAR_7 = 0; VAR_7 <= 3; VAR_7++) {
        VAR_14[VAR_7] = 0.6f - VAR_21[VAR_7][0] * VAR_21[VAR_7][0] - VAR_21[VAR_7][1] * VAR_21[VAR_7][1] -
            VAR_21[VAR_7][2] * VAR_21[VAR_7][2];
    }

    for (VAR_7 = 0; VAR_7 <= 3; VAR_7++) {
        if (VAR_14[VAR_7] > 0) {
            VAR_15[VAR_7] = VAR_14[VAR_7] * VAR_14[VAR_7] * VAR_14[VAR_7] * VAR_14[VAR_7] * FUNC_1(VAR_21[VAR_7], VAR_2[VAR_10[VAR_7]]);
        }
    }

    return (VAR_15[0] + VAR_15[1] + VAR_15[2] + VAR_15[3]) * 32.0f;
}
