
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct edac_dev_sysfs_block_attribute {int (* show ) (struct kobject*,struct attribute*,char*) ;} ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct kobject*,struct attribute*,char*) ;
 struct edac_dev_sysfs_block_attribute* FUNC_1 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_1,
    struct attribute *VAR_2, char *VAR_3)
{
 struct edac_dev_sysfs_block_attribute *VAR_4 =
      FUNC_1(VAR_2);

 if (VAR_4->show)
  return VAR_4->show(VAR_1, VAR_2, VAR_3);
 return -VAR_0;
}
