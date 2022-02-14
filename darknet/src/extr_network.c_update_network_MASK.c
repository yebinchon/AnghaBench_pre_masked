
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int batch; scalar_t__ t; int eps; int B2; int B1; int adam; int decay; int momentum; int learning_rate; int member_0; } ;
typedef TYPE_1__ update_args ;
struct TYPE_10__ {scalar_t__ gpu_index; int batch; int subdivisions; int n; TYPE_3__* layers; scalar_t__* t; int eps; int B2; int B1; int adam; int decay; int momentum; } ;
typedef TYPE_2__ network ;
struct TYPE_11__ {int (* update ) (TYPE_3__,TYPE_1__) ;} ;
typedef TYPE_3__ layer ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__,TYPE_1__) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(network *VAR_0)
{






    network VAR_1 = *VAR_0;
    int VAR_2;
    update_args VAR_3 = {0};
    VAR_3.batch = VAR_1.batch*VAR_1.subdivisions;
    VAR_3.learning_rate = FUNC_0(VAR_0);
    VAR_3.momentum = VAR_1.momentum;
    VAR_3.decay = VAR_1.decay;
    VAR_3.adam = VAR_1.adam;
    VAR_3.B1 = VAR_1.B1;
    VAR_3.B2 = VAR_1.B2;
    VAR_3.eps = VAR_1.eps;
    ++*VAR_1.t;
    VAR_3.t = *VAR_1.t;

    for(VAR_2 = 0; VAR_2 < VAR_1.n; ++VAR_2){
        layer VAR_4 = VAR_1.layers[VAR_2];
        if(VAR_4.update){
            VAR_4.update(VAR_4, VAR_3);
        }
    }
}
