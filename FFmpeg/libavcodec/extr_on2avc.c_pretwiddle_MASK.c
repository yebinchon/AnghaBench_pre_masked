
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(float *VAR_0, float *VAR_1, int VAR_2, int VAR_3,
                       int VAR_4, int VAR_5, int VAR_6, const double * const *VAR_7)
{
    float *VAR_8, *VAR_9;
    const double *VAR_10;
    int VAR_11, VAR_12;

    VAR_9 = VAR_1;
    VAR_10 = VAR_7[0];
    for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
        double VAR_13 = 0;
        for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++)
            VAR_13 += VAR_0[VAR_12] * VAR_10[VAR_12 * VAR_3 + VAR_11];
        VAR_9[VAR_11] += VAR_13;
    }

    VAR_9 = VAR_1 + VAR_2 - VAR_3;
    VAR_10 = VAR_7[VAR_5];
    VAR_8 = VAR_0 + (VAR_2 - VAR_3) / VAR_4 + 1 + VAR_5;
    for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
        double VAR_14 = 0;
        for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++)
            VAR_14 += VAR_8[VAR_12] * VAR_10[VAR_12 * VAR_3 + VAR_11];
        VAR_9[VAR_11] += VAR_14;
    }
}
