
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; float* scales; double* rolling_variance; int c; int size; float* weights; float* biases; float* rolling_mean; } ;
typedef TYPE_1__ layer ;


 float FUNC_0 (double) ;

void FUNC_1(layer VAR_0)
{
    int VAR_1, VAR_2;
    for(VAR_1 = 0; VAR_1 < VAR_0.n; ++VAR_1){
        float VAR_3 = VAR_0.scales[VAR_1]/FUNC_0(VAR_0.rolling_variance[VAR_1] + .00001);
        for(VAR_2 = 0; VAR_2 < VAR_0.c*VAR_0.size*VAR_0.size; ++VAR_2){
            VAR_0.weights[VAR_1*VAR_0.c*VAR_0.size*VAR_0.size + VAR_2] *= VAR_3;
        }
        VAR_0.biases[VAR_1] -= VAR_0.rolling_mean[VAR_1] * VAR_3;
        VAR_0.scales[VAR_1] = 1;
        VAR_0.rolling_mean[VAR_1] = 0;
        VAR_0.rolling_variance[VAR_1] = 1;
    }
}
