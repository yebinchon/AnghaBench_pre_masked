
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {int cpu; } ;
struct TYPE_2__ {int (* getavg ) (struct cpufreq_policy*,unsigned int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 struct cpufreq_policy* FUNC_1 (int ) ;
 int FUNC_2 (struct cpufreq_policy*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (struct cpufreq_policy*,unsigned int) ;

int FUNC_4(struct cpufreq_policy *VAR_2, unsigned int VAR_3)
{
 int VAR_4 = 0;

 VAR_2 = FUNC_1(VAR_2->cpu);
 if (!VAR_2)
  return -VAR_0;

 if (FUNC_0(VAR_3) && VAR_1->getavg)
  VAR_4 = VAR_1->getavg(VAR_2, VAR_3);

 FUNC_2(VAR_2);
 return VAR_4;
}
