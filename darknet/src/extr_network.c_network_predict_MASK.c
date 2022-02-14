
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float* input; float* output; scalar_t__ delta; scalar_t__ train; scalar_t__ truth; } ;
typedef TYPE_1__ network ;


 int FUNC_0 (TYPE_1__*) ;

float *FUNC_1(network *VAR_0, float *VAR_1)
{
    network VAR_2 = *VAR_0;
    VAR_0->input = VAR_1;
    VAR_0->truth = 0;
    VAR_0->train = 0;
    VAR_0->delta = 0;
    FUNC_0(VAR_0);
    float *VAR_3 = VAR_0->output;
    *VAR_0 = VAR_2;
    return VAR_3;
}
