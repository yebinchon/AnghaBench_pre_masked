
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int h; int w; int out_h; int stride; int size; int pad; int out_w; int outputs; int out_c; int inputs; int c; int batch; int workspace_size; int normTensorDesc; int dstTensorDesc; void* output; void* x_norm_gpu; void* x_gpu; scalar_t__ batch_normalize; void* output_gpu; void* delta; void* delta_gpu; void* x_norm; void* x; } ;
typedef TYPE_1__ layer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (void*,int) ;
 int FUNC_2 (int ,int ,int ,int,int,int,int) ;
 int FUNC_3 (TYPE_1__) ;
 void* FUNC_4 (void*,int) ;

void FUNC_5(layer *VAR_2, int VAR_3, int VAR_4)
{
    VAR_2->h = VAR_3;
    VAR_2->w = VAR_4;
    VAR_2->out_h = (VAR_2->h - 1) * VAR_2->stride + VAR_2->size - 2*VAR_2->pad;
    VAR_2->out_w = (VAR_2->w - 1) * VAR_2->stride + VAR_2->size - 2*VAR_2->pad;

    VAR_2->outputs = VAR_2->out_h * VAR_2->out_w * VAR_2->out_c;
    VAR_2->inputs = VAR_2->w * VAR_2->h * VAR_2->c;

    VAR_2->output = FUNC_4(VAR_2->output, VAR_2->batch*VAR_2->outputs*sizeof(float));
    VAR_2->delta = FUNC_4(VAR_2->delta, VAR_2->batch*VAR_2->outputs*sizeof(float));
    if(VAR_2->batch_normalize){
        VAR_2->x = FUNC_4(VAR_2->x, VAR_2->batch*VAR_2->outputs*sizeof(float));
        VAR_2->x_norm = FUNC_4(VAR_2->x_norm, VAR_2->batch*VAR_2->outputs*sizeof(float));
    }
    VAR_2->workspace_size = FUNC_3(*VAR_2);
}
