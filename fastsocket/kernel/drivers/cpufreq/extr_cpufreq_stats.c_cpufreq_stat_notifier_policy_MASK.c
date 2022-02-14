
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct cpufreq_policy {unsigned int cpu; } ;
struct cpufreq_frequency_table {int dummy; } ;


 unsigned long VAR_0 ;
 struct cpufreq_frequency_table* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct cpufreq_policy*,struct cpufreq_frequency_table*) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_1,
  unsigned long VAR_2, void *VAR_3)
{
 int VAR_4;
 struct cpufreq_policy *VAR_5 = VAR_3;
 struct cpufreq_frequency_table *VAR_6;
 unsigned int VAR_7 = VAR_5->cpu;
 if (VAR_2 != VAR_0)
  return 0;
 VAR_6 = FUNC_0(VAR_7);
 if (!VAR_6)
  return 0;
 VAR_4 = FUNC_1(VAR_5, VAR_6);
 if (VAR_4)
  return VAR_4;
 return 0;
}
