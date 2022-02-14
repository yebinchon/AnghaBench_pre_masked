
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_freq; int min_freq; } ;
struct cpufreq_policy {unsigned int min; unsigned int max; int cpu; TYPE_1__ cpuinfo; } ;
struct cpufreq_frequency_table {unsigned int frequency; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cpufreq_policy*,int ,int ) ;
 int FUNC_2 (char*,unsigned int,unsigned int,int ) ;

int FUNC_3(struct cpufreq_policy *VAR_3,
       struct cpufreq_frequency_table *VAR_4)
{
 unsigned int VAR_5 = ~0;
 unsigned int VAR_6;
 unsigned int VAR_7 = 0;

 FUNC_2("request for verification of policy (%u - %u kHz) for cpu %u\n",
     VAR_3->min, VAR_3->max, VAR_3->cpu);

 if (!FUNC_0(VAR_3->cpu))
  return -VAR_2;

 FUNC_1(VAR_3, VAR_3->cpuinfo.min_freq,
         VAR_3->cpuinfo.max_freq);

 for (VAR_6 = 0; (VAR_4[VAR_6].frequency != VAR_1); VAR_6++) {
  unsigned int VAR_8 = VAR_4[VAR_6].frequency;
  if (VAR_8 == VAR_0)
   continue;
  if ((VAR_8 >= VAR_3->min) && (VAR_8 <= VAR_3->max))
   VAR_7++;
  else if ((VAR_5 > VAR_8) && (VAR_8 > VAR_3->max))
   VAR_5 = VAR_8;
 }

 if (!VAR_7)
  VAR_3->max = VAR_5;

 FUNC_1(VAR_3, VAR_3->cpuinfo.min_freq,
         VAR_3->cpuinfo.max_freq);

 FUNC_2("verification lead to (%u - %u kHz) for cpu %u\n",
    VAR_3->min, VAR_3->max, VAR_3->cpu);

 return 0;
}
