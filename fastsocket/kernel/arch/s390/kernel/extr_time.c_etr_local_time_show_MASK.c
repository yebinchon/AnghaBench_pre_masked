
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysdev_attribute {int dummy; } ;
struct sys_device {int dummy; } ;
struct TYPE_4__ {int blto; } ;
struct TYPE_3__ {int v3; } ;
struct etr_aib {TYPE_2__ edf3; TYPE_1__ slsw; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct etr_aib* FUNC_0 (struct sys_device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct sys_device *VAR_1,
   struct sysdev_attribute *VAR_2, char *VAR_3)
{
 struct etr_aib *VAR_4 = FUNC_0(VAR_1);

 if (!VAR_4 || !VAR_4->slsw.v3)
  return -VAR_0;
 return FUNC_1(VAR_3, "%i\n", VAR_4->edf3.blto);
}
