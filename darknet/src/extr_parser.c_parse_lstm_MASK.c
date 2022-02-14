
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* net; int time_steps; int inputs; int batch; } ;
typedef TYPE_2__ size_params ;
typedef int list ;
typedef int layer ;
struct TYPE_4__ {int adam; } ;


 int FUNC_0 (int ,int ,int,int ,int,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int ) ;

layer FUNC_3(list *VAR_0, size_params VAR_1)
{
    int VAR_2 = FUNC_1(VAR_0, "output", 1);
    int VAR_3 = FUNC_2(VAR_0, "batch_normalize", 0);

    layer VAR_4 = FUNC_0(VAR_1.batch, VAR_1.inputs, VAR_2, VAR_1.time_steps, VAR_3, VAR_1.net->adam);

    return VAR_4;
}
