
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ gpu_index; int* seen; int n; TYPE_2__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_9__ {scalar_t__ type; int out_w; int out_h; int size; int c; int n; int* biases; int outputs; int* weights; struct TYPE_9__* output_layer; struct TYPE_9__* self_layer; struct TYPE_9__* input_layer; struct TYPE_9__* state_layer; struct TYPE_9__* update_layer; struct TYPE_9__* reset_layer; struct TYPE_9__* uh; struct TYPE_9__* ur; struct TYPE_9__* uz; struct TYPE_9__* wh; struct TYPE_9__* wr; struct TYPE_9__* wz; struct TYPE_9__* ug; struct TYPE_9__* uo; struct TYPE_9__* uf; struct TYPE_9__* ui; struct TYPE_9__* wg; struct TYPE_9__* wo; struct TYPE_9__* wf; struct TYPE_9__* wi; scalar_t__ dontsave; } ;
typedef TYPE_2__ layer ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int*,int,int,int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (TYPE_2__) ;
 int FUNC_7 (TYPE_2__,int *) ;
 int FUNC_8 (TYPE_2__,int *) ;
 int FUNC_9 (TYPE_2__,int *) ;
 int VAR_10 ;

void FUNC_10(network *VAR_11, char *VAR_12, int VAR_13)
{





    FUNC_4(VAR_10, "Saving weights to %s\n", VAR_12);
    FILE *VAR_14 = FUNC_3(VAR_12, "wb");
    if(!VAR_14) FUNC_2(VAR_12);

    int VAR_15 = 0;
    int VAR_16 = 2;
    int VAR_17 = 0;
    FUNC_5(&VAR_15, sizeof(int), 1, VAR_14);
    FUNC_5(&VAR_16, sizeof(int), 1, VAR_14);
    FUNC_5(&VAR_17, sizeof(int), 1, VAR_14);
    FUNC_5(VAR_11->seen, sizeof(size_t), 1, VAR_14);

    int VAR_18;
    for(VAR_18 = 0; VAR_18 < VAR_11->n && VAR_18 < VAR_13; ++VAR_18){
        layer VAR_19 = VAR_11->layers[VAR_18];
        if (VAR_19.dontsave) continue;
        if(VAR_19.type == VAR_2 || VAR_19.type == VAR_4){
            FUNC_9(VAR_19, VAR_14);
        } if(VAR_19.type == VAR_1){
            FUNC_8(VAR_19, VAR_14);
        } if(VAR_19.type == VAR_0){
            FUNC_7(VAR_19, VAR_14);
        } if(VAR_19.type == VAR_8){
            FUNC_8(*(VAR_19.input_layer), VAR_14);
            FUNC_8(*(VAR_19.self_layer), VAR_14);
            FUNC_8(*(VAR_19.output_layer), VAR_14);
        } if (VAR_19.type == VAR_7) {
            FUNC_8(*(VAR_19.wi), VAR_14);
            FUNC_8(*(VAR_19.wf), VAR_14);
            FUNC_8(*(VAR_19.wo), VAR_14);
            FUNC_8(*(VAR_19.wg), VAR_14);
            FUNC_8(*(VAR_19.ui), VAR_14);
            FUNC_8(*(VAR_19.uf), VAR_14);
            FUNC_8(*(VAR_19.uo), VAR_14);
            FUNC_8(*(VAR_19.ug), VAR_14);
        } if (VAR_19.type == VAR_5) {
            if(1){
                FUNC_8(*(VAR_19.wz), VAR_14);
                FUNC_8(*(VAR_19.wr), VAR_14);
                FUNC_8(*(VAR_19.wh), VAR_14);
                FUNC_8(*(VAR_19.uz), VAR_14);
                FUNC_8(*(VAR_19.ur), VAR_14);
                FUNC_8(*(VAR_19.uh), VAR_14);
            }else{
                FUNC_8(*(VAR_19.reset_layer), VAR_14);
                FUNC_8(*(VAR_19.update_layer), VAR_14);
                FUNC_8(*(VAR_19.state_layer), VAR_14);
            }
        } if(VAR_19.type == VAR_3){
            FUNC_9(*(VAR_19.input_layer), VAR_14);
            FUNC_9(*(VAR_19.self_layer), VAR_14);
            FUNC_9(*(VAR_19.output_layer), VAR_14);
        } if(VAR_19.type == VAR_6){





            int VAR_20 = VAR_19.out_w*VAR_19.out_h;
            int VAR_21 = VAR_19.size*VAR_19.size*VAR_19.c*VAR_19.n*VAR_20;
            FUNC_5(VAR_19.biases, sizeof(float), VAR_19.outputs, VAR_14);
            FUNC_5(VAR_19.weights, sizeof(float), VAR_21, VAR_14);
        }
    }
    FUNC_1(VAR_14);
}
