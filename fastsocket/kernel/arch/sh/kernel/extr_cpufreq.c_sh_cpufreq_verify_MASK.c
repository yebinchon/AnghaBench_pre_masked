
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_freq; int min_freq; } ;
struct cpufreq_policy {TYPE_1__ cpuinfo; } ;


 int FUNC_0 (struct cpufreq_policy*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct cpufreq_policy *VAR_0)
{
 FUNC_0(VAR_0, VAR_0->cpuinfo.min_freq,
         VAR_0->cpuinfo.max_freq);
 return 0;
}
