
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 struct cpufreq_policy* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct cpufreq_policy*) ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (unsigned int) ;

unsigned int FUNC_6(unsigned int VAR_0)
{
 unsigned int VAR_1 = 0;
 struct cpufreq_policy *VAR_2 = FUNC_1(VAR_0);

 if (!VAR_2)
  goto out;

 if (FUNC_4(FUNC_3(VAR_0)))
  goto out_policy;

 VAR_1 = FUNC_0(VAR_0);

 FUNC_5(VAR_0);

out_policy:
 FUNC_2(VAR_2);
out:
 return VAR_1;
}
