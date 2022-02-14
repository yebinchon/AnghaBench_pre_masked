
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t* input_layers; int out_w; scalar_t__ out_h; scalar_t__ out_c; int outputs; int* input_sizes; int n; int inputs; int batch; void* delta; void* delta_gpu; void* output; void* output_gpu; } ;
typedef TYPE_1__ route_layer ;
struct TYPE_7__ {TYPE_3__* layers; } ;
typedef TYPE_2__ network ;
struct TYPE_8__ {int out_w; scalar_t__ out_h; scalar_t__ out_c; int outputs; } ;
typedef TYPE_3__ layer ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (void*,int) ;
 int FUNC_2 (char*,int,scalar_t__,int,scalar_t__) ;
 void* FUNC_3 (void*,int) ;

void FUNC_4(route_layer *VAR_0, network *VAR_1)
{
    int VAR_2;
    layer VAR_3 = VAR_1->layers[VAR_0->input_layers[0]];
    VAR_0->out_w = VAR_3.out_w;
    VAR_0->out_h = VAR_3.out_h;
    VAR_0->out_c = VAR_3.out_c;
    VAR_0->outputs = VAR_3.outputs;
    VAR_0->input_sizes[0] = VAR_3.outputs;
    for(VAR_2 = 1; VAR_2 < VAR_0->n; ++VAR_2){
        int VAR_4 = VAR_0->input_layers[VAR_2];
        layer VAR_5 = VAR_1->layers[VAR_4];
        VAR_0->outputs += VAR_5.outputs;
        VAR_0->input_sizes[VAR_2] = VAR_5.outputs;
        if(VAR_5.out_w == VAR_3.out_w && VAR_5.out_h == VAR_3.out_h){
            VAR_0->out_c += VAR_5.out_c;
        }else{
            FUNC_2("%d %d, %d %d\n", VAR_5.out_w, VAR_5.out_h, VAR_3.out_w, VAR_3.out_h);
            VAR_0->out_h = VAR_0->out_w = VAR_0->out_c = 0;
        }
    }
    VAR_0->inputs = VAR_0->outputs;
    VAR_0->delta = FUNC_3(VAR_0->delta, VAR_0->outputs*VAR_0->batch*sizeof(float));
    VAR_0->output = FUNC_3(VAR_0->output, VAR_0->outputs*VAR_0->batch*sizeof(float));
}
