
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* mod_name; struct module* owner; int * bus; int name; } ;
struct xenbus_driver {TYPE_1__ driver; int name; } ;
struct xen_bus_type {int bus; } ;
struct module {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(struct xenbus_driver *VAR_0,
      struct xen_bus_type *VAR_1,
      struct module *VAR_2,
      const char *VAR_3)
{
 VAR_0->driver.name = VAR_0->name;
 VAR_0->driver.bus = &VAR_1->bus;
 VAR_0->driver.owner = VAR_2;
 VAR_0->driver.mod_name = VAR_3;

 return FUNC_0(&VAR_0->driver);
}
