
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(float (*VAR_0)[2], const float (*VAR_1)[2],
                         const float VAR_2[2], const float VAR_3[2],
                         float VAR_4, int VAR_5, int VAR_6)
{
    float VAR_7[4];
    int VAR_8;

    VAR_7[0] = VAR_3[0] * VAR_4 * VAR_4;
    VAR_7[1] = VAR_3[1] * VAR_4 * VAR_4;
    VAR_7[2] = VAR_2[0] * VAR_4;
    VAR_7[3] = VAR_2[1] * VAR_4;

    for (VAR_8 = VAR_5; VAR_8 < VAR_6; VAR_8++) {
        VAR_0[VAR_8][0] =
            VAR_1[VAR_8 - 2][0] * VAR_7[0] -
            VAR_1[VAR_8 - 2][1] * VAR_7[1] +
            VAR_1[VAR_8 - 1][0] * VAR_7[2] -
            VAR_1[VAR_8 - 1][1] * VAR_7[3] +
            VAR_1[VAR_8][0];
        VAR_0[VAR_8][1] =
            VAR_1[VAR_8 - 2][1] * VAR_7[0] +
            VAR_1[VAR_8 - 2][0] * VAR_7[1] +
            VAR_1[VAR_8 - 1][1] * VAR_7[2] +
            VAR_1[VAR_8 - 1][0] * VAR_7[3] +
            VAR_1[VAR_8][1];
    }
}
