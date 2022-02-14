
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int w; int h; int n; int inputs; int outputs; int truths; int batch; void* workspace; void* truth; void* truth_gpu; void* input; void* input_gpu; int output; TYPE_2__* layers; int gpu_index; } ;
typedef TYPE_1__ network ;
struct TYPE_20__ {scalar_t__ type; size_t workspace_size; int outputs; int out_w; int out_h; int inputs; int truths; int output; } ;
typedef TYPE_2__ layer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int,size_t) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (void*,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (void*) ;
 TYPE_2__ FUNC_7 (TYPE_1__*) ;
 scalar_t__ VAR_12 ;
 int FUNC_8 (TYPE_2__*,int,int) ;
 int FUNC_9 (TYPE_2__*,int,int) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (TYPE_2__*,int,int) ;
 int FUNC_12 (TYPE_2__*,int,int) ;
 int FUNC_13 (TYPE_2__*,int,int) ;
 int FUNC_14 (TYPE_2__*,int,int) ;
 int FUNC_15 (TYPE_2__*,int,int) ;
 int FUNC_16 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_17 (TYPE_2__*,int,int) ;
 int FUNC_18 (TYPE_2__*,int,int) ;
 int FUNC_19 (TYPE_2__*,int,int) ;

int FUNC_20(network *VAR_13, int VAR_14, int VAR_15)
{




    int VAR_16;

    VAR_13->w = VAR_14;
    VAR_13->h = VAR_15;
    int VAR_17 = 0;
    size_t VAR_18 = 0;


    for (VAR_16 = 0; VAR_16 < VAR_13->n; ++VAR_16){
        layer VAR_19 = VAR_13->layers[VAR_16];
        if(VAR_19.type == VAR_1){
            FUNC_9(&VAR_19, VAR_14, VAR_15);
        }else if(VAR_19.type == VAR_3){
            FUNC_11(&VAR_19, VAR_14, VAR_15);
        }else if(VAR_19.type == VAR_4){
            FUNC_12(&VAR_19, VAR_14, VAR_15);
        }else if(VAR_19.type == VAR_6){
            FUNC_14(&VAR_19, VAR_14, VAR_15);
        }else if(VAR_19.type == VAR_11){
            FUNC_19(&VAR_19, VAR_14, VAR_15);
        }else if(VAR_19.type == VAR_8){
            FUNC_16(&VAR_19, VAR_13);
        }else if(VAR_19.type == VAR_9){
            FUNC_17(&VAR_19, VAR_14, VAR_15);
        }else if(VAR_19.type == VAR_10){
            FUNC_18(&VAR_19, VAR_14, VAR_15);
        }else if(VAR_19.type == VAR_7){
            FUNC_15(&VAR_19, VAR_14, VAR_15);
        }else if(VAR_19.type == VAR_0){
            FUNC_8(&VAR_19, VAR_14, VAR_15);
        }else if(VAR_19.type == VAR_5){
            FUNC_13(&VAR_19, VAR_14, VAR_15);
        }else if(VAR_19.type == VAR_2){
            FUNC_10(&VAR_19, VAR_17);
        }else{
            FUNC_5("Cannot resize this type of layer");
        }
        if(VAR_19.workspace_size > VAR_18) VAR_18 = VAR_19.workspace_size;
        if(VAR_19.workspace_size > 2000000000) FUNC_0(0);
        VAR_17 = VAR_19.outputs;
        VAR_13->layers[VAR_16] = VAR_19;
        VAR_14 = VAR_19.out_w;
        VAR_15 = VAR_19.out_h;
        if(VAR_19.type == VAR_0) break;
    }
    layer VAR_20 = FUNC_7(VAR_13);
    VAR_13->inputs = VAR_13->layers[0].inputs;
    VAR_13->outputs = VAR_20.outputs;
    VAR_13->truths = VAR_20.outputs;
    if(VAR_13->layers[VAR_13->n-1].truths) VAR_13->truths = VAR_13->layers[VAR_13->n-1].truths;
    VAR_13->output = VAR_20.output;
    FUNC_6(VAR_13->input);
    FUNC_6(VAR_13->truth);
    VAR_13->input = FUNC_1(VAR_13->inputs*VAR_13->batch, sizeof(float));
    VAR_13->truth = FUNC_1(VAR_13->truths*VAR_13->batch, sizeof(float));
    FUNC_6(VAR_13->workspace);
    VAR_13->workspace = FUNC_1(1, VAR_18);


    return 0;
}
