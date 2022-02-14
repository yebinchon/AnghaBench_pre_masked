
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* weights; float* binary_weights; float* weights_gpu; float* binary_weights_gpu; } ;
typedef TYPE_1__ convolutional_layer ;



void FUNC_0(convolutional_layer *VAR_0)
{
    float *VAR_1 = VAR_0->weights;
    VAR_0->weights = VAR_0->binary_weights;
    VAR_0->binary_weights = VAR_1;






}
