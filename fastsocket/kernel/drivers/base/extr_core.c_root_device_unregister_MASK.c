
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct root_device {TYPE_1__ dev; scalar_t__ owner; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (int *,char*) ;
 struct root_device* FUNC_2 (struct device*) ;

void FUNC_3(struct device *VAR_0)
{
 struct root_device *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->owner)
  FUNC_1(&VAR_1->dev.kobj, "module");

 FUNC_0(VAR_0);
}
