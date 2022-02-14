
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct cpufreq_policy {int kobj_unregister; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 struct cpufreq_policy* FUNC_2 (struct kobject*) ;

__attribute__((used)) static void FUNC_3(struct kobject *VAR_0)
{
 struct cpufreq_policy *VAR_1 = FUNC_2(VAR_0);
 FUNC_1("last reference is dropped\n");
 FUNC_0(&VAR_1->kobj_unregister);
}
