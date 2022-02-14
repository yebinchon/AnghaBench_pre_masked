
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(float VAR_0[32][4], float **VAR_1,
                       const float *VAR_2, ptrdiff_t VAR_3, ptrdiff_t VAR_4)
{
    float VAR_5 = VAR_2[0];
    float VAR_6 = VAR_2[1];
    float VAR_7 = VAR_2[2];
    float VAR_8 = VAR_2[3];

    float VAR_9 = VAR_2[4];
    float VAR_10 = VAR_2[5];
    float VAR_11 = VAR_2[6];
    float VAR_12 = VAR_2[7];

    float VAR_13 = VAR_2[8];
    float VAR_14 = VAR_2[9];

    int VAR_15;


    for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
        float *VAR_16 = VAR_1[VAR_15] + VAR_3;

        float VAR_17 = VAR_16[-4] * VAR_5 - VAR_16[-1] * VAR_8;
        float VAR_18 = VAR_16[-3] * VAR_6 - VAR_16[-2] * VAR_7;
        float VAR_19 = VAR_16[ 2] * VAR_6 + VAR_16[ 1] * VAR_7;
        float VAR_20 = VAR_16[ 3] * VAR_5 + VAR_16[ 0] * VAR_8;

        VAR_0[VAR_15][0] = VAR_9 * VAR_18 - VAR_10 * VAR_19 + VAR_12 * VAR_17 - VAR_11 * VAR_20;
        VAR_0[VAR_15][1] = VAR_9 * VAR_20 - VAR_10 * VAR_17 - VAR_12 * VAR_18 - VAR_11 * VAR_19;
        VAR_0[VAR_15][2] = VAR_11 * VAR_18 + VAR_10 * VAR_20 - VAR_12 * VAR_19 + VAR_9 * VAR_17;
        VAR_0[VAR_15][3] = VAR_11 * VAR_17 - VAR_10 * VAR_18 + VAR_12 * VAR_20 - VAR_9 * VAR_19;
    }


    for (VAR_15 = 12; VAR_15 < VAR_4 - 1; VAR_15++) {
        float VAR_21 = VAR_0[VAR_15 ][3] * VAR_13;
        float VAR_22 = VAR_0[VAR_15+1][0] * VAR_13;
        VAR_0[VAR_15 ][3] += VAR_22 - VAR_21;
        VAR_0[VAR_15+1][0] -= VAR_22 + VAR_21;
        VAR_21 = VAR_0[VAR_15 ][2] * VAR_14;
        VAR_22 = VAR_0[VAR_15+1][1] * VAR_14;
        VAR_0[VAR_15 ][2] += VAR_22 - VAR_21;
        VAR_0[VAR_15+1][1] -= VAR_22 + VAR_21;
    }
}
