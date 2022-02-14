
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct device_driver {char* name; struct module* owner; int remove; int probe; int * bus; } ;
struct ap_driver {struct device_driver driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device_driver*) ;

int FUNC_1(struct ap_driver *VAR_3, struct module *VAR_4,
         char *VAR_5)
{
 struct device_driver *VAR_6 = &VAR_3->driver;

 VAR_6->bus = &VAR_0;
 VAR_6->probe = VAR_1;
 VAR_6->remove = VAR_2;
 VAR_6->owner = VAR_4;
 VAR_6->name = VAR_5;
 return FUNC_0(VAR_6);
}
