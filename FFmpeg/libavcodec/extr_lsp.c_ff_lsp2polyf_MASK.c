
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(const double *VAR_0, double *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;

    VAR_1[0] = 1.0;
    VAR_1[1] = -2 * VAR_0[0];
    VAR_0 -= 2;
    for(VAR_3=2; VAR_3<=VAR_2; VAR_3++)
    {
        double VAR_5 = -2 * VAR_0[2*VAR_3];
        VAR_1[VAR_3] = VAR_5 * VAR_1[VAR_3-1] + 2*VAR_1[VAR_3-2];
        for(VAR_4=VAR_3-1; VAR_4>1; VAR_4--)
            VAR_1[VAR_4] += VAR_1[VAR_4-1] * VAR_5 + VAR_1[VAR_4-2];
        VAR_1[1] += VAR_5;
    }
}
