
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int batch; int h; int out_h; int w; int out_w; int c; int out_c; int* output; int* delta; int inputs; int outputs; int* scales; int* scale_updates; int* biases; int* bias_updates; int* mean; int* variance; int normTensorDesc; int dstTensorDesc; void* x_norm_gpu; void* x_gpu; void* variance_delta_gpu; void* mean_delta_gpu; void* rolling_variance_gpu; void* rolling_mean_gpu; void* variance_gpu; void* mean_gpu; void* scale_updates_gpu; void* scales_gpu; void* bias_updates_gpu; void* biases_gpu; void* delta_gpu; void* output_gpu; int backward_gpu; int forward_gpu; int backward; int forward; void* rolling_variance; void* rolling_mean; int type; int member_0; } ;
typedef TYPE_1__ layer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (int*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int,int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,char*,int,int,int) ;
 int VAR_7 ;

layer FUNC_5(int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
    FUNC_4(VAR_7, "Batch Normalization Layer: %d x %d x %d image\n", VAR_9,VAR_10,VAR_11);
    layer VAR_12 = {0};
    VAR_12.type = VAR_0;
    VAR_12.batch = VAR_8;
    VAR_12.h = VAR_12.out_h = VAR_10;
    VAR_12.w = VAR_12.out_w = VAR_9;
    VAR_12.c = VAR_12.out_c = VAR_11;
    VAR_12.output = FUNC_0(VAR_10 * VAR_9 * VAR_11 * VAR_8, sizeof(float));
    VAR_12.delta = FUNC_0(VAR_10 * VAR_9 * VAR_11 * VAR_8, sizeof(float));
    VAR_12.inputs = VAR_9*VAR_10*VAR_11;
    VAR_12.outputs = VAR_12.inputs;

    VAR_12.scales = FUNC_0(VAR_11, sizeof(float));
    VAR_12.scale_updates = FUNC_0(VAR_11, sizeof(float));
    VAR_12.biases = FUNC_0(VAR_11, sizeof(float));
    VAR_12.bias_updates = FUNC_0(VAR_11, sizeof(float));
    int VAR_13;
    for(VAR_13 = 0; VAR_13 < VAR_11; ++VAR_13){
        VAR_12.scales[VAR_13] = 1;
    }

    VAR_12.mean = FUNC_0(VAR_11, sizeof(float));
    VAR_12.variance = FUNC_0(VAR_11, sizeof(float));

    VAR_12.rolling_mean = FUNC_0(VAR_11, sizeof(float));
    VAR_12.rolling_variance = FUNC_0(VAR_11, sizeof(float));

    VAR_12.forward = VAR_5;
    VAR_12.backward = VAR_3;
    return VAR_12;
}
