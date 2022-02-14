
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_stats {int state_num; int* freq_table; int * time_in_state; int cpu; } ;
struct cpufreq_policy {int cpu; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct cpufreq_stats* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char*,int,unsigned long long) ;

__attribute__((used)) static ssize_t FUNC_4(struct cpufreq_policy *VAR_1, char *VAR_2)
{
 ssize_t VAR_3 = 0;
 int VAR_4;
 struct cpufreq_stats *VAR_5 = FUNC_2(VAR_0, VAR_1->cpu);
 if (!VAR_5)
  return 0;
 FUNC_0(VAR_5->cpu);
 for (VAR_4 = 0; VAR_4 < VAR_5->state_num; VAR_4++) {
  VAR_3 += FUNC_3(VAR_2 + VAR_3, "%u %llu\n", VAR_5->freq_table[VAR_4],
   (unsigned long long)
   FUNC_1(VAR_5->time_in_state[VAR_4]));
 }
 return VAR_3;
}
