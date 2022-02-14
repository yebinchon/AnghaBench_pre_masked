
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(double VAR_0[3][3],
               const double VAR_1[3][3], const double VAR_2[3][3])
{
    int VAR_3, VAR_4;

    for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
        for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
            VAR_0[VAR_3][VAR_4] = VAR_2[VAR_3][0] * VAR_1[0][VAR_4] +
                        VAR_2[VAR_3][1] * VAR_1[1][VAR_4] +
                        VAR_2[VAR_3][2] * VAR_1[2][VAR_4];
}
