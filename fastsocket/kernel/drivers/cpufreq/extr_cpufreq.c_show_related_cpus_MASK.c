
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int related_cpus; int cpus; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct cpufreq_policy *VAR_0, char *VAR_1)
{
 if (FUNC_0(VAR_0->related_cpus))
  return FUNC_1(VAR_0->cpus, VAR_1);
 return FUNC_1(VAR_0->related_cpus, VAR_1);
}
