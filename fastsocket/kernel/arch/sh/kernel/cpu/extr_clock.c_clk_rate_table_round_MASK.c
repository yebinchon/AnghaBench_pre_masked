
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_frequency_table {unsigned long frequency; } ;
struct clk {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned long) ;

long FUNC_1(struct clk *VAR_2,
     struct cpufreq_frequency_table *VAR_3,
     unsigned long VAR_4)
{
 unsigned long VAR_5, VAR_6 = ~0UL;
 unsigned long VAR_7 = VAR_4;
 unsigned long VAR_8, VAR_9;
 int VAR_10;

 VAR_8 = VAR_9 = 0;

 for (VAR_10 = 0; VAR_3[VAR_10].frequency != VAR_1; VAR_10++) {
  unsigned long VAR_11 = VAR_3[VAR_10].frequency;

  if (VAR_11 == VAR_0)
   continue;

  if (VAR_11 > VAR_8)
   VAR_8 = VAR_11;
  if (VAR_11 < VAR_9)
   VAR_9 = VAR_11;

  VAR_5 = FUNC_0(VAR_11 - VAR_4);
  if (VAR_5 < VAR_6) {
   VAR_7 = VAR_11;
   VAR_6 = VAR_5;
  }

  if (VAR_5 == 0)
   break;
 }

 if (VAR_4 >= VAR_8)
  VAR_7 = VAR_8;
 if (VAR_4 <= VAR_9)
  VAR_7 = VAR_9;

 return VAR_7;
}
