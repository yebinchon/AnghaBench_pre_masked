
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int governor; int policy; } ;
struct cpufreq_policy {int governor; TYPE_1__ user_policy; int policy; int cpu; } ;
typedef unsigned int ssize_t ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct cpufreq_policy*,struct cpufreq_policy*) ;
 unsigned int FUNC_1 (struct cpufreq_policy*,int ) ;
 scalar_t__ FUNC_2 (char*,int *,int *) ;
 unsigned int FUNC_3 (char const*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct cpufreq_policy *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 unsigned int VAR_4 = -VAR_0;
 char VAR_5[16];
 struct cpufreq_policy VAR_6;

 VAR_4 = FUNC_1(&VAR_6, VAR_1->cpu);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_2, "%15s", VAR_5);
 if (VAR_4 != 1)
  return -VAR_0;

 if (FUNC_2(VAR_5, &VAR_6.policy,
      &VAR_6.governor))
  return -VAR_0;



 VAR_4 = FUNC_0(VAR_1, &VAR_6);

 VAR_1->user_policy.policy = VAR_1->policy;
 VAR_1->user_policy.governor = VAR_1->governor;

 if (VAR_4)
  return VAR_4;
 else
  return VAR_3;
}
