
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct driver_private {struct device_driver* driver; } ;
struct device_driver {TYPE_1__* p; } ;
struct TYPE_2__ {int kobj; } ;


 struct kobject* FUNC_0 (int *) ;
 struct driver_private* FUNC_1 (struct kobject*) ;

struct device_driver *FUNC_2(struct device_driver *VAR_0)
{
 if (VAR_0) {
  struct driver_private *VAR_1;
  struct kobject *VAR_2;

  VAR_2 = FUNC_0(&VAR_0->p->kobj);
  VAR_1 = FUNC_1(VAR_2);
  return VAR_1->driver;
 }
 return ((void*)0);
}
