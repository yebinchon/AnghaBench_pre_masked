
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sysdev_class {int kset; } ;
struct TYPE_3__ {int * kset; } ;
struct sys_device {TYPE_1__ kobj; struct sysdev_class* cls; } ;
struct kobject {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int,int) ;

int FUNC_2(struct sys_device *VAR_2)
{
 struct sysdev_class *VAR_3 = VAR_2->cls;

 if (!VAR_3)
  return -VAR_0;


 FUNC_1(&VAR_2->kobj, 0x00, sizeof(struct kobject));


 VAR_2->kobj.kset = &VAR_3->kset;


 FUNC_0(&VAR_2->kobj, &VAR_1);

 return 0;
}
