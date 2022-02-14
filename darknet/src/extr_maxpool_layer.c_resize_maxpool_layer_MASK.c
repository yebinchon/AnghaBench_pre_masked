
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h; int w; int inputs; int c; int out_w; int pad; int size; int stride; int out_h; int outputs; int batch; float* output_gpu; float* delta_gpu; void* delta; void* output; scalar_t__ indexes_gpu; void* indexes; } ;
typedef TYPE_1__ maxpool_layer ;


 int FUNC_0 (float*) ;
 void* FUNC_1 (void*,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 void* FUNC_3 (void*,int) ;

void FUNC_4(maxpool_layer *VAR_0, int VAR_1, int VAR_2)
{
    VAR_0->h = VAR_2;
    VAR_0->w = VAR_1;
    VAR_0->inputs = VAR_2*VAR_1*VAR_0->c;

    VAR_0->out_w = (VAR_1 + VAR_0->pad - VAR_0->size)/VAR_0->stride + 1;
    VAR_0->out_h = (VAR_2 + VAR_0->pad - VAR_0->size)/VAR_0->stride + 1;
    VAR_0->outputs = VAR_0->out_w * VAR_0->out_h * VAR_0->c;
    int VAR_3 = VAR_0->outputs * VAR_0->batch;

    VAR_0->indexes = FUNC_3(VAR_0->indexes, VAR_3 * sizeof(int));
    VAR_0->output = FUNC_3(VAR_0->output, VAR_3 * sizeof(float));
    VAR_0->delta = FUNC_3(VAR_0->delta, VAR_3 * sizeof(float));
}
