
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysdev_attribute {int dummy; } ;
struct sys_device {int dummy; } ;
typedef int ssize_t ;


 struct sys_device VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_1(struct sys_device *VAR_3,
    struct sysdev_attribute *VAR_4,
    char *VAR_5)
{
 unsigned int VAR_6;

 VAR_6 = (VAR_3 == &VAR_0) ? VAR_1 : VAR_2;
 return FUNC_0(VAR_5, "%i\n", VAR_6);
}
