
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 float VAR_1 ;
 float** VAR_2 ;
 int* VAR_3 ;
 float FUNC_0 (float) ;

float FUNC_1(float VAR_4, float VAR_5) {
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    float VAR_11 = (VAR_4 + VAR_5) * VAR_0;
    float VAR_12 = FUNC_0(VAR_4 + VAR_11);
    float VAR_13 = FUNC_0(VAR_5 + VAR_11);
    float VAR_14 = (VAR_12 + VAR_13) * VAR_1;

    float VAR_15[3], VAR_16[3], VAR_17[3];
    float VAR_18[3] = {0.0f, 0.0f, 0.0f};
    int VAR_19[3];

    VAR_15[0] = VAR_4 - (VAR_12 - VAR_14);
    VAR_16[0] = VAR_5 - (VAR_13 - VAR_14);

    VAR_6 = VAR_15[0] > VAR_16[0];
    VAR_7 = VAR_15[0] <= VAR_16[0];

    VAR_15[2] = VAR_15[0] + VAR_1 * 2.0f - 1.0f;
    VAR_16[2] = VAR_16[0] + VAR_1 * 2.0f - 1.0f;
    VAR_15[1] = VAR_15[0] - VAR_6 + VAR_1;
    VAR_16[1] = VAR_16[0] - VAR_7 + VAR_1;

    VAR_8 = (int) VAR_12 & 255;
    VAR_9 = (int) VAR_13 & 255;
    VAR_19[0] = VAR_3[VAR_8 + VAR_3[VAR_9]] % 12;
    VAR_19[1] = VAR_3[VAR_8 + VAR_6 + VAR_3[VAR_9 + VAR_7]] % 12;
    VAR_19[2] = VAR_3[VAR_8 + 1 + VAR_3[VAR_9 + 1]] % 12;

    for (VAR_10 = 0; VAR_10 <= 2; VAR_10++) {
        VAR_17[VAR_10] = 0.5f - VAR_15[VAR_10]*VAR_15[VAR_10] - VAR_16[VAR_10]*VAR_16[VAR_10];
    }

    for (VAR_10 = 0; VAR_10 <= 2; VAR_10++) {
        if (VAR_17[VAR_10] > 0) {
            VAR_18[VAR_10] = VAR_17[VAR_10] * VAR_17[VAR_10] * VAR_17[VAR_10] * VAR_17[VAR_10] *
                (VAR_2[VAR_19[VAR_10]][0] * VAR_15[VAR_10] + VAR_2[VAR_19[VAR_10]][1] * VAR_16[VAR_10]);
        }
    }

    return (VAR_18[0] + VAR_18[1] + VAR_18[2]) * 70.0f;
}
