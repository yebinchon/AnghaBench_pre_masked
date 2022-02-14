
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct edac_device_ctl_info {int kobj; struct edac_dev_sysfs_attribute* sysfs_attributes; } ;
struct TYPE_2__ {int * name; } ;
struct edac_dev_sysfs_attribute {TYPE_1__ attr; } ;
struct attribute {int dummy; } ;


 int FUNC_0 (int *,struct attribute*) ;

__attribute__((used)) static int FUNC_1(
   struct edac_device_ctl_info *VAR_0)
{
 struct edac_dev_sysfs_attribute *VAR_1;
 int VAR_2 = 0;

 VAR_1 = VAR_0->sysfs_attributes;
 if (VAR_1) {



  while (VAR_1->attr.name != ((void*)0)) {
   VAR_2 = FUNC_0(&VAR_0->kobj,
    (struct attribute*) VAR_1);
   if (VAR_2)
    goto err_out;

   VAR_1++;
  }
 }

err_out:
 return VAR_2;
}
