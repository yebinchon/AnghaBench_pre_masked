
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(const float VAR_0[40][2], float VAR_1[3][2][2])
{
    float VAR_2 = VAR_0[0][0] * VAR_0[2][0] + VAR_0[0][1] * VAR_0[2][1];
    float VAR_3 = VAR_0[0][0] * VAR_0[2][1] - VAR_0[0][1] * VAR_0[2][0];
    float VAR_4 = 0.0f, VAR_5 = 0.0f, VAR_6 = 0.0f;
    int VAR_7;
    for (VAR_7 = 1; VAR_7 < 38; VAR_7++) {
        VAR_6 += VAR_0[VAR_7][0] * VAR_0[VAR_7 ][0] + VAR_0[VAR_7][1] * VAR_0[VAR_7 ][1];
        VAR_4 += VAR_0[VAR_7][0] * VAR_0[VAR_7 + 1][0] + VAR_0[VAR_7][1] * VAR_0[VAR_7 + 1][1];
        VAR_5 += VAR_0[VAR_7][0] * VAR_0[VAR_7 + 1][1] - VAR_0[VAR_7][1] * VAR_0[VAR_7 + 1][0];
        VAR_2 += VAR_0[VAR_7][0] * VAR_0[VAR_7 + 2][0] + VAR_0[VAR_7][1] * VAR_0[VAR_7 + 2][1];
        VAR_3 += VAR_0[VAR_7][0] * VAR_0[VAR_7 + 2][1] - VAR_0[VAR_7][1] * VAR_0[VAR_7 + 2][0];
    }
    VAR_1[2 - 2][1][0] = VAR_2;
    VAR_1[2 - 2][1][1] = VAR_3;
    VAR_1[2 ][1][0] = VAR_6 + VAR_0[ 0][0] * VAR_0[ 0][0] + VAR_0[ 0][1] * VAR_0[ 0][1];
    VAR_1[1 ][0][0] = VAR_6 + VAR_0[38][0] * VAR_0[38][0] + VAR_0[38][1] * VAR_0[38][1];
    VAR_1[2 - 1][1][0] = VAR_4 + VAR_0[ 0][0] * VAR_0[ 1][0] + VAR_0[ 0][1] * VAR_0[ 1][1];
    VAR_1[2 - 1][1][1] = VAR_5 + VAR_0[ 0][0] * VAR_0[ 1][1] - VAR_0[ 0][1] * VAR_0[ 1][0];
    VAR_1[0 ][0][0] = VAR_4 + VAR_0[38][0] * VAR_0[39][0] + VAR_0[38][1] * VAR_0[39][1];
    VAR_1[0 ][0][1] = VAR_5 + VAR_0[38][0] * VAR_0[39][1] - VAR_0[38][1] * VAR_0[39][0];
}
