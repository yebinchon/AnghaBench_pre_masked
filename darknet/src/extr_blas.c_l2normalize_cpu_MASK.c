
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (float,int) ;
 float FUNC_1 (float) ;

void FUNC_2(float *VAR_0, float *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5,VAR_6,VAR_7;
    for(VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5){
        for(VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7){
            float VAR_8 = 0;
            for(VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6){
                int VAR_9 = VAR_5*VAR_3*VAR_4 + VAR_6*VAR_4 + VAR_7;
                VAR_8 += FUNC_0(VAR_0[VAR_9], 2);
            }
            VAR_8 = FUNC_1(VAR_8);
            for(VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6){
                int VAR_10 = VAR_5*VAR_3*VAR_4 + VAR_6*VAR_4 + VAR_7;
                VAR_0[VAR_10] /= VAR_8;
                VAR_1[VAR_10] = (1 - VAR_0[VAR_10]) / VAR_8;
            }
        }
    }
}
