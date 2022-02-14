
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float* FUNC_0 (int,int) ;
 int FUNC_1 (float*) ;
 int FUNC_2 (float*,float*,int) ;

void FUNC_3(float *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    float *VAR_5 = FUNC_0(VAR_1*VAR_2*VAR_3, sizeof(float));
    int VAR_6,VAR_7,VAR_8;
    for(VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8){
        for(VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7){
            for(VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6){
                int VAR_9 = VAR_8*VAR_2*VAR_1 + VAR_7*VAR_1 + VAR_6;
                int VAR_10 = VAR_8*VAR_2*VAR_1 + VAR_6*VAR_2 + VAR_7;
                if (VAR_4) VAR_5[VAR_10] = VAR_0[VAR_9];
                else VAR_5[VAR_9] = VAR_0[VAR_10];
            }
        }
    }
    FUNC_2(VAR_0, VAR_5, VAR_1*VAR_2*VAR_3*sizeof(float));
    FUNC_1(VAR_5);
}
