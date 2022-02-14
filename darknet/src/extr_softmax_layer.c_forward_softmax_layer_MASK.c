
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int batch; int inputs; int groups; int loss; int * cost; int delta; scalar_t__ output; int noloss; int temperature; TYPE_1__* softmax_tree; } ;
typedef TYPE_2__ softmax_layer ;
struct TYPE_8__ {scalar_t__ truth; scalar_t__ input; } ;
typedef TYPE_3__ network ;
struct TYPE_6__ {int groups; int* group_size; } ;


 int FUNC_0 (scalar_t__,int,int,int,int,int,int,int ,scalar_t__) ;
 int FUNC_1 (int,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(const softmax_layer VAR_0, network VAR_1)
{
    if(VAR_0.softmax_tree){
        int VAR_2;
        int VAR_3 = 0;
        for (VAR_2 = 0; VAR_2 < VAR_0.softmax_tree->groups; ++VAR_2) {
            int VAR_4 = VAR_0.softmax_tree->group_size[VAR_2];
            FUNC_0(VAR_1.input + VAR_3, VAR_4, VAR_0.batch, VAR_0.inputs, 1, 0, 1, VAR_0.temperature, VAR_0.output + VAR_3);
            VAR_3 += VAR_4;
        }
    } else {
        FUNC_0(VAR_1.input, VAR_0.inputs/VAR_0.groups, VAR_0.batch, VAR_0.inputs, VAR_0.groups, VAR_0.inputs/VAR_0.groups, 1, VAR_0.temperature, VAR_0.output);
    }

    if(VAR_1.truth && !VAR_0.noloss){
        FUNC_1(VAR_0.batch*VAR_0.inputs, VAR_0.output, VAR_1.truth, VAR_0.delta, VAR_0.loss);
        VAR_0.cost[0] = FUNC_2(VAR_0.loss, VAR_0.batch*VAR_0.inputs);
    }
}
