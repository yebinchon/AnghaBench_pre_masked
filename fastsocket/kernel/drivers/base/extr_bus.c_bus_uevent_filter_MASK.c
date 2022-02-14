
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kset {int dummy; } ;
struct kobject {int dummy; } ;
struct kobj_type {int dummy; } ;


 struct kobj_type VAR_0 ;
 struct kobj_type* FUNC_0 (struct kobject*) ;

__attribute__((used)) static int FUNC_1(struct kset *VAR_1, struct kobject *VAR_2)
{
 struct kobj_type *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 == &VAR_0)
  return 1;
 return 0;
}
