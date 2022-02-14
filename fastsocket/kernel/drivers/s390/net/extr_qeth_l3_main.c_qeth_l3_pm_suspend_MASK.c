
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hwtrap; } ;
struct qeth_card {scalar_t__ state; int gdev; TYPE_1__ info; int wait_q; scalar_t__ dev; } ;
struct ccwgroup_device {scalar_t__ state; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 struct qeth_card* FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct qeth_card*,int ) ;
 int FUNC_4 (struct qeth_card*,int ,int) ;
 scalar_t__ FUNC_5 (struct qeth_card*,int) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(struct ccwgroup_device *VAR_3)
{
 struct qeth_card *VAR_4 = FUNC_1(&VAR_3->dev);

 if (VAR_4->dev)
  FUNC_2(VAR_4->dev);
 FUNC_4(VAR_4, 0, 1);
 FUNC_6(VAR_4->wait_q, FUNC_5(VAR_4, 0xffffffff) == 0);
 if (VAR_3->state == VAR_1)
  return 0;
 if (VAR_4->state == VAR_0) {
  if (VAR_4->info.hwtrap)
   FUNC_3(VAR_4, VAR_2);
  FUNC_0(VAR_4->gdev, 1);
 } else
  FUNC_0(VAR_4->gdev, 0);
 return 0;
}
