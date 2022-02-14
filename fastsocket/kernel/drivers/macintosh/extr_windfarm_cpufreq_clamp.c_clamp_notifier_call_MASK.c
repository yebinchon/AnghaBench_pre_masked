
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_2__ {unsigned long min_freq; unsigned long max_freq; } ;
struct cpufreq_policy {TYPE_1__ cpuinfo; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cpufreq_policy*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_2,
          unsigned long VAR_3, void *VAR_4)
{
 struct cpufreq_policy *VAR_5 = VAR_4;
 unsigned long VAR_6;

 if (VAR_3 != VAR_0)
  return 0;

 VAR_6 = VAR_1 ? (VAR_5->cpuinfo.min_freq) : (VAR_5->cpuinfo.max_freq);
 FUNC_0(VAR_5, 0, VAR_6);

 return 0;
}
