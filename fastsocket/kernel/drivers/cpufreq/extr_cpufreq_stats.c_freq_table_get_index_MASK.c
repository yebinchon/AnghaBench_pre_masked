
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_stats {int max_state; unsigned int* freq_table; } ;



__attribute__((used)) static int FUNC_0(struct cpufreq_stats *VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->max_state; VAR_2++)
  if (VAR_0->freq_table[VAR_2] == VAR_1)
   return VAR_2;
 return -1;
}
