
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ccwgdriver; } ;
struct qeth_card {TYPE_2__ discipline; } ;
struct ccwgroup_device {int dev; } ;
struct TYPE_3__ {int (* restore ) (struct ccwgroup_device*) ;} ;


 struct qeth_card* FUNC_0 (int *) ;
 int FUNC_1 (struct ccwgroup_device*) ;

__attribute__((used)) static int FUNC_2(struct ccwgroup_device *VAR_0)
{
 struct qeth_card *VAR_1 = FUNC_0(&VAR_0->dev);
 if (VAR_1->discipline.ccwgdriver &&
     VAR_1->discipline.ccwgdriver->restore)
  return VAR_1->discipline.ccwgdriver->restore(VAR_0);
 return 0;
}
