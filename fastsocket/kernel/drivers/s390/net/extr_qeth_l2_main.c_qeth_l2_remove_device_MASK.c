
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int * dev; int wait_q; } ;
struct ccwgroup_device {scalar_t__ state; int dev; } ;


 scalar_t__ VAR_0 ;
 struct qeth_card* FUNC_0 (int *) ;
 int FUNC_1 (struct ccwgroup_device*) ;
 int FUNC_2 (struct qeth_card*,int ,int) ;
 scalar_t__ FUNC_3 (struct qeth_card*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct ccwgroup_device *VAR_1)
{
 struct qeth_card *VAR_2 = FUNC_0(&VAR_1->dev);

 FUNC_2(VAR_2, 0, 1);
 FUNC_5(VAR_2->wait_q, FUNC_3(VAR_2, 0xffffffff) == 0);

 if (VAR_1->state == VAR_0)
  FUNC_1(VAR_1);

 if (VAR_2->dev) {
  FUNC_4(VAR_2->dev);
  VAR_2->dev = ((void*)0);
 }
 return;
}
