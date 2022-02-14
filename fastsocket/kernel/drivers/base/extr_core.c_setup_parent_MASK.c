
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_2__ {struct kobject* parent; } ;
struct device {TYPE_1__ kobj; } ;


 struct kobject* FUNC_0 (struct device*,struct device*) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0, struct device *VAR_1)
{
 struct kobject *VAR_2;
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  VAR_0->kobj.parent = VAR_2;
}
