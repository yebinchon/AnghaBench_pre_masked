
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct device {TYPE_1__* class; } ;
struct TYPE_2__ {struct kobject* dev_kobj; } ;


 struct kobject* VAR_0 ;

__attribute__((used)) static struct kobject *FUNC_0(struct device *VAR_1)
{
 struct kobject *VAR_2;

 if (VAR_1->class)
  VAR_2 = VAR_1->class->dev_kobj;
 else
  VAR_2 = VAR_0;

 return VAR_2;
}
