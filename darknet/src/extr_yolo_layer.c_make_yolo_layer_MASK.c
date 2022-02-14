
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int total; int batch; int h; int w; int c; int out_w; int out_h; int out_c; int classes; double* biases; int* mask; int outputs; int inputs; int truths; void* delta; void* delta_gpu; void* output; void* output_gpu; int backward_gpu; int forward_gpu; int backward; int forward; void* bias_updates; void* cost; int type; int member_0; } ;
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

layer FUNC_4(int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, int *VAR_11, int VAR_12)
{
    int VAR_13;
    layer VAR_14 = {0};
    VAR_14.type = VAR_0;

    VAR_14.n = VAR_9;
    VAR_14.total = VAR_10;
    VAR_14.batch = VAR_6;
    VAR_14.h = VAR_8;
    VAR_14.w = VAR_7;
    VAR_14.c = VAR_9*(VAR_12 + 4 + 1);
    VAR_14.out_w = VAR_14.w;
    VAR_14.out_h = VAR_14.h;
    VAR_14.out_c = VAR_14.c;
    VAR_14.classes = VAR_12;
    VAR_14.cost = FUNC_0(1, sizeof(float));
    VAR_14.biases = FUNC_0(VAR_10*2, sizeof(float));
    if(VAR_11) VAR_14.mask = VAR_11;
    else{
        VAR_14.mask = FUNC_0(VAR_9, sizeof(int));
        for(VAR_13 = 0; VAR_13 < VAR_9; ++VAR_13){
            VAR_14.mask[VAR_13] = VAR_13;
        }
    }
    VAR_14.bias_updates = FUNC_0(VAR_9*2, sizeof(float));
    VAR_14.outputs = VAR_8*VAR_7*VAR_9*(VAR_12 + 4 + 1);
    VAR_14.inputs = VAR_14.outputs;
    VAR_14.truths = 90*(4 + 1);
    VAR_14.delta = FUNC_0(VAR_6*VAR_14.outputs, sizeof(float));
    VAR_14.output = FUNC_0(VAR_6*VAR_14.outputs, sizeof(float));
    for(VAR_13 = 0; VAR_13 < VAR_10*2; ++VAR_13){
        VAR_14.biases[VAR_13] = .5;
    }

    VAR_14.forward = VAR_3;
    VAR_14.backward = VAR_1;







    FUNC_2(VAR_5, "yolo\n");
    FUNC_3(0);

    return VAR_14;
}
