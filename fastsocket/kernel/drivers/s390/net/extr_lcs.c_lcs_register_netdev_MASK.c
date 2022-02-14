
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lcs_card {TYPE_1__* dev; } ;
struct ccwgroup_device {int dev; } ;
struct TYPE_3__ {scalar_t__ reg_state; } ;


 int FUNC_0 (int,int ,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 struct lcs_card* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(struct ccwgroup_device *VAR_2)
{
 struct lcs_card *VAR_3;

 FUNC_0(2, VAR_1, "regnetdv");
 VAR_3 = FUNC_2(&VAR_2->dev);
 if (VAR_3->dev->reg_state != VAR_0)
  return 0;
 FUNC_1(VAR_3->dev, &VAR_2->dev);
 return FUNC_3(VAR_3->dev);
}
