
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ virt; } ;
struct TYPE_4__ {scalar_t__ virt; } ;
struct i2o_controller {TYPE_3__* pdev; TYPE_2__ base; TYPE_1__ in_queue; scalar_t__ raptor; int status; int hrt; int dlct; int lct; int status_block; int out_queue; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct device dev; } ;


 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(struct i2o_controller *VAR_0)
{
 struct device *VAR_1;

 VAR_1 = &VAR_0->pdev->dev;

 FUNC_0(VAR_1, &VAR_0->out_queue);
 FUNC_0(VAR_1, &VAR_0->status_block);
 FUNC_2(VAR_0->lct);
 FUNC_0(VAR_1, &VAR_0->dlct);
 FUNC_0(VAR_1, &VAR_0->hrt);
 FUNC_0(VAR_1, &VAR_0->status);

 if (VAR_0->raptor && VAR_0->in_queue.virt)
  FUNC_1(VAR_0->in_queue.virt);

 if (VAR_0->base.virt)
  FUNC_1(VAR_0->base.virt);

 FUNC_3(VAR_0->pdev);
}
