
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;



__attribute__((used)) static void FUNC_0(int32_t *VAR_0, int32_t *VAR_1, int32_t *VAR_2,
                                    int32_t *VAR_3, int32_t *VAR_4, int32_t VAR_5,
                                    int32_t VAR_6) {
    if (*VAR_3 < 0) {
        VAR_0[0] -= VAR_1[0]; VAR_0[1] -= VAR_1[1]; VAR_0[2] -= VAR_1[2]; VAR_0[3] -= VAR_1[3];
        VAR_0[4] -= VAR_1[4]; VAR_0[5] -= VAR_1[5]; VAR_0[6] -= VAR_1[6]; VAR_0[7] -= VAR_1[7];
    } else if (*VAR_3 > 0) {
        VAR_0[0] += VAR_1[0]; VAR_0[1] += VAR_1[1]; VAR_0[2] += VAR_1[2]; VAR_0[3] += VAR_1[3];
        VAR_0[4] += VAR_1[4]; VAR_0[5] += VAR_1[5]; VAR_0[6] += VAR_1[6]; VAR_0[7] += VAR_1[7];
    }

    VAR_6 += VAR_2[0] * VAR_0[0] + VAR_2[1] * VAR_0[1] + VAR_2[2] * VAR_0[2] + VAR_2[3] * VAR_0[3] +
             VAR_2[4] * VAR_0[4] + VAR_2[5] * VAR_0[5] + VAR_2[6] * VAR_0[6] + VAR_2[7] * VAR_0[7];

    VAR_1[0] = VAR_1[1]; VAR_1[1] = VAR_1[2]; VAR_1[2] = VAR_1[3]; VAR_1[3] = VAR_1[4];
    VAR_2[0] = VAR_2[1]; VAR_2[1] = VAR_2[2]; VAR_2[2] = VAR_2[3]; VAR_2[3] = VAR_2[4];

    VAR_1[4] = ((VAR_2[4] >> 30) | 1);
    VAR_1[5] = ((VAR_2[5] >> 30) | 2) & ~1;
    VAR_1[6] = ((VAR_2[6] >> 30) | 2) & ~1;
    VAR_1[7] = ((VAR_2[7] >> 30) | 4) & ~3;

    VAR_2[4] = -VAR_2[5]; VAR_2[5] = -VAR_2[6];
    VAR_2[6] = *VAR_4 - VAR_2[7]; VAR_2[7] = *VAR_4;
    VAR_2[5] += VAR_2[6]; VAR_2[4] += VAR_2[5];

    *VAR_4 -= (VAR_6 >> VAR_5);
    *VAR_3 = *VAR_4;
}
