
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ truth; int input; } ;
typedef TYPE_1__ network ;
struct TYPE_6__ {int outputs; int batch; int inputs; int loss; int * cost; int delta; int output; } ;
typedef TYPE_2__ layer ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int,int ,int,int ,int) ;
 int FUNC_2 (int,int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,int) ;

void FUNC_4(const layer VAR_1, network VAR_2)
{
    FUNC_1(VAR_1.outputs*VAR_1.batch, VAR_2.input, 1, VAR_1.output, 1);
    FUNC_0(VAR_1.output, VAR_1.outputs*VAR_1.batch, VAR_0);
    if(VAR_2.truth){
        FUNC_2(VAR_1.batch*VAR_1.inputs, VAR_1.output, VAR_2.truth, VAR_1.delta, VAR_1.loss);
        VAR_1.cost[0] = FUNC_3(VAR_1.loss, VAR_1.batch*VAR_1.inputs);
    }
}
