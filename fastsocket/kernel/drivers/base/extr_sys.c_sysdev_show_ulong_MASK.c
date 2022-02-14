
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysdev_ext_attribute {scalar_t__ var; } ;
struct sysdev_attribute {int dummy; } ;
struct sys_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,unsigned long) ;
 struct sysdev_ext_attribute* FUNC_1 (struct sysdev_attribute*) ;

ssize_t FUNC_2(struct sys_device *VAR_1,
     struct sysdev_attribute *VAR_2,
     char *VAR_3)
{
 struct sysdev_ext_attribute *VAR_4 = FUNC_1(VAR_2);
 return FUNC_0(VAR_3, VAR_0, "%lx\n", *(unsigned long *)(VAR_4->var));
}
