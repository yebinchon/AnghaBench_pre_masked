
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* truth; scalar_t__* input; } ;
typedef TYPE_1__ network ;
struct TYPE_6__ {scalar_t__ cost_type; int batch; int inputs; int output; int * cost; int delta; } ;
typedef TYPE_2__ cost_layer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,scalar_t__*,scalar_t__*,int ,int ) ;
 int FUNC_1 (int,scalar_t__*,scalar_t__*,int ,int ) ;
 int FUNC_2 (int,scalar_t__*,scalar_t__*,int ,int ) ;
 int FUNC_3 (int ,int) ;

void FUNC_4(cost_layer VAR_4, network VAR_5)
{
    if (!VAR_5.truth) return;
    if(VAR_4.cost_type == VAR_1){
        int VAR_6;
        for(VAR_6 = 0; VAR_6 < VAR_4.batch*VAR_4.inputs; ++VAR_6){
            if(VAR_5.truth[VAR_6] == VAR_2) VAR_5.input[VAR_6] = VAR_2;
        }
    }
    if(VAR_4.cost_type == VAR_3){
        FUNC_2(VAR_4.batch*VAR_4.inputs, VAR_5.input, VAR_5.truth, VAR_4.delta, VAR_4.output);
    }else if(VAR_4.cost_type == VAR_0){
        FUNC_0(VAR_4.batch*VAR_4.inputs, VAR_5.input, VAR_5.truth, VAR_4.delta, VAR_4.output);
    } else {
        FUNC_1(VAR_4.batch*VAR_4.inputs, VAR_5.input, VAR_5.truth, VAR_4.delta, VAR_4.output);
    }
    VAR_4.cost[0] = FUNC_3(VAR_4.output, VAR_4.batch*VAR_4.inputs);
}
