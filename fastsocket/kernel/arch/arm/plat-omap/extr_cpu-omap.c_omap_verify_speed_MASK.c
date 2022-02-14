
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_freq; int min_freq; } ;
struct cpufreq_policy {int min; int max; TYPE_1__ cpuinfo; scalar_t__ cpu; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct cpufreq_policy*,scalar_t__) ;
 int FUNC_2 (struct cpufreq_policy*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

int FUNC_3(struct cpufreq_policy *VAR_3)
{
 if (VAR_1)
  return FUNC_1(VAR_3, VAR_1);

 if (VAR_3->cpu)
  return -VAR_0;

 FUNC_2(VAR_3, VAR_3->cpuinfo.min_freq,
         VAR_3->cpuinfo.max_freq);

 VAR_3->min = FUNC_0(VAR_2, VAR_3->min * 1000) / 1000;
 VAR_3->max = FUNC_0(VAR_2, VAR_3->max * 1000) / 1000;
 FUNC_2(VAR_3, VAR_3->cpuinfo.min_freq,
         VAR_3->cpuinfo.max_freq);
 return 0;
}
