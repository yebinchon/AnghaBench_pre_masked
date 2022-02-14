
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int cpu; } ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(struct cpufreq_policy *VAR_1)
{
 unsigned int VAR_2;
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  if (VAR_2 == VAR_0)
   FUNC_1(VAR_2);
 }
 FUNC_0(VAR_1->cpu);
 return 0;
}
