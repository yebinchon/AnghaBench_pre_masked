
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int inputs; int batch; int delta; } ;
typedef TYPE_1__ softmax_layer ;
struct TYPE_6__ {int delta; } ;
typedef TYPE_2__ network ;


 int FUNC_0 (int,int,int ,int,int ,int) ;

void FUNC_1(const softmax_layer VAR_0, network VAR_1)
{
    FUNC_0(VAR_0.inputs*VAR_0.batch, 1, VAR_0.delta, 1, VAR_1.delta, 1);
}
