
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; float* rand_gpu; float* z_gpu; float* r_gpu; float* h_gpu; float* m_gpu; float* v_gpu; float* prev_state_gpu; float* forgot_state_gpu; float* forgot_delta_gpu; float* state_gpu; float* state_delta_gpu; float* gate_gpu; float* gate_delta_gpu; float* save_gpu; float* save_delta_gpu; float* concat_gpu; float* concat_delta_gpu; float* binary_input_gpu; float* binary_weights_gpu; float* mean_gpu; float* variance_gpu; float* rolling_mean_gpu; float* rolling_variance_gpu; float* variance_delta_gpu; float* mean_delta_gpu; float* x_gpu; float* x_norm_gpu; float* weights_gpu; float* weight_updates_gpu; float* biases_gpu; float* bias_updates_gpu; float* scales_gpu; float* scale_updates_gpu; float* output_gpu; float* delta_gpu; float* squared_gpu; float* norms_gpu; scalar_t__ indexes_gpu; scalar_t__ binary_input; scalar_t__ h_cpu; scalar_t__ r_cpu; scalar_t__ z_cpu; scalar_t__ v; scalar_t__ m; scalar_t__ x_norm; scalar_t__ x; scalar_t__ rolling_variance; scalar_t__ rolling_mean; scalar_t__ variance_delta; scalar_t__ mean_delta; scalar_t__ variance; scalar_t__ mean; scalar_t__ spatial_mean; scalar_t__ norms; scalar_t__ squared; scalar_t__ output; scalar_t__ delta; scalar_t__ weight_updates; scalar_t__ weights; scalar_t__ scale_updates; scalar_t__ scales; scalar_t__ bias_updates; scalar_t__ biases; scalar_t__ binary_weights; scalar_t__ concat_delta; scalar_t__ concat; scalar_t__ state_delta; scalar_t__ forgot_delta; scalar_t__ forgot_state; scalar_t__ prev_state; scalar_t__ state; scalar_t__ cost; scalar_t__ rand; scalar_t__ map; scalar_t__ input_sizes; scalar_t__ input_layers; scalar_t__ indexes; scalar_t__ cweights; } ;
typedef TYPE_1__ layer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (float*) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(layer VAR_1)
{
    if(VAR_1.type == VAR_0){
        if(VAR_1.rand) FUNC_1(VAR_1.rand);



        return;
    }
    if(VAR_1.cweights) FUNC_1(VAR_1.cweights);
    if(VAR_1.indexes) FUNC_1(VAR_1.indexes);
    if(VAR_1.input_layers) FUNC_1(VAR_1.input_layers);
    if(VAR_1.input_sizes) FUNC_1(VAR_1.input_sizes);
    if(VAR_1.map) FUNC_1(VAR_1.map);
    if(VAR_1.rand) FUNC_1(VAR_1.rand);
    if(VAR_1.cost) FUNC_1(VAR_1.cost);
    if(VAR_1.state) FUNC_1(VAR_1.state);
    if(VAR_1.prev_state) FUNC_1(VAR_1.prev_state);
    if(VAR_1.forgot_state) FUNC_1(VAR_1.forgot_state);
    if(VAR_1.forgot_delta) FUNC_1(VAR_1.forgot_delta);
    if(VAR_1.state_delta) FUNC_1(VAR_1.state_delta);
    if(VAR_1.concat) FUNC_1(VAR_1.concat);
    if(VAR_1.concat_delta) FUNC_1(VAR_1.concat_delta);
    if(VAR_1.binary_weights) FUNC_1(VAR_1.binary_weights);
    if(VAR_1.biases) FUNC_1(VAR_1.biases);
    if(VAR_1.bias_updates) FUNC_1(VAR_1.bias_updates);
    if(VAR_1.scales) FUNC_1(VAR_1.scales);
    if(VAR_1.scale_updates) FUNC_1(VAR_1.scale_updates);
    if(VAR_1.weights) FUNC_1(VAR_1.weights);
    if(VAR_1.weight_updates) FUNC_1(VAR_1.weight_updates);
    if(VAR_1.delta) FUNC_1(VAR_1.delta);
    if(VAR_1.output) FUNC_1(VAR_1.output);
    if(VAR_1.squared) FUNC_1(VAR_1.squared);
    if(VAR_1.norms) FUNC_1(VAR_1.norms);
    if(VAR_1.spatial_mean) FUNC_1(VAR_1.spatial_mean);
    if(VAR_1.mean) FUNC_1(VAR_1.mean);
    if(VAR_1.variance) FUNC_1(VAR_1.variance);
    if(VAR_1.mean_delta) FUNC_1(VAR_1.mean_delta);
    if(VAR_1.variance_delta) FUNC_1(VAR_1.variance_delta);
    if(VAR_1.rolling_mean) FUNC_1(VAR_1.rolling_mean);
    if(VAR_1.rolling_variance) FUNC_1(VAR_1.rolling_variance);
    if(VAR_1.x) FUNC_1(VAR_1.x);
    if(VAR_1.x_norm) FUNC_1(VAR_1.x_norm);
    if(VAR_1.m) FUNC_1(VAR_1.m);
    if(VAR_1.v) FUNC_1(VAR_1.v);
    if(VAR_1.z_cpu) FUNC_1(VAR_1.z_cpu);
    if(VAR_1.r_cpu) FUNC_1(VAR_1.r_cpu);
    if(VAR_1.h_cpu) FUNC_1(VAR_1.h_cpu);
    if(VAR_1.binary_input) FUNC_1(VAR_1.binary_input);
}
