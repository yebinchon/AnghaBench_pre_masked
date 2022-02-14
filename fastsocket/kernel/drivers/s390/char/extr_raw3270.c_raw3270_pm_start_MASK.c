
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct raw3270 {int cdev; TYPE_2__* view; int flags; } ;
struct ccw_device {int dev; } ;
struct TYPE_4__ {TYPE_1__* fn; } ;
struct TYPE_3__ {int (* activate ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct raw3270* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct ccw_device *VAR_1)
{
 struct raw3270 *VAR_2;
 unsigned long VAR_3;

 VAR_2 = FUNC_1(&VAR_1->dev);
 if (!VAR_2)
  return 0;
 FUNC_3(FUNC_2(VAR_2->cdev), VAR_3);
 FUNC_0(VAR_0, &VAR_2->flags);
 if (VAR_2->view)
  VAR_2->view->fn->activate(VAR_2->view);
 FUNC_4(FUNC_2(VAR_2->cdev), VAR_3);
 return 0;
}
