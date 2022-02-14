
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct cpufreq_frequency_table {size_t frequency; } ;


 size_t* VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct cpufreq_frequency_table *VAR_1,
  u32 VAR_2)
{
 return VAR_1[VAR_0[VAR_2]].frequency;
}
