
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 float FUNC_1 (float,float,float) ;
 float FUNC_2 (float,float,float) ;
 float FUNC_3 (int,float,float,float) ;

__attribute__((used)) static void FUNC_4(float *VAR_0, float *VAR_1, float *VAR_2, float VAR_3)
{
    float VAR_4 = FUNC_1(*VAR_0, *VAR_1, *VAR_2);
    float VAR_5 = FUNC_2(*VAR_0, *VAR_1, *VAR_2);
    float VAR_6, VAR_7;

    VAR_3 *= 0.5;

    if (*VAR_0 == *VAR_1 && *VAR_1 == *VAR_2) {
        VAR_6 = 0.;
    } else if (VAR_4 == *VAR_0) {
        VAR_6 = 60. * (0. + (*VAR_1 - *VAR_2) / (VAR_4 - VAR_5));
    } else if (VAR_4 == *VAR_1) {
        VAR_6 = 60. * (2. + (*VAR_2 - *VAR_0) / (VAR_4 - VAR_5));
    } else if (VAR_4 == *VAR_2) {
        VAR_6 = 60. * (4. + (*VAR_0 - *VAR_1) / (VAR_4 - VAR_5));
    } else {
        VAR_6 = 0.;
    }
    if (VAR_6 < 0.)
        VAR_6 += 360.;

    if (VAR_4 == 0. || VAR_5 == 1.) {
        VAR_7 = 0.;
    } else {
        VAR_7 = (VAR_4 - VAR_5) / (1. - FUNC_0(2. * VAR_3 - 1));
    }

    *VAR_0 = FUNC_3(0, VAR_6, VAR_7, VAR_3);
    *VAR_1 = FUNC_3(8, VAR_6, VAR_7, VAR_3);
    *VAR_2 = FUNC_3(4, VAR_6, VAR_7, VAR_3);
}
