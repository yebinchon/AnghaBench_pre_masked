
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_device {scalar_t__ state; scalar_t__ target; TYPE_2__* cdev; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dasd_device *VAR_3)
{
 int VAR_4;

 if (VAR_3->state == VAR_3->target)

  return;
 if (VAR_3->state < VAR_3->target)
  VAR_4 = FUNC_1(VAR_3);
 else
  VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 == -VAR_0)
  return;
 if (VAR_4)
  VAR_3->target = VAR_3->state;


 FUNC_2(&VAR_3->cdev->dev.kobj, VAR_1);

 if (VAR_3->state == VAR_3->target)
  FUNC_3(&VAR_2);
}
