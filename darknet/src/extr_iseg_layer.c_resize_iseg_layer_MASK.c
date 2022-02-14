
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; int outputs; int c; int inputs; int batch; void* output; void* output_gpu; void* delta; void* delta_gpu; } ;
typedef TYPE_1__ layer ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (void*,int) ;
 void* FUNC_2 (void*,int) ;

void FUNC_3(layer *VAR_0, int VAR_1, int VAR_2)
{
    VAR_0->w = VAR_1;
    VAR_0->h = VAR_2;

    VAR_0->outputs = VAR_2*VAR_1*VAR_0->c;
    VAR_0->inputs = VAR_0->outputs;

    VAR_0->output = FUNC_2(VAR_0->output, VAR_0->batch*VAR_0->outputs*sizeof(float));
    VAR_0->delta = FUNC_2(VAR_0->delta, VAR_0->batch*VAR_0->outputs*sizeof(float));
}
