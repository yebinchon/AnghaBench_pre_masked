
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c; int batch; int h; int w; int out_h; int out_w; int inputs; int outputs; void* norms; void* norms_gpu; void* squared; void* squared_gpu; void* delta; void* delta_gpu; void* output; void* output_gpu; } ;
typedef TYPE_1__ layer ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (void*,int) ;
 void* FUNC_2 (void*,int) ;

void FUNC_3(layer *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3 = VAR_0->c;
    int VAR_4 = VAR_0->batch;
    VAR_0->h = VAR_2;
    VAR_0->w = VAR_1;
    VAR_0->out_h = VAR_2;
    VAR_0->out_w = VAR_1;
    VAR_0->inputs = VAR_1*VAR_2*VAR_3;
    VAR_0->outputs = VAR_0->inputs;
    VAR_0->output = FUNC_2(VAR_0->output, VAR_2 * VAR_1 * VAR_3 * VAR_4 * sizeof(float));
    VAR_0->delta = FUNC_2(VAR_0->delta, VAR_2 * VAR_1 * VAR_3 * VAR_4 * sizeof(float));
    VAR_0->squared = FUNC_2(VAR_0->squared, VAR_2 * VAR_1 * VAR_3 * VAR_4 * sizeof(float));
    VAR_0->norms = FUNC_2(VAR_0->norms, VAR_2 * VAR_1 * VAR_3 * VAR_4 * sizeof(float));
}
