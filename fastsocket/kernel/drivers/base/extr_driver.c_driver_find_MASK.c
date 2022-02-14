
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct driver_private {struct device_driver* driver; } ;
struct device_driver {int dummy; } ;
struct bus_type {TYPE_1__* p; } ;
struct TYPE_2__ {int drivers_kset; } ;


 struct kobject* FUNC_0 (int ,char const*) ;
 struct driver_private* FUNC_1 (struct kobject*) ;

struct device_driver *FUNC_2(const char *VAR_0, struct bus_type *VAR_1)
{
 struct kobject *VAR_2 = FUNC_0(VAR_1->p->drivers_kset, VAR_0);
 struct driver_private *VAR_3;

 if (VAR_2) {
  VAR_3 = FUNC_1(VAR_2);
  return VAR_3->driver;
 }
 return ((void*)0);
}
