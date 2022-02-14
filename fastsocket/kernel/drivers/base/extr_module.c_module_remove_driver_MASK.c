
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct module_kobject {int * drivers_dir; } ;
struct device_driver {TYPE_1__* p; TYPE_2__* owner; } ;
struct TYPE_4__ {struct module_kobject mkobj; } ;
struct TYPE_3__ {struct module_kobject* mkobj; int kobj; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (struct device_driver*) ;
 int FUNC_2 (int *,char*) ;

void FUNC_3(struct device_driver *VAR_0)
{
 struct module_kobject *VAR_1 = ((void*)0);
 char *VAR_2;

 if (!VAR_0)
  return;

 FUNC_2(&VAR_0->p->kobj, "module");

 if (VAR_0->owner)
  VAR_1 = &VAR_0->owner->mkobj;
 else if (VAR_0->p->mkobj)
  VAR_1 = VAR_0->p->mkobj;
 if (VAR_1 && VAR_1->drivers_dir) {
  VAR_2 = FUNC_1(VAR_0);
  if (VAR_2) {
   FUNC_2(VAR_1->drivers_dir, VAR_2);
   FUNC_0(VAR_2);
  }
 }
}
