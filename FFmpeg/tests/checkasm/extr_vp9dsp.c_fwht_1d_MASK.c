
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;

__attribute__((used)) static void FUNC_1(double *VAR_0, const double *VAR_1, int VAR_2)
{
    double VAR_3 = VAR_1[0] + VAR_1[1];
    double VAR_4 = VAR_1[3] - VAR_1[2];
    double VAR_5 = FUNC_0((VAR_3 - VAR_4) * 0.5);
    double VAR_6 = VAR_5 - VAR_1[1];
    double VAR_7 = VAR_5 - VAR_1[2];

    VAR_0[0] = VAR_3 - VAR_7;
    VAR_0[1] = VAR_7;
    VAR_0[2] = VAR_4 + VAR_6;
    VAR_0[3] = VAR_6;
}
