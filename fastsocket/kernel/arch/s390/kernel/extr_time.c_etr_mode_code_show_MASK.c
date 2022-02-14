
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysdev_attribute {int dummy; } ;
struct sys_device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int psc0; int psc1; } ;
struct TYPE_4__ {TYPE_1__ esw; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 struct sys_device VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct sys_device *VAR_5,
    struct sysdev_attribute *VAR_6, char *VAR_7)
{
 if (!VAR_3 && !VAR_4)

  return -VAR_0;
 return FUNC_0(VAR_7, "%i\n", (VAR_5 == &VAR_2) ?
         VAR_1 : VAR_1);
}
