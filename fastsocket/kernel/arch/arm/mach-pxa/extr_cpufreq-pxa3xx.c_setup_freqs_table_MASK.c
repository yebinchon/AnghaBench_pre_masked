
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa3xx_freq_info {int cpufreq_mhz; } ;
struct cpufreq_policy {int dummy; } ;
struct cpufreq_frequency_table {int index; int frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cpufreq_policy*,struct cpufreq_frequency_table*) ;
 struct cpufreq_frequency_table* FUNC_1 (int,int ) ;
 struct pxa3xx_freq_info* VAR_3 ;
 int VAR_4 ;
 struct cpufreq_frequency_table* VAR_5 ;

__attribute__((used)) static int FUNC_2(struct cpufreq_policy *VAR_6,
        struct pxa3xx_freq_info *VAR_7, int VAR_8)
{
 struct cpufreq_frequency_table *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1((VAR_8 + 1) * sizeof(*VAR_9), VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  VAR_9[VAR_10].index = VAR_10;
  VAR_9[VAR_10].frequency = VAR_7[VAR_10].cpufreq_mhz * 1000;
 }
 VAR_9[VAR_8].index = VAR_10;
 VAR_9[VAR_8].frequency = VAR_0;

 VAR_3 = VAR_7;
 VAR_4 = VAR_8;
 VAR_5 = VAR_9;

 return FUNC_0(VAR_6, VAR_9);
}
