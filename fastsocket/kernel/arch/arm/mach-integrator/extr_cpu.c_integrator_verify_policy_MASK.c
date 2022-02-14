
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icst525_vco {int dummy; } ;
struct TYPE_2__ {int max_freq; int min_freq; } ;
struct cpufreq_policy {TYPE_1__ cpuinfo; void* min; void* max; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpufreq_policy*,int ,int ) ;
 void* FUNC_1 (int *,struct icst525_vco) ;
 struct icst525_vco FUNC_2 (int *,void*) ;

__attribute__((used)) static int FUNC_3(struct cpufreq_policy *VAR_1)
{
 struct icst525_vco VAR_2;

 FUNC_0(VAR_1,
         VAR_1->cpuinfo.min_freq,
         VAR_1->cpuinfo.max_freq);

 VAR_2 = FUNC_2(&VAR_0, VAR_1->max);
 VAR_1->max = FUNC_1(&VAR_0, VAR_2);

 VAR_2 = FUNC_2(&VAR_0, VAR_1->min);
 VAR_1->min = FUNC_1(&VAR_0, VAR_2);

 FUNC_0(VAR_1,
         VAR_1->cpuinfo.min_freq,
         VAR_1->cpuinfo.max_freq);

 return 0;
}
