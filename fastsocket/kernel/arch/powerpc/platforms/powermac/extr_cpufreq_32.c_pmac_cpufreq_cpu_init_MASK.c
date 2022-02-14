
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int transition_latency; } ;
struct cpufreq_policy {scalar_t__ cpu; int cur; TYPE_1__ cpuinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpufreq_policy*,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct cpufreq_policy *VAR_4)
{
 if (VAR_4->cpu != 0)
  return -VAR_1;

 VAR_4->cpuinfo.transition_latency = VAR_0;
 VAR_4->cur = VAR_2;

 FUNC_1(VAR_3, VAR_4->cpu);
 return FUNC_0(VAR_4, VAR_3);
}
