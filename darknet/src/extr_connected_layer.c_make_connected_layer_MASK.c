
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int learning_rate_scale; int inputs; int outputs; int batch; int batch_normalize; int h; int w; int c; int out_h; int out_w; int out_c; int* output; int* delta; int* weight_updates; int* bias_updates; float* weights; int* biases; int* scales; int* scale_updates; int* mean; int* variance; int activation; int normTensorDesc; int dstTensorDesc; void* x_norm_gpu; void* x_gpu; void* scale_updates_gpu; void* scales_gpu; void* variance_delta_gpu; void* mean_delta_gpu; void* rolling_variance_gpu; void* rolling_mean_gpu; void* variance_gpu; void* mean_gpu; void* scale_v_gpu; void* scale_m_gpu; void* bias_v_gpu; void* bias_m_gpu; void* v_gpu; void* m_gpu; void* delta_gpu; void* output_gpu; void* bias_updates_gpu; void* weight_updates_gpu; void* biases_gpu; void* weights_gpu; int update_gpu; int backward_gpu; int forward_gpu; void* x_norm; void* x; void* rolling_variance; void* rolling_mean; void* variance_delta; void* mean_delta; void* scale_v; void* bias_v; void* scale_m; void* bias_m; void* v; void* m; int update; int backward; int forward; int type; int member_0; } ;
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
 int FUNC_4 (int ,char*,int,int) ;
 float FUNC_5 (int,int) ;
 float FUNC_6 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

layer FUNC_7(int VAR_10, int VAR_11, int VAR_12, ACTIVATION VAR_13, int VAR_14, int VAR_15)
{
    int VAR_16;
    layer VAR_17 = {0};
    VAR_17.learning_rate_scale = 1;
    VAR_17.type = VAR_0;

    VAR_17.inputs = VAR_11;
    VAR_17.outputs = VAR_12;
    VAR_17.batch=VAR_10;
    VAR_17.batch_normalize = VAR_14;
    VAR_17.h = 1;
    VAR_17.w = 1;
    VAR_17.c = VAR_11;
    VAR_17.out_h = 1;
    VAR_17.out_w = 1;
    VAR_17.out_c = VAR_12;

    VAR_17.output = FUNC_0(VAR_10*VAR_12, sizeof(float));
    VAR_17.delta = FUNC_0(VAR_10*VAR_12, sizeof(float));

    VAR_17.weight_updates = FUNC_0(VAR_11*VAR_12, sizeof(float));
    VAR_17.bias_updates = FUNC_0(VAR_12, sizeof(float));

    VAR_17.weights = FUNC_0(VAR_12*VAR_11, sizeof(float));
    VAR_17.biases = FUNC_0(VAR_12, sizeof(float));

    VAR_17.forward = VAR_5;
    VAR_17.backward = VAR_3;
    VAR_17.update = VAR_8;


    float VAR_18 = FUNC_6(2./VAR_11);
    for(VAR_16 = 0; VAR_16 < VAR_12*VAR_11; ++VAR_16){
        VAR_17.weights[VAR_16] = VAR_18*FUNC_5(-1, 1);
    }

    for(VAR_16 = 0; VAR_16 < VAR_12; ++VAR_16){
        VAR_17.biases[VAR_16] = 0;
    }

    if(VAR_15){
        VAR_17.m = FUNC_0(VAR_17.inputs*VAR_17.outputs, sizeof(float));
        VAR_17.v = FUNC_0(VAR_17.inputs*VAR_17.outputs, sizeof(float));
        VAR_17.bias_m = FUNC_0(VAR_17.outputs, sizeof(float));
        VAR_17.scale_m = FUNC_0(VAR_17.outputs, sizeof(float));
        VAR_17.bias_v = FUNC_0(VAR_17.outputs, sizeof(float));
        VAR_17.scale_v = FUNC_0(VAR_17.outputs, sizeof(float));
    }
    if(VAR_14){
        VAR_17.scales = FUNC_0(VAR_12, sizeof(float));
        VAR_17.scale_updates = FUNC_0(VAR_12, sizeof(float));
        for(VAR_16 = 0; VAR_16 < VAR_12; ++VAR_16){
            VAR_17.scales[VAR_16] = 1;
        }

        VAR_17.mean = FUNC_0(VAR_12, sizeof(float));
        VAR_17.mean_delta = FUNC_0(VAR_12, sizeof(float));
        VAR_17.variance = FUNC_0(VAR_12, sizeof(float));
        VAR_17.variance_delta = FUNC_0(VAR_12, sizeof(float));

        VAR_17.rolling_mean = FUNC_0(VAR_12, sizeof(float));
        VAR_17.rolling_variance = FUNC_0(VAR_12, sizeof(float));

        VAR_17.x = FUNC_0(VAR_10*VAR_12, sizeof(float));
        VAR_17.x_norm = FUNC_0(VAR_10*VAR_12, sizeof(float));
    }
    VAR_17.activation = VAR_13;
    FUNC_4(VAR_7, "connected                            %4d  ->  %4d\n", VAR_11, VAR_12);
    return VAR_17;
}
