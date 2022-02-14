
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_kobject {int kobj; scalar_t__ drivers_dir; } ;


 scalar_t__ FUNC_0 (char*,int *) ;

__attribute__((used)) static void FUNC_1(struct module_kobject *VAR_0)
{
 if (!VAR_0 || VAR_0->drivers_dir)
  return;

 VAR_0->drivers_dir = FUNC_0("drivers", &VAR_0->kobj);
}
