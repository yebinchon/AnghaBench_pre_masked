
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ gpu_index; int n; int index; int delta; int input; TYPE_2__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_8__ {int (* backward ) (TYPE_2__,TYPE_1__) ;int delta; int output; scalar_t__ stopbackward; } ;
typedef TYPE_2__ layer ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__,TYPE_1__) ;

void FUNC_2(network *VAR_0)
{






    network VAR_1 = *VAR_0;
    int VAR_2;
    network VAR_3 = VAR_1;
    for(VAR_2 = VAR_1.n-1; VAR_2 >= 0; --VAR_2){
        layer VAR_4 = VAR_1.layers[VAR_2];
        if(VAR_4.stopbackward) break;
        if(VAR_2 == 0){
            VAR_1 = VAR_3;
        }else{
            layer VAR_5 = VAR_1.layers[VAR_2-1];
            VAR_1.input = VAR_5.output;
            VAR_1.delta = VAR_5.delta;
        }
        VAR_1.index = VAR_2;
        VAR_4.backward(VAR_4, VAR_1);
    }
}
