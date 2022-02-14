
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0(const double VAR_0[3][3],
           double VAR_1, double VAR_2, double VAR_3,
           double * const VAR_4, double * const VAR_5, double * const VAR_6)
{
    *VAR_4 = VAR_0[0][0]*VAR_1 + VAR_0[0][1]*VAR_2 + VAR_0[0][2]*VAR_3;
    *VAR_5 = VAR_0[1][0]*VAR_1 + VAR_0[1][1]*VAR_2 + VAR_0[1][2]*VAR_3;
    *VAR_6 = VAR_0[2][0]*VAR_1 + VAR_0[2][1]*VAR_2 + VAR_0[2][2]*VAR_3;
}
