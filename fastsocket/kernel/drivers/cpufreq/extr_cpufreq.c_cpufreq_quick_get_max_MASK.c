
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {unsigned int max; } ;


 struct cpufreq_policy* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct cpufreq_policy*) ;

unsigned int FUNC_2(unsigned int VAR_0)
{
 struct cpufreq_policy *VAR_1 = FUNC_0(VAR_0);
 unsigned int VAR_2 = 0;

 if (VAR_1) {
  VAR_2 = VAR_1->max;
  FUNC_1(VAR_1);
 }

 return VAR_2;
}
