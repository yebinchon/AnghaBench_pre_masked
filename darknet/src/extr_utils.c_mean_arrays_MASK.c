
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float*,int ,int) ;

void FUNC_1(float **VAR_0, int VAR_1, int VAR_2, float *VAR_3)
{
    int VAR_4;
    int VAR_5;
    FUNC_0(VAR_3, 0, VAR_2*sizeof(float));
    for(VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5){
        for(VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4){
            VAR_3[VAR_4] += VAR_0[VAR_5][VAR_4];
        }
    }
    for(VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4){
        VAR_3[VAR_4] /= VAR_1;
    }
}
