
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int kobj; } ;
struct attribute_container {scalar_t__ grp; struct device_attribute** attrs; } ;


 struct attribute_container* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,struct device_attribute*) ;
 int FUNC_2 (int *,scalar_t__) ;

void
FUNC_3(struct device *VAR_0)
{
 struct attribute_container *VAR_1 =
  FUNC_0(VAR_0);
 struct device_attribute **VAR_2 = VAR_1->attrs;
 int VAR_3;

 if (!VAR_2 && !VAR_1->grp)
  return;

 if (VAR_1->grp) {
  FUNC_2(&VAR_0->kobj, VAR_1->grp);
  return ;
 }

 for (VAR_3 = 0; VAR_2[VAR_3]; VAR_3++)
  FUNC_1(VAR_0, VAR_2[VAR_3]);
}
