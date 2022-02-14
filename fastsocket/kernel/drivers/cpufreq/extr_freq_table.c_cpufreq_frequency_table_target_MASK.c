
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {unsigned int cpu; unsigned int min; unsigned int max; } ;
struct cpufreq_frequency_table {unsigned int index; unsigned int frequency; } ;


 unsigned int VAR_0 ;


 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,unsigned int,unsigned int,unsigned int) ;

int FUNC_2(struct cpufreq_policy *VAR_3,
       struct cpufreq_frequency_table *VAR_4,
       unsigned int VAR_5,
       unsigned int VAR_6,
       unsigned int *VAR_7)
{
 struct cpufreq_frequency_table VAR_8 = {
  .index = ~0,
  .frequency = 0,
 };
 struct cpufreq_frequency_table VAR_9 = {
  .index = ~0,
  .frequency = 0,
 };
 unsigned int VAR_10;

 FUNC_1("request for target %u kHz (relation: %u) for cpu %u\n",
     VAR_5, VAR_6, VAR_3->cpu);

 switch (VAR_6) {
 case 129:
  VAR_9.frequency = ~0;
  break;
 case 128:
  VAR_8.frequency = ~0;
  break;
 }

 if (!FUNC_0(VAR_3->cpu))
  return -VAR_2;

 for (VAR_10 = 0; (VAR_4[VAR_10].frequency != VAR_1); VAR_10++) {
  unsigned int VAR_11 = VAR_4[VAR_10].frequency;
  if (VAR_11 == VAR_0)
   continue;
  if ((VAR_11 < VAR_3->min) || (VAR_11 > VAR_3->max))
   continue;
  switch (VAR_6) {
  case 129:
   if (VAR_11 <= VAR_5) {
    if (VAR_11 >= VAR_8.frequency) {
     VAR_8.frequency = VAR_11;
     VAR_8.index = VAR_10;
    }
   } else {
    if (VAR_11 <= VAR_9.frequency) {
     VAR_9.frequency = VAR_11;
     VAR_9.index = VAR_10;
    }
   }
   break;
  case 128:
   if (VAR_11 >= VAR_5) {
    if (VAR_11 <= VAR_8.frequency) {
     VAR_8.frequency = VAR_11;
     VAR_8.index = VAR_10;
    }
   } else {
    if (VAR_11 >= VAR_9.frequency) {
     VAR_9.frequency = VAR_11;
     VAR_9.index = VAR_10;
    }
   }
   break;
  }
 }
 if (VAR_8.index > VAR_10) {
  if (VAR_9.index > VAR_10)
   return -VAR_2;
  *VAR_7 = VAR_9.index;
 } else
  *VAR_7 = VAR_8.index;

 FUNC_1("target is %u (%u kHz, %u)\n", *VAR_7, VAR_4[*VAR_7].frequency,
  VAR_4[*VAR_7].index);

 return 0;
}
