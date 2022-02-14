
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_frequency_table {unsigned long frequency; } ;
struct clk {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct clk *VAR_3,
   struct cpufreq_frequency_table *VAR_4,
   unsigned long VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_4[VAR_6].frequency != VAR_1; VAR_6++) {
  unsigned long VAR_7 = VAR_4[VAR_6].frequency;

  if (VAR_7 == VAR_0)
   continue;

  if (VAR_7 == VAR_5)
   return VAR_6;
 }

 return -VAR_2;
}
