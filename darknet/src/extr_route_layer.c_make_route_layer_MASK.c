
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int batch; int n; int* input_layers; int* input_sizes; int outputs; int inputs; void* output; void* output_gpu; void* delta; void* delta_gpu; int backward_gpu; int forward_gpu; int backward; int forward; int type; int member_0; } ;
typedef TYPE_1__ route_layer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (void*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_5 ;

route_layer FUNC_3(int VAR_6, int VAR_7, int *VAR_8, int *VAR_9)
{
    FUNC_2(VAR_5,"route ");
    route_layer VAR_10 = {0};
    VAR_10.type = VAR_0;
    VAR_10.batch = VAR_6;
    VAR_10.n = VAR_7;
    VAR_10.input_layers = VAR_8;
    VAR_10.input_sizes = VAR_9;
    int VAR_11;
    int VAR_12 = 0;
    for(VAR_11 = 0; VAR_11 < VAR_7; ++VAR_11){
        FUNC_2(VAR_5," %d", VAR_8[VAR_11]);
        VAR_12 += VAR_9[VAR_11];
    }
    FUNC_2(VAR_5, "\n");
    VAR_10.outputs = VAR_12;
    VAR_10.inputs = VAR_12;
    VAR_10.delta = FUNC_0(VAR_12*VAR_6, sizeof(float));
    VAR_10.output = FUNC_0(VAR_12*VAR_6, sizeof(float));;

    VAR_10.forward = VAR_3;
    VAR_10.backward = VAR_1;







    return VAR_10;
}
