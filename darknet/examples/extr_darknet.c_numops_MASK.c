
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_19__ ;
typedef struct TYPE_29__ TYPE_18__ ;
typedef struct TYPE_28__ TYPE_17__ ;
typedef struct TYPE_27__ TYPE_16__ ;
typedef struct TYPE_26__ TYPE_15__ ;
typedef struct TYPE_25__ TYPE_14__ ;
typedef struct TYPE_24__ TYPE_13__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct TYPE_29__ {int n; TYPE_19__* layers; } ;
typedef TYPE_18__ network ;
struct TYPE_30__ {scalar_t__ type; long n; long size; long c; long groups; long out_h; long out_w; long inputs; long outputs; TYPE_17__* wo; TYPE_16__* wg; TYPE_15__* wi; TYPE_14__* wf; TYPE_13__* uo; TYPE_12__* ug; TYPE_11__* ui; TYPE_10__* uf; TYPE_9__* wr; TYPE_8__* wh; TYPE_7__* wz; TYPE_6__* ur; TYPE_5__* uh; TYPE_4__* uz; TYPE_3__* output_layer; TYPE_2__* self_layer; TYPE_1__* input_layer; } ;
typedef TYPE_19__ layer ;
struct TYPE_39__ {long inputs; long outputs; } ;
struct TYPE_38__ {long inputs; long outputs; } ;
struct TYPE_37__ {long inputs; long outputs; } ;
struct TYPE_36__ {long inputs; long outputs; } ;
struct TYPE_35__ {long inputs; long outputs; } ;
struct TYPE_34__ {long inputs; long outputs; } ;
struct TYPE_33__ {long inputs; long outputs; } ;
struct TYPE_32__ {long inputs; long outputs; } ;
struct TYPE_31__ {long inputs; long outputs; } ;
struct TYPE_28__ {long inputs; long outputs; } ;
struct TYPE_27__ {long inputs; long outputs; } ;
struct TYPE_26__ {long inputs; long outputs; } ;
struct TYPE_25__ {long inputs; long outputs; } ;
struct TYPE_24__ {long inputs; long outputs; } ;
struct TYPE_23__ {long inputs; long outputs; } ;
struct TYPE_22__ {long inputs; long outputs; } ;
struct TYPE_21__ {long inputs; long outputs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

long FUNC_0(network *VAR_5)
{
    int VAR_6;
    long VAR_7 = 0;
    for(VAR_6 = 0; VAR_6 < VAR_5->n; ++VAR_6){
        layer VAR_8 = VAR_5->layers[VAR_6];
        if(VAR_8.type == VAR_1){
            VAR_7 += 2l * VAR_8.n * VAR_8.size*VAR_8.size*VAR_8.c/VAR_8.groups * VAR_8.out_h*VAR_8.out_w;
        } else if(VAR_8.type == VAR_0){
            VAR_7 += 2l * VAR_8.inputs * VAR_8.outputs;
        } else if (VAR_8.type == VAR_4){
            VAR_7 += 2l * VAR_8.input_layer->inputs * VAR_8.input_layer->outputs;
            VAR_7 += 2l * VAR_8.self_layer->inputs * VAR_8.self_layer->outputs;
            VAR_7 += 2l * VAR_8.output_layer->inputs * VAR_8.output_layer->outputs;
        } else if (VAR_8.type == VAR_2){
            VAR_7 += 2l * VAR_8.uz->inputs * VAR_8.uz->outputs;
            VAR_7 += 2l * VAR_8.uh->inputs * VAR_8.uh->outputs;
            VAR_7 += 2l * VAR_8.ur->inputs * VAR_8.ur->outputs;
            VAR_7 += 2l * VAR_8.wz->inputs * VAR_8.wz->outputs;
            VAR_7 += 2l * VAR_8.wh->inputs * VAR_8.wh->outputs;
            VAR_7 += 2l * VAR_8.wr->inputs * VAR_8.wr->outputs;
        } else if (VAR_8.type == VAR_3){
            VAR_7 += 2l * VAR_8.uf->inputs * VAR_8.uf->outputs;
            VAR_7 += 2l * VAR_8.ui->inputs * VAR_8.ui->outputs;
            VAR_7 += 2l * VAR_8.ug->inputs * VAR_8.ug->outputs;
            VAR_7 += 2l * VAR_8.uo->inputs * VAR_8.uo->outputs;
            VAR_7 += 2l * VAR_8.wf->inputs * VAR_8.wf->outputs;
            VAR_7 += 2l * VAR_8.wi->inputs * VAR_8.wi->outputs;
            VAR_7 += 2l * VAR_8.wg->inputs * VAR_8.wg->outputs;
            VAR_7 += 2l * VAR_8.wo->inputs * VAR_8.wo->outputs;
        }
    }
    return VAR_7;
}
