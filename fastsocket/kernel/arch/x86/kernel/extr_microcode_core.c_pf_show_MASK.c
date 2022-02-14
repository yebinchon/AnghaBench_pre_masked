
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pf; } ;
struct ucode_cpu_info {TYPE_1__ cpu_sig; } ;
struct sysdev_attribute {int dummy; } ;
struct sys_device {int id; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 struct ucode_cpu_info* VAR_0 ;

__attribute__((used)) static ssize_t FUNC_1(struct sys_device *VAR_1,
   struct sysdev_attribute *VAR_2, char *VAR_3)
{
 struct ucode_cpu_info *VAR_4 = VAR_0 + VAR_1->id;

 return FUNC_0(VAR_3, "0x%x\n", VAR_4->cpu_sig.pf);
}
