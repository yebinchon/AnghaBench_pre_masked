
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int transition_latency; } ;
struct cpufreq_policy {int cpu; int cur; TYPE_1__ cpuinfo; } ;


 int FUNC_0 (struct cpufreq_policy*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct cpufreq_policy *VAR_1)
{
 int VAR_2;


 VAR_1->cpuinfo.transition_latency = 1000000;
 VAR_1->cur = FUNC_2(0);

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if (VAR_2)
  return (VAR_2);

 FUNC_1(VAR_0, VAR_1->cpu);

 return 0;
}
