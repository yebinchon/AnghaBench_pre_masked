
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hwtrap; } ;
struct qeth_card {TYPE_1__ info; } ;
struct ccwgroup_device {scalar_t__ state; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct qeth_card* FUNC_0 (int *) ;
 int FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*,int ) ;
 int FUNC_3 (struct qeth_card*,int ) ;
 int FUNC_4 (struct qeth_card*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ccwgroup_device *VAR_2)
{
 struct qeth_card *VAR_3 = FUNC_0(&VAR_2->dev);
 FUNC_4(VAR_3, 0, 1);
 if ((VAR_2->state == VAR_0) && VAR_3->info.hwtrap)
  FUNC_2(VAR_3, VAR_1);
 FUNC_3(VAR_3, 0);
 FUNC_1(VAR_3);
}
