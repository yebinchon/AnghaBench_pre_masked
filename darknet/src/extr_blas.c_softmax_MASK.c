
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 float FUNC_0 (float) ;

void FUNC_1(float *VAR_1, int VAR_2, float VAR_3, int VAR_4, float *VAR_5)
{
    int VAR_6;
    float VAR_7 = 0;
    float VAR_8 = -VAR_0;
    for(VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6){
        if(VAR_1[VAR_6*VAR_4] > VAR_8) VAR_8 = VAR_1[VAR_6*VAR_4];
    }
    for(VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6){
        float VAR_9 = FUNC_0(VAR_1[VAR_6*VAR_4]/VAR_3 - VAR_8/VAR_3);
        VAR_7 += VAR_9;
        VAR_5[VAR_6*VAR_4] = VAR_9;
    }
    for(VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6){
        VAR_5[VAR_6*VAR_4] /= VAR_7;
    }
}
