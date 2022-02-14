
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int inputs; int outputs; int batch; void* output; void* output_gpu; void* delta; void* delta_gpu; } ;
typedef TYPE_1__ cost_layer ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (void*,int) ;
 void* FUNC_2 (void*,int) ;

void FUNC_3(cost_layer *VAR_0, int VAR_1)
{
    VAR_0->inputs = VAR_1;
    VAR_0->outputs = VAR_1;
    VAR_0->delta = FUNC_2(VAR_0->delta, VAR_1*VAR_0->batch*sizeof(float));
    VAR_0->output = FUNC_2(VAR_0->output, VAR_1*VAR_0->batch*sizeof(float));






}
