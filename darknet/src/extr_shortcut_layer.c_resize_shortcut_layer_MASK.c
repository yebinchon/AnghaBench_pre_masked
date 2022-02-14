
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int out_w; int h; int out_h; int outputs; int out_c; int inputs; int batch; void* delta; void* delta_gpu; void* output; void* output_gpu; } ;
typedef TYPE_1__ layer ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (void*,int) ;
 void* FUNC_3 (void*,int) ;

void FUNC_4(layer *VAR_0, int VAR_1, int VAR_2)
{
    FUNC_0(VAR_0->w == VAR_0->out_w);
    FUNC_0(VAR_0->h == VAR_0->out_h);
    VAR_0->w = VAR_0->out_w = VAR_1;
    VAR_0->h = VAR_0->out_h = VAR_2;
    VAR_0->outputs = VAR_1*VAR_2*VAR_0->out_c;
    VAR_0->inputs = VAR_0->outputs;
    VAR_0->delta = FUNC_3(VAR_0->delta, VAR_0->outputs*VAR_0->batch*sizeof(float));
    VAR_0->output = FUNC_3(VAR_0->output, VAR_0->outputs*VAR_0->batch*sizeof(float));
}
