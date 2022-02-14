
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(double const *VAR_0, double *VAR_1)
{
    VAR_1[0] = VAR_0[0] * VAR_0[0];
    VAR_1[1] = 2 * VAR_0[0] * VAR_0[1];
    VAR_1[2] = 2 * VAR_0[0] * VAR_0[2] + VAR_0[1] * VAR_0[1];
    VAR_1[3] = 2 * VAR_0[1] * VAR_0[2];
    VAR_1[4] = VAR_0[2] * VAR_0[2];
}
