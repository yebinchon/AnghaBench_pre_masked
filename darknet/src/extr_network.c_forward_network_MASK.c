
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ gpu_index; int n; int index; int truth; int input; TYPE_2__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_9__ {int outputs; int batch; int output; scalar_t__ truth; int (* forward ) (TYPE_2__,TYPE_1__) ;scalar_t__ delta; } ;
typedef TYPE_2__ layer ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,int ,scalar_t__,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__,TYPE_1__) ;

void FUNC_4(network *VAR_0)
{






    network VAR_1 = *VAR_0;
    int VAR_2;
    for(VAR_2 = 0; VAR_2 < VAR_1.n; ++VAR_2){
        VAR_1.index = VAR_2;
        layer VAR_3 = VAR_1.layers[VAR_2];
        if(VAR_3.delta){
            FUNC_1(VAR_3.outputs * VAR_3.batch, 0, VAR_3.delta, 1);
        }
        VAR_3.forward(VAR_3, VAR_1);
        VAR_1.input = VAR_3.output;
        if(VAR_3.truth) {
            VAR_1.truth = VAR_3.output;
        }
    }
    FUNC_0(VAR_0);
}
