
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct kobject {int dummy; } ;
struct cdev {int kobj; struct module* owner; } ;


 struct kobject* FUNC_0 (int *) ;
 int FUNC_1 (struct module*) ;
 int FUNC_2 (struct module*) ;

__attribute__((used)) static struct kobject *FUNC_3(struct cdev *VAR_0)
{
 struct module *VAR_1 = VAR_0->owner;
 struct kobject *VAR_2;

 if (VAR_1 && !FUNC_2(VAR_1))
  return ((void*)0);
 VAR_2 = FUNC_0(&VAR_0->kobj);
 if (!VAR_2)
  FUNC_1(VAR_1);
 return VAR_2;
}
