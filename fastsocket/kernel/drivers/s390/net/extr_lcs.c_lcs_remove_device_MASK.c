
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lcs_card {scalar_t__ dev; } ;
struct TYPE_3__ {int kobj; } ;
struct ccwgroup_device {scalar_t__ state; TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ,struct lcs_card**,int) ;
 int FUNC_1 (int,int ,char*) ;
 struct lcs_card* FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (struct lcs_card*) ;
 int FUNC_4 (struct lcs_card*) ;
 int FUNC_5 (struct ccwgroup_device*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void
FUNC_9(struct ccwgroup_device *VAR_3)
{
 struct lcs_card *VAR_4;

 VAR_4 = FUNC_2(&VAR_3->dev);
 if (!VAR_4)
  return;

 FUNC_1(3, VAR_2, "remdev");
 FUNC_0(3, VAR_2, &VAR_4, sizeof(void*));
 if (VAR_3->state == VAR_0) {
  FUNC_5(VAR_3);
 }
 if (VAR_4->dev)
  FUNC_8(VAR_4->dev);
 FUNC_7(&VAR_3->dev.kobj, &VAR_1);
 FUNC_3(VAR_4);
 FUNC_4(VAR_4);
 FUNC_6(&VAR_3->dev);
}
