
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int n; TYPE_2__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_8__ {scalar_t__ type; struct TYPE_8__* state_h_layer; struct TYPE_8__* state_r_layer; struct TYPE_8__* state_z_layer; struct TYPE_8__* input_h_layer; struct TYPE_8__* input_r_layer; struct TYPE_8__* input_z_layer; scalar_t__ batch_normalize; } ;
typedef TYPE_2__ layer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__) ;
 int FUNC_1 (TYPE_2__) ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;

void FUNC_4(char *VAR_4, char *VAR_5, char *VAR_6)
{
    VAR_3 = -1;
    network *VAR_7 = FUNC_2(VAR_4, VAR_5, 0);
    int VAR_8;
    for (VAR_8 = 0; VAR_8 < VAR_7->n; ++VAR_8) {
        layer VAR_9 = VAR_7->layers[VAR_8];
        if (VAR_9.type == VAR_1 && VAR_9.batch_normalize) {
            FUNC_1(VAR_9);
        }
        if (VAR_9.type == VAR_0 && VAR_9.batch_normalize) {
            FUNC_0(VAR_9);
        }
        if (VAR_9.type == VAR_2 && VAR_9.batch_normalize) {
            FUNC_0(*VAR_9.input_z_layer);
            FUNC_0(*VAR_9.input_r_layer);
            FUNC_0(*VAR_9.input_h_layer);
            FUNC_0(*VAR_9.state_z_layer);
            FUNC_0(*VAR_9.state_r_layer);
            FUNC_0(*VAR_9.state_h_layer);
        }
    }
    FUNC_3(VAR_7, VAR_6);
}
