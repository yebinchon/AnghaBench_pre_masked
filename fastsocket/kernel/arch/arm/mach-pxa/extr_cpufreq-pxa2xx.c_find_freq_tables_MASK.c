
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_frequency_table {int dummy; } ;
typedef int pxa_freqs_t ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 struct cpufreq_frequency_table* VAR_0 ;
 int * VAR_1 ;
 struct cpufreq_frequency_table* VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 struct cpufreq_frequency_table* VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static void FUNC_2(struct cpufreq_frequency_table **VAR_7,
        pxa_freqs_t **VAR_8)
{
 if (FUNC_0()) {
  if (!VAR_4) {
   *VAR_8 = VAR_1;
   *VAR_7 = VAR_0;
  } else {
   *VAR_8 = VAR_3;
   *VAR_7 = VAR_2;
  }
 }
 if (FUNC_1()) {
  *VAR_8 = VAR_6;
  *VAR_7 = VAR_5;
 }
}
