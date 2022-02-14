
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powernow_k8_data {int powernow_table; } ;
struct cpufreq_policy {int cpu; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpufreq_policy*,int ) ;
 struct powernow_k8_data* FUNC_1 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct cpufreq_policy *VAR_2)
{
 struct powernow_k8_data *VAR_3 = FUNC_1(VAR_1, VAR_2->cpu);

 if (!VAR_3)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_3->powernow_table);
}
