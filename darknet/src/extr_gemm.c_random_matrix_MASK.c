
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 float* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 () ;

float *FUNC_2(int VAR_1, int VAR_2)
{
    int VAR_3;
    float *VAR_4 = FUNC_0(VAR_1*VAR_2, sizeof(float));
    for(VAR_3 = 0; VAR_3 < VAR_1*VAR_2; ++VAR_3){
        VAR_4[VAR_3] = (float)FUNC_1()/VAR_0;
    }
    return VAR_4;
}
