
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
struct cache {int dummy; } ;
typedef int ssize_t ;


 char* FUNC_0 (struct cache*) ;
 struct cache* FUNC_1 (struct kobject*) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_0, struct kobj_attribute *VAR_1, char *VAR_2)
{
 struct cache *VAR_3;

 VAR_3 = FUNC_1(VAR_0);

 return FUNC_2(VAR_2, "%s\n", FUNC_0(VAR_3));
}
