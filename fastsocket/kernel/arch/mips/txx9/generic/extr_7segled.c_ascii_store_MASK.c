
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysdev_attribute {int dummy; } ;
struct sys_device {unsigned int id; } ;
typedef size_t ssize_t ;


 int FUNC_0 (unsigned int,char const) ;

__attribute__((used)) static ssize_t FUNC_1(struct sys_device *VAR_0,
      struct sysdev_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 unsigned int VAR_4 = VAR_0->id;
 FUNC_0(VAR_4, VAR_2[0]);
 return VAR_3;
}
