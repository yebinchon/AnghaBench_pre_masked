
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct bus_type* bus; scalar_t__ owner; scalar_t__ name; } ;
struct of_platform_driver {TYPE_1__ driver; scalar_t__ owner; scalar_t__ name; } ;
struct bus_type {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(struct of_platform_driver *VAR_0, struct bus_type *VAR_1)
{

 if (!VAR_0->driver.name)
  VAR_0->driver.name = VAR_0->name;
 if (!VAR_0->driver.owner)
  VAR_0->driver.owner = VAR_0->owner;
 VAR_0->driver.bus = VAR_1;


 return FUNC_0(&VAR_0->driver);
}
