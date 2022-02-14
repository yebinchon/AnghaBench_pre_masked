
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sq_sysfs_attr {int (* store ) (char const*,size_t) ;} ;
struct kobject {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int (*) (char const*,size_t)) ;
 int FUNC_1 (char const*,size_t) ;
 struct sq_sysfs_attr* FUNC_2 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1, struct attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct sq_sysfs_attr *VAR_5 = FUNC_2(VAR_2);

 if (FUNC_0(VAR_5->store))
  return VAR_5->store(VAR_3, VAR_4);

 return -VAR_0;
}
