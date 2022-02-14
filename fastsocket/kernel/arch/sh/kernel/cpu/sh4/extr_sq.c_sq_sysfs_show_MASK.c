
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sq_sysfs_attr {int (* show ) (char*) ;} ;
struct kobject {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int (*) (char*)) ;
 int FUNC_1 (char*) ;
 struct sq_sysfs_attr* FUNC_2 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1, struct attribute *VAR_2,
        char *VAR_3)
{
 struct sq_sysfs_attr *VAR_4 = FUNC_2(VAR_2);

 if (FUNC_0(VAR_4->show))
  return VAR_4->show(VAR_3);

 return -VAR_0;
}
