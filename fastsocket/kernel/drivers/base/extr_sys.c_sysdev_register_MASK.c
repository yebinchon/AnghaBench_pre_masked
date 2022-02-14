
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct sysdev_class {TYPE_1__ kset; } ;
struct sys_device {struct sysdev_class* cls; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct sys_device*) ;
 scalar_t__ FUNC_3 (struct sys_device*) ;

int FUNC_4(struct sys_device *VAR_1)
{
 struct sysdev_class *VAR_2 = VAR_1->cls;

 if (FUNC_3(VAR_1))
  return -VAR_0;

 FUNC_1("Registering sys device of class '%s'\n",
   FUNC_0(&VAR_2->kset.kobj));

 return FUNC_2(VAR_1);
}
