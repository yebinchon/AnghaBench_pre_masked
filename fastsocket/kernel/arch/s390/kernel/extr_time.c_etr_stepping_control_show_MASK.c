
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysdev_attribute {int dummy; } ;
struct sys_device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int e0; int e1; } ;


 TYPE_1__ VAR_0 ;
 struct sys_device VAR_1 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct sys_device *VAR_2,
     struct sysdev_attribute *VAR_3,
     char *VAR_4)
{
 return FUNC_0(VAR_4, "%i\n", (VAR_2 == &VAR_1) ?
         VAR_0.e0 : VAR_0.e1);
}
