
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysdev_attribute {int dummy; } ;
struct sys_device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int ctl; } ;


 TYPE_1__* FUNC_0 (struct sysdev_attribute*) ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct sys_device *VAR_0, struct sysdev_attribute *VAR_1,
    char *VAR_2)
{
 return FUNC_1(VAR_2, "%llx\n", FUNC_0(VAR_1)->ctl);
}
