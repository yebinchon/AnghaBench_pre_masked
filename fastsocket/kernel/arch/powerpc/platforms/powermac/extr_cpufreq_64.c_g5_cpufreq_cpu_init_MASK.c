
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int transition_latency; } ;
struct cpufreq_policy {int cpu; int cpus; int cur; TYPE_1__ cpuinfo; } ;
struct TYPE_6__ {int frequency; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpufreq_policy*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int *) ;
 TYPE_2__* VAR_1 ;
 size_t FUNC_3 () ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct cpufreq_policy *VAR_3)
{
 VAR_3->cpuinfo.transition_latency = VAR_2;
 VAR_3->cur = VAR_1[FUNC_3()].frequency;



 FUNC_2(VAR_3->cpus, &VAR_0);
 FUNC_1(VAR_1, VAR_3->cpu);

 return FUNC_0(VAR_3,
  VAR_1);
}
