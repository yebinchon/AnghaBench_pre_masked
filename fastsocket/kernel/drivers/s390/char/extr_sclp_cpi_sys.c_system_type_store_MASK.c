
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,char const*) ;
 int VAR_1 ;

__attribute__((used)) static ssize_t FUNC_4(struct kobject *VAR_2,
     struct kobj_attribute *VAR_3,
     const char *VAR_4,
 size_t VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0("system_type", VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_1(&VAR_0);
 FUNC_3(VAR_1, VAR_4);
 FUNC_2(&VAR_0);

 return VAR_5;
}
