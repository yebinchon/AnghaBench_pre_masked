
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* net; int time_steps; int inputs; int batch; } ;
typedef TYPE_2__ size_params ;
typedef int list ;
struct TYPE_9__ {void* tanh; } ;
typedef TYPE_3__ layer ;
struct TYPE_7__ {int adam; } ;


 TYPE_3__ FUNC_0 (int ,int ,int,int ,int,int ) ;
 int FUNC_1 (int *,char*,int) ;
 void* FUNC_2 (int *,char*,int ) ;

layer FUNC_3(list *VAR_0, size_params VAR_1)
{
    int VAR_2 = FUNC_1(VAR_0, "output",1);
    int VAR_3 = FUNC_2(VAR_0, "batch_normalize", 0);

    layer VAR_4 = FUNC_0(VAR_1.batch, VAR_1.inputs, VAR_2, VAR_1.time_steps, VAR_3, VAR_1.net->adam);
    VAR_4.tanh = FUNC_2(VAR_0, "tanh", 0);

    return VAR_4;
}
