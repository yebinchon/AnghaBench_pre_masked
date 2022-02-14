
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysdev_ext_attribute {scalar_t__ var; } ;
struct sysdev_attribute {int dummy; } ;
struct sys_device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long FUNC_0 (char const*,char**,int ) ;
 struct sysdev_ext_attribute* FUNC_1 (struct sysdev_attribute*) ;

ssize_t FUNC_2(struct sys_device *VAR_3,
      struct sysdev_attribute *VAR_4,
      const char *VAR_5, size_t VAR_6)
{
 struct sysdev_ext_attribute *VAR_7 = FUNC_1(VAR_4);
 char *VAR_8;
 long VAR_9 = FUNC_0(VAR_5, &VAR_8, 0);
 if (VAR_8 == VAR_5 || VAR_9 > VAR_1 || VAR_9 < VAR_2)
  return -VAR_0;
 *(int *)(VAR_7->var) = VAR_9;

 return VAR_6;
}
