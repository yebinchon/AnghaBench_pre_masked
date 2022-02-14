
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int min_freq; unsigned int max_freq; } ;
struct cpufreq_policy {unsigned int min; unsigned int max; TYPE_1__ cpuinfo; } ;
struct cpufreq_frequency_table {unsigned int frequency; int index; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,unsigned int,...) ;

int FUNC_1(struct cpufreq_policy *VAR_3,
        struct cpufreq_frequency_table *VAR_4)
{
 unsigned int VAR_5 = ~0;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7;

 for (VAR_7 = 0; (VAR_4[VAR_7].frequency != VAR_1); VAR_7++) {
  unsigned int VAR_8 = VAR_4[VAR_7].frequency;
  if (VAR_8 == VAR_0) {
   FUNC_0("table entry %u is invalid, skipping\n", VAR_7);

   continue;
  }
  FUNC_0("table entry %u: %u kHz, %u index\n",
     VAR_7, VAR_8, VAR_4[VAR_7].index);
  if (VAR_8 < VAR_5)
   VAR_5 = VAR_8;
  if (VAR_8 > VAR_6)
   VAR_6 = VAR_8;
 }

 VAR_3->min = VAR_3->cpuinfo.min_freq = VAR_5;
 VAR_3->max = VAR_3->cpuinfo.max_freq = VAR_6;

 if (VAR_3->min == ~0)
  return -VAR_2;
 else
  return 0;
}
