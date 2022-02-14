
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int w; int h; int out_w; int out_h; int outputs; int out_c; int inputs; int c; int batch; int workspace_size; void* output; void* x_norm_gpu; void* x_gpu; scalar_t__ batch_normalize; void* output_gpu; void* delta; void* delta_gpu; void* x_norm; void* x; } ;
typedef TYPE_1__ convolutional_layer ;


 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (void*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__) ;
 void* FUNC_6 (void*,int) ;

void FUNC_7(convolutional_layer *VAR_0, int VAR_1, int VAR_2)
{
    VAR_0->w = VAR_1;
    VAR_0->h = VAR_2;
    int VAR_3 = FUNC_1(*VAR_0);
    int VAR_4 = FUNC_0(*VAR_0);

    VAR_0->out_w = VAR_3;
    VAR_0->out_h = VAR_4;

    VAR_0->outputs = VAR_0->out_h * VAR_0->out_w * VAR_0->out_c;
    VAR_0->inputs = VAR_0->w * VAR_0->h * VAR_0->c;

    VAR_0->output = FUNC_6(VAR_0->output, VAR_0->batch*VAR_0->outputs*sizeof(float));
    VAR_0->delta = FUNC_6(VAR_0->delta, VAR_0->batch*VAR_0->outputs*sizeof(float));
    if(VAR_0->batch_normalize){
        VAR_0->x = FUNC_6(VAR_0->x, VAR_0->batch*VAR_0->outputs*sizeof(float));
        VAR_0->x_norm = FUNC_6(VAR_0->x_norm, VAR_0->batch*VAR_0->outputs*sizeof(float));
    }
    VAR_0->workspace_size = FUNC_5(*VAR_0);
}
