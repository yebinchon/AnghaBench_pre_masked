
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_card {scalar_t__ state; TYPE_1__* gdev; scalar_t__ dev; } ;
struct ccwgroup_device {scalar_t__ state; int dev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (scalar_t__) ;
 struct qeth_card* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct qeth_card*,int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct ccwgroup_device *VAR_2)
{
 struct qeth_card *VAR_3 = FUNC_2(&VAR_2->dev);
 int VAR_4 = 0;

 if (VAR_2->state == VAR_1)
  goto out;

 if (VAR_3->state == VAR_0) {
  VAR_4 = FUNC_0(VAR_3->gdev, 1);
  if (VAR_4) {
   if (VAR_3->dev) {
    FUNC_6();
    FUNC_1(VAR_3->dev);
    FUNC_7();
   }
  }
 } else
  VAR_4 = FUNC_0(VAR_3->gdev, 0);
out:
 FUNC_5(VAR_3, 0xffffffff, 0);
 if (VAR_3->dev)
  FUNC_4(VAR_3->dev);
 if (VAR_4)
  FUNC_3(&VAR_3->gdev->dev, "The qeth device driver "
   "failed to recover an error on the device\n");
 return VAR_4;
}
