
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(float **VAR_0, float **VAR_1,
                                           int VAR_2)
{
    int VAR_3;
    float VAR_4, VAR_5;
    float VAR_6 = VAR_1[0][0];
    float VAR_7 = VAR_1[0][1];
    float VAR_8 = VAR_1[0][3];

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        VAR_4 = VAR_0[0][VAR_3] * VAR_6 +
             VAR_0[1][VAR_3] * VAR_7 +
             VAR_0[3][VAR_3] * VAR_8;

        VAR_5 = VAR_0[1][VAR_3] * VAR_7 +
             VAR_0[2][VAR_3] * VAR_6 +
             VAR_0[4][VAR_3] * VAR_8;

        VAR_0[0][VAR_3] = VAR_4;
        VAR_0[1][VAR_3] = VAR_5;
    }
}
