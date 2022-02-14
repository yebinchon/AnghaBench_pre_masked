
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int n; int c; float* weights; } ;
typedef TYPE_1__ layer ;


 int FUNC_0 (int) ;

void FUNC_1(layer VAR_0)
{
    int VAR_1,VAR_2,VAR_3;
    float VAR_4 = (VAR_0.size-1) / 2.;
    for(VAR_3 = 0; VAR_3 < VAR_0.n; ++VAR_3){
        for(VAR_2 = 0; VAR_2 < VAR_0.size; ++VAR_2){
            for(VAR_1 = 0; VAR_1 < VAR_0.size; ++VAR_1){
                float VAR_5 = (1 - FUNC_0(VAR_1 - VAR_4)) * (1 - FUNC_0(VAR_2 - VAR_4));
                int VAR_6 = VAR_3%VAR_0.c;
                int VAR_7 = VAR_3*VAR_0.size*VAR_0.size*VAR_0.c + VAR_6*VAR_0.size*VAR_0.size + VAR_2*VAR_0.size + VAR_1;
                VAR_0.weights[VAR_7] = VAR_5;
            }
        }
    }
}
