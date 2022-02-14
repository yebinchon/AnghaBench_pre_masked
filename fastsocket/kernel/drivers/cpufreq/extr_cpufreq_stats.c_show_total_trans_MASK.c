
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_stats {int total_trans; int cpu; } ;
struct cpufreq_policy {int cpu; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct cpufreq_stats* FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct cpufreq_policy *VAR_1, char *VAR_2)
{
 struct cpufreq_stats *VAR_3 = FUNC_0(VAR_0, VAR_1->cpu);
 if (!VAR_3)
  return 0;
 return FUNC_1(VAR_2, "%d\n",
   FUNC_0(VAR_0, VAR_3->cpu)->total_trans);
}
