
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int * dev; int wait_q; } ;
struct ccwgroup_device {scalar_t__ state; int dev; } ;


 scalar_t__ VAR_0 ;
 struct qeth_card* FUNC_0 (int *) ;
 int FUNC_1 (struct qeth_card*,int ) ;
 int FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ccwgroup_device*) ;
 int FUNC_5 (struct qeth_card*,int ,int) ;
 scalar_t__ FUNC_6 (struct qeth_card*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void FUNC_9(struct ccwgroup_device *VAR_1)
{
 struct qeth_card *VAR_2 = FUNC_0(&VAR_1->dev);

 FUNC_3(&VAR_1->dev);

 FUNC_5(VAR_2, 0, 1);
 FUNC_8(VAR_2->wait_q, FUNC_6(VAR_2, 0xffffffff) == 0);

 if (VAR_1->state == VAR_0)
  FUNC_4(VAR_1);

 if (VAR_2->dev) {
  FUNC_7(VAR_2->dev);
  VAR_2->dev = ((void*)0);
 }

 FUNC_1(VAR_2, 0);
 FUNC_2(VAR_2);
 return;
}
