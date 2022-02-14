
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_freq; int min_freq; } ;
struct cpufreq_policy {int max; unsigned int min; TYPE_1__ cpuinfo; } ;


 int FUNC_0 (struct cpufreq_policy*,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct cpufreq_policy *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = VAR_1->max / (VAR_0 * 100);

 if (VAR_1->min < (VAR_2 * VAR_0 * 100))
  VAR_1->max = (VAR_2 + 1) * VAR_0 * 100;

 FUNC_0(VAR_1,
         VAR_1->cpuinfo.min_freq,
         VAR_1->cpuinfo.max_freq);
 return 0;
}
