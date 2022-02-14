
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int n; int* input_layers; int* input_sizes; int batch; int outputs; scalar_t__ output; } ;
typedef TYPE_2__ route_layer ;
struct TYPE_8__ {TYPE_1__* layers; } ;
typedef TYPE_3__ network ;
struct TYPE_6__ {float* output; } ;


 int FUNC_0 (int,float*,int,scalar_t__,int) ;

void FUNC_1(const route_layer VAR_0, network VAR_1)
{
    int VAR_2, VAR_3;
    int VAR_4 = 0;
    for(VAR_2 = 0; VAR_2 < VAR_0.n; ++VAR_2){
        int VAR_5 = VAR_0.input_layers[VAR_2];
        float *VAR_6 = VAR_1.layers[VAR_5].output;
        int VAR_7 = VAR_0.input_sizes[VAR_2];
        for(VAR_3 = 0; VAR_3 < VAR_0.batch; ++VAR_3){
            FUNC_0(VAR_7, VAR_6 + VAR_3*VAR_7, 1, VAR_0.output + VAR_4 + VAR_3*VAR_0.outputs, 1);
        }
        VAR_4 += VAR_7;
    }
}
