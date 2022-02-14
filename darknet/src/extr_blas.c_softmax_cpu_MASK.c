
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float*,int,float,int,float*) ;

void FUNC_1(float *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, float VAR_7, float *VAR_8)
{
    int VAR_9, VAR_10;
    for(VAR_10 = 0; VAR_10 < VAR_2; ++VAR_10){
        for(VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9){
            FUNC_0(VAR_0 + VAR_10*VAR_3 + VAR_9*VAR_5, VAR_1, VAR_7, VAR_6, VAR_8 + VAR_10*VAR_3 + VAR_9*VAR_5);
        }
    }
}
