
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int owner; int name; int * bus; } ;
struct ccwgroup_driver {TYPE_1__ driver; int owner; int name; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(struct ccwgroup_driver *VAR_1)
{

 VAR_1->driver.bus = &VAR_0;
 VAR_1->driver.name = VAR_1->name;
 VAR_1->driver.owner = VAR_1->owner;

 return FUNC_0(&VAR_1->driver);
}
