
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int h; int w; int c; int n; int batch; int stride; int size; int pad; int out_h; int out_w; int out_c; int outputs; int inputs; float* weights; float* weight_updates; float* biases; float* bias_updates; float* output; float* delta; int workspace_size; int activation; void* output_gpu; void* delta_gpu; void* bias_updates_gpu; void* biases_gpu; void* weight_updates_gpu; void* weights_gpu; int update_gpu; int backward_gpu; int forward_gpu; int update; int backward; int forward; int type; int member_0; } ;
typedef TYPE_1__ local_layer ;
typedef int ACTIVATION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (float*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int,int,int,int,int,int,int) ;
 int FUNC_3 (TYPE_1__) ;
 int FUNC_4 (TYPE_1__) ;
 float FUNC_5 (int,int) ;
 float FUNC_6 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

local_layer FUNC_7(int VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14, int VAR_15, ACTIVATION VAR_16)
{
    int VAR_17;
    local_layer VAR_18 = {0};
    VAR_18.type = VAR_0;

    VAR_18.h = VAR_9;
    VAR_18.w = VAR_10;
    VAR_18.c = VAR_11;
    VAR_18.n = VAR_12;
    VAR_18.batch = VAR_8;
    VAR_18.stride = VAR_14;
    VAR_18.size = VAR_13;
    VAR_18.pad = VAR_15;

    int VAR_19 = FUNC_3(VAR_18);
    int VAR_20 = FUNC_4(VAR_18);
    int VAR_21 = VAR_19*VAR_20;
    VAR_18.out_h = VAR_19;
    VAR_18.out_w = VAR_20;
    VAR_18.out_c = VAR_12;
    VAR_18.outputs = VAR_18.out_h * VAR_18.out_w * VAR_18.out_c;
    VAR_18.inputs = VAR_18.w * VAR_18.h * VAR_18.c;

    VAR_18.weights = FUNC_0(VAR_11*VAR_12*VAR_13*VAR_13*VAR_21, sizeof(float));
    VAR_18.weight_updates = FUNC_0(VAR_11*VAR_12*VAR_13*VAR_13*VAR_21, sizeof(float));

    VAR_18.biases = FUNC_0(VAR_18.outputs, sizeof(float));
    VAR_18.bias_updates = FUNC_0(VAR_18.outputs, sizeof(float));


    float VAR_22 = FUNC_6(2./(VAR_13*VAR_13*VAR_11));
    for(VAR_17 = 0; VAR_17 < VAR_11*VAR_12*VAR_13*VAR_13; ++VAR_17) VAR_18.weights[VAR_17] = VAR_22*FUNC_5(-1,1);

    VAR_18.output = FUNC_0(VAR_18.batch*VAR_19 * VAR_20 * VAR_12, sizeof(float));
    VAR_18.delta = FUNC_0(VAR_18.batch*VAR_19 * VAR_20 * VAR_12, sizeof(float));

    VAR_18.workspace_size = VAR_19*VAR_20*VAR_13*VAR_13*VAR_11;

    VAR_18.forward = VAR_3;
    VAR_18.backward = VAR_1;
    VAR_18.update = VAR_6;
    VAR_18.activation = VAR_16;

    FUNC_2(VAR_5, "Local Layer: %d x %d x %d image, %d filters -> %d x %d x %d image\n", VAR_9,VAR_10,VAR_11,VAR_12, VAR_19, VAR_20, VAR_12);

    return VAR_18;
}
