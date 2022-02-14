
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (int,int) ;

float **FUNC_1(float *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3;
    float **VAR_4 = FUNC_0(VAR_1, sizeof(float*));
    for(VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3){
        VAR_4[VAR_3] = FUNC_0(VAR_2, sizeof(float));
        int VAR_5 = (int)VAR_0[VAR_3];
        VAR_4[VAR_3][VAR_5] = 1;
    }
    return VAR_4;
}
