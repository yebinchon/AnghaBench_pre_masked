
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct cpuidle_state_kobj {int kobj_unregister; } ;


 int FUNC_0 (int *) ;
 struct cpuidle_state_kobj* FUNC_1 (struct kobject*) ;

__attribute__((used)) static void FUNC_2(struct kobject *VAR_0)
{
 struct cpuidle_state_kobj *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->kobj_unregister);
}
