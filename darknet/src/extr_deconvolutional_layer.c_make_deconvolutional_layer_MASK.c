
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int h; int w; int c; int n; int batch; int stride; int size; int nweights; int nbiases; float* weights; int* weight_updates; int* biases; int* bias_updates; int pad; int out_h; int out_w; int out_c; int outputs; int inputs; int* output; int* delta; int batch_normalize; int* scales; int* m; int* v; int* bias_m; int* scale_m; int* bias_v; int* scale_v; int workspace_size; int activation; int normTensorDesc; int dstTensorDesc; void* x_norm_gpu; void* x_gpu; void* scale_updates_gpu; void* scales_gpu; void* variance_delta_gpu; void* mean_delta_gpu; void* rolling_variance_gpu; void* rolling_mean_gpu; void* variance_gpu; void* mean_gpu; void* output_gpu; void* delta_gpu; void* bias_updates_gpu; void* biases_gpu; void* weight_updates_gpu; void* weights_gpu; void* scale_v_gpu; void* scale_m_gpu; void* bias_v_gpu; void* bias_m_gpu; void* v_gpu; void* m_gpu; int update_gpu; int backward_gpu; int forward_gpu; void* x_norm; void* x; void* rolling_variance; void* rolling_mean; void* variance_delta; void* mean_delta; void* variance; void* mean; void* scale_updates; int update; int backward; int forward; int type; int member_0; } ;
typedef TYPE_1__ layer ;
typedef int ACTIVATION ;


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
 int FUNC_4 (int ,char*,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_5 (TYPE_1__) ;
 scalar_t__ VAR_7 ;
 float FUNC_6 () ;
 int FUNC_7 (int,float,float*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

layer FUNC_8(int VAR_11, int VAR_12, int VAR_13, int VAR_14, int VAR_15, int VAR_16, int VAR_17, int VAR_18, ACTIVATION VAR_19, int VAR_20, int VAR_21)
{
    int VAR_22;
    layer VAR_23 = {0};
    VAR_23.type = VAR_2;

    VAR_23.h = VAR_12;
    VAR_23.w = VAR_13;
    VAR_23.c = VAR_14;
    VAR_23.n = VAR_15;
    VAR_23.batch = VAR_11;
    VAR_23.stride = VAR_17;
    VAR_23.size = VAR_16;

    VAR_23.nweights = VAR_14*VAR_15*VAR_16*VAR_16;
    VAR_23.nbiases = VAR_15;

    VAR_23.weights = FUNC_0(VAR_14*VAR_15*VAR_16*VAR_16, sizeof(float));
    VAR_23.weight_updates = FUNC_0(VAR_14*VAR_15*VAR_16*VAR_16, sizeof(float));

    VAR_23.biases = FUNC_0(VAR_15, sizeof(float));
    VAR_23.bias_updates = FUNC_0(VAR_15, sizeof(float));


    float VAR_24 = .02;
    for(VAR_22 = 0; VAR_22 < VAR_14*VAR_15*VAR_16*VAR_16; ++VAR_22) VAR_23.weights[VAR_22] = VAR_24*FUNC_6();

    for(VAR_22 = 0; VAR_22 < VAR_15; ++VAR_22){
        VAR_23.biases[VAR_22] = 0;
    }
    VAR_23.pad = VAR_18;

    VAR_23.out_h = (VAR_23.h - 1) * VAR_23.stride + VAR_23.size - 2*VAR_23.pad;
    VAR_23.out_w = (VAR_23.w - 1) * VAR_23.stride + VAR_23.size - 2*VAR_23.pad;
    VAR_23.out_c = VAR_15;
    VAR_23.outputs = VAR_23.out_w * VAR_23.out_h * VAR_23.out_c;
    VAR_23.inputs = VAR_23.w * VAR_23.h * VAR_23.c;

    FUNC_7(VAR_23.nweights, (float)VAR_23.out_w*VAR_23.out_h/(VAR_23.w*VAR_23.h), VAR_23.weights, 1);

    VAR_23.output = FUNC_0(VAR_23.batch*VAR_23.outputs, sizeof(float));
    VAR_23.delta = FUNC_0(VAR_23.batch*VAR_23.outputs, sizeof(float));

    VAR_23.forward = VAR_5;
    VAR_23.backward = VAR_3;
    VAR_23.update = VAR_9;

    VAR_23.batch_normalize = VAR_20;

    if(VAR_20){
        VAR_23.scales = FUNC_0(VAR_15, sizeof(float));
        VAR_23.scale_updates = FUNC_0(VAR_15, sizeof(float));
        for(VAR_22 = 0; VAR_22 < VAR_15; ++VAR_22){
            VAR_23.scales[VAR_22] = 1;
        }

        VAR_23.mean = FUNC_0(VAR_15, sizeof(float));
        VAR_23.variance = FUNC_0(VAR_15, sizeof(float));

        VAR_23.mean_delta = FUNC_0(VAR_15, sizeof(float));
        VAR_23.variance_delta = FUNC_0(VAR_15, sizeof(float));

        VAR_23.rolling_mean = FUNC_0(VAR_15, sizeof(float));
        VAR_23.rolling_variance = FUNC_0(VAR_15, sizeof(float));
        VAR_23.x = FUNC_0(VAR_23.batch*VAR_23.outputs, sizeof(float));
        VAR_23.x_norm = FUNC_0(VAR_23.batch*VAR_23.outputs, sizeof(float));
    }
    if(VAR_21){
        VAR_23.m = FUNC_0(VAR_14*VAR_15*VAR_16*VAR_16, sizeof(float));
        VAR_23.v = FUNC_0(VAR_14*VAR_15*VAR_16*VAR_16, sizeof(float));
        VAR_23.bias_m = FUNC_0(VAR_15, sizeof(float));
        VAR_23.scale_m = FUNC_0(VAR_15, sizeof(float));
        VAR_23.bias_v = FUNC_0(VAR_15, sizeof(float));
        VAR_23.scale_v = FUNC_0(VAR_15, sizeof(float));
    }
    VAR_23.activation = VAR_19;
    VAR_23.workspace_size = FUNC_5(VAR_23);

    FUNC_4(VAR_8, "deconv%5d %2d x%2d /%2d  %4d x%4d x%4d   ->  %4d x%4d x%4d\n", VAR_15, VAR_16, VAR_16, VAR_17, VAR_13, VAR_12, VAR_14, VAR_23.out_w, VAR_23.out_h, VAR_23.out_c);

    return VAR_23;
}
