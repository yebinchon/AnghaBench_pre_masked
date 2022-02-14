
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int owner; int name; int * bus; } ;
struct ccw_driver {int owner; int name; struct device_driver driver; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_driver*) ;

int FUNC_1(struct ccw_driver *VAR_1)
{
 struct device_driver *VAR_2 = &VAR_1->driver;

 VAR_2->bus = &VAR_0;
 VAR_2->name = VAR_1->name;
 VAR_2->owner = VAR_1->owner;

 return FUNC_0(VAR_2);
}
