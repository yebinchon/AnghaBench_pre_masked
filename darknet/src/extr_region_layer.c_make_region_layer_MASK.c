
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int batch; int h; int w; int c; int out_w; int out_h; int out_c; int classes; int coords; double* biases; int outputs; int inputs; int truths; void* delta; void* delta_gpu; void* output; void* output_gpu; int backward_gpu; int forward_gpu; int backward; int forward; void* bias_updates; void* cost; int type; int member_0; } ;
typedef TYPE_1__ layer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (void*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;

layer FUNC_4(int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
    layer VAR_12 = {0};
    VAR_12.type = VAR_0;

    VAR_12.n = VAR_9;
    VAR_12.batch = VAR_6;
    VAR_12.h = VAR_8;
    VAR_12.w = VAR_7;
    VAR_12.c = VAR_9*(VAR_10 + VAR_11 + 1);
    VAR_12.out_w = VAR_12.w;
    VAR_12.out_h = VAR_12.h;
    VAR_12.out_c = VAR_12.c;
    VAR_12.classes = VAR_10;
    VAR_12.coords = VAR_11;
    VAR_12.cost = FUNC_0(1, sizeof(float));
    VAR_12.biases = FUNC_0(VAR_9*2, sizeof(float));
    VAR_12.bias_updates = FUNC_0(VAR_9*2, sizeof(float));
    VAR_12.outputs = VAR_8*VAR_7*VAR_9*(VAR_10 + VAR_11 + 1);
    VAR_12.inputs = VAR_12.outputs;
    VAR_12.truths = 30*(VAR_12.coords + 1);
    VAR_12.delta = FUNC_0(VAR_6*VAR_12.outputs, sizeof(float));
    VAR_12.output = FUNC_0(VAR_6*VAR_12.outputs, sizeof(float));
    int VAR_13;
    for(VAR_13 = 0; VAR_13 < VAR_9*2; ++VAR_13){
        VAR_12.biases[VAR_13] = .5;
    }

    VAR_12.forward = VAR_3;
    VAR_12.backward = VAR_1;







    FUNC_2(VAR_5, "detection\n");
    FUNC_3(0);

    return VAR_12;
}
