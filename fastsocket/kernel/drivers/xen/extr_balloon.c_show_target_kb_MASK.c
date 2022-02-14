
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysdev_attribute {int dummy; } ;
struct sys_device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int target_pages; } ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct sys_device *VAR_1, struct sysdev_attribute *VAR_2,
         char *VAR_3)
{
 return FUNC_1(VAR_3, "%lu\n", FUNC_0(VAR_0.target_pages));
}
