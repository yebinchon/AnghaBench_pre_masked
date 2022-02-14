
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float*,int) ;
 double FUNC_1 (float*,int) ;
 int FUNC_2 (char*,double,float,float) ;
 float FUNC_3 (float*,int) ;

void FUNC_4(float *VAR_0, int VAR_1)
{
    float VAR_2 = FUNC_0(VAR_0, VAR_1);
    float VAR_3 = FUNC_3(VAR_0, VAR_1);
    FUNC_2("MSE: %.6f, Mean: %.6f, Variance: %.6f\n", FUNC_1(VAR_0, VAR_1), VAR_2, VAR_3);
}
