
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int kobj; } ;
typedef size_t ssize_t ;
typedef enum kobject_action { ____Placeholder_kobject_action } kobject_action ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (char const*,size_t,int*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 enum kobject_action VAR_5;

 if (FUNC_1(VAR_3, VAR_4, &VAR_5) == 0) {
  FUNC_2(&VAR_1->kobj, VAR_5);
  goto out;
 }

 FUNC_0(VAR_1, "uevent: unsupported action-string; this will "
       "be ignored in a future kernel version\n");
 FUNC_2(&VAR_1->kobj, VAR_0);
out:
 return VAR_4;
}
