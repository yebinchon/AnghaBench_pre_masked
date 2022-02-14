
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int cpu; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpufreq_policy*,unsigned int,unsigned int) ;
 struct cpufreq_policy* FUNC_1 (int ) ;
 int FUNC_2 (struct cpufreq_policy*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct cpufreq_policy *VAR_1,
     unsigned int VAR_2,
     unsigned int VAR_3)
{
 int VAR_4 = -VAR_0;

 VAR_1 = FUNC_1(VAR_1->cpu);
 if (!VAR_1)
  goto no_policy;

 if (FUNC_4(FUNC_3(VAR_1->cpu)))
  goto fail;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);

 FUNC_5(VAR_1->cpu);

fail:
 FUNC_2(VAR_1);
no_policy:
 return VAR_4;
}
