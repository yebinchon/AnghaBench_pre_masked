
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysdev_attribute {int dummy; } ;
struct sys_device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 () ;
 int FUNC_1 (struct sys_device*,struct sysdev_attribute*,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(struct sys_device *VAR_0,
          struct sysdev_attribute *VAR_1,
          const char *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_0();
 return VAR_4;
}
