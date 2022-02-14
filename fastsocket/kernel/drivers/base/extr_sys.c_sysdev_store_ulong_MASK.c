
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysdev_ext_attribute {scalar_t__ var; } ;
struct sysdev_attribute {int dummy; } ;
struct sys_device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned long FUNC_0 (char const*,char**,int ) ;
 struct sysdev_ext_attribute* FUNC_1 (struct sysdev_attribute*) ;

ssize_t FUNC_2(struct sys_device *VAR_1,
      struct sysdev_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct sysdev_ext_attribute *VAR_5 = FUNC_1(VAR_2);
 char *VAR_6;
 unsigned long VAR_7 = FUNC_0(VAR_3, &VAR_6, 0);
 if (VAR_6 == VAR_3)
  return -VAR_0;
 *(unsigned long *)(VAR_5->var) = VAR_7;

 return VAR_4;
}
