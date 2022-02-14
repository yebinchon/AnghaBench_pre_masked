
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int batch_normalize; int* scales; void* rolling_variance; void* rolling_mean; } ;
typedef TYPE_1__ layer ;


 void* FUNC_0 (int,int) ;

layer FUNC_1(layer VAR_0, int VAR_1)
{
    int VAR_2;
    VAR_0.batch_normalize=1;
    VAR_0.scales = FUNC_0(VAR_1, sizeof(float));
    for(VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2){
        VAR_0.scales[VAR_2] = 1;
    }
    VAR_0.rolling_mean = FUNC_0(VAR_1, sizeof(float));
    VAR_0.rolling_variance = FUNC_0(VAR_1, sizeof(float));
    return VAR_0;
}
