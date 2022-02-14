
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {unsigned int cpu; } ;
struct cpufreq_frequency_table {scalar_t__ frequency; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 struct cpufreq_frequency_table* FUNC_0 (int ,unsigned int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct cpufreq_policy *VAR_4, char *VAR_5)
{
 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = VAR_4->cpu;
 ssize_t VAR_8 = 0;
 struct cpufreq_frequency_table *VAR_9;

 if (!FUNC_0(VAR_3, VAR_7))
  return -VAR_2;

 VAR_9 = FUNC_0(VAR_3, VAR_7);

 for (VAR_6 = 0; (VAR_9[VAR_6].frequency != VAR_1); VAR_6++) {
  if (VAR_9[VAR_6].frequency == VAR_0)
   continue;
  VAR_8 += FUNC_1(&VAR_5[VAR_8], "%d ", VAR_9[VAR_6].frequency);
 }
 VAR_8 += FUNC_1(&VAR_5[VAR_8], "\n");

 return VAR_8;

}
