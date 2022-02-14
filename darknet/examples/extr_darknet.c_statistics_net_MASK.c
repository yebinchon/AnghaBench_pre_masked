
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int n; TYPE_2__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_6__ {scalar_t__ type; struct TYPE_6__* state_h_layer; struct TYPE_6__* state_r_layer; struct TYPE_6__* state_z_layer; struct TYPE_6__* input_h_layer; struct TYPE_6__* input_r_layer; struct TYPE_6__* input_z_layer; scalar_t__ batch_normalize; } ;
typedef TYPE_2__ layer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_2__) ;

void FUNC_3(char *VAR_3, char *VAR_4)
{
    VAR_2 = -1;
    network *VAR_5 = FUNC_0(VAR_3, VAR_4, 0);
    int VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_5->n; ++VAR_6) {
        layer VAR_7 = VAR_5->layers[VAR_6];
        if (VAR_7.type == VAR_0 && VAR_7.batch_normalize) {
            FUNC_1("Connected Layer %d\n", VAR_6);
            FUNC_2(VAR_7);
        }
        if (VAR_7.type == VAR_1 && VAR_7.batch_normalize) {
            FUNC_1("GRU Layer %d\n", VAR_6);
            FUNC_1("Input Z\n");
            FUNC_2(*VAR_7.input_z_layer);
            FUNC_1("Input R\n");
            FUNC_2(*VAR_7.input_r_layer);
            FUNC_1("Input H\n");
            FUNC_2(*VAR_7.input_h_layer);
            FUNC_1("State Z\n");
            FUNC_2(*VAR_7.state_z_layer);
            FUNC_1("State R\n");
            FUNC_2(*VAR_7.state_r_layer);
            FUNC_1("State H\n");
            FUNC_2(*VAR_7.state_h_layer);
        }
        FUNC_1("\n");
    }
}
