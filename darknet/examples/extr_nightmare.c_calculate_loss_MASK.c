
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float*,int) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float*,int) ;

void FUNC_3(float *VAR_0, float *VAR_1, int VAR_2, float VAR_3)
{
    int VAR_4;
    float VAR_5 = FUNC_0(VAR_0, VAR_2);
    float VAR_6 = FUNC_2(VAR_0, VAR_2);
    for(VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4){
        if(VAR_1[VAR_4] > VAR_5 + VAR_3*FUNC_1(VAR_6)) VAR_1[VAR_4] = VAR_0[VAR_4];
        else VAR_1[VAR_4] = 0;
    }
}
