
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_freq; int min_freq; int transition_latency; } ;
struct cpufreq_policy {int cpu; int max; int min; int cur; TYPE_1__ cpuinfo; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct cpufreq_policy *VAR_0)
{


 VAR_0->cpuinfo.max_freq = 160000;
 VAR_0->cpuinfo.min_freq = 12000;
 VAR_0->cpuinfo.transition_latency = 1000000;
 VAR_0->cur = VAR_0->min = VAR_0->max = FUNC_0(VAR_0->cpu);

 return 0;
}
