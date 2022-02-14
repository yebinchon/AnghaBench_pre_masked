
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysdev_attribute {int attr; } ;
struct sys_device {int kobj; } ;


 int FUNC_0 (int *,int *) ;

int FUNC_1(struct sys_device *VAR_0, struct sysdev_attribute *VAR_1)
{
 return FUNC_0(&VAR_0->kobj, &VAR_1->attr);
}
