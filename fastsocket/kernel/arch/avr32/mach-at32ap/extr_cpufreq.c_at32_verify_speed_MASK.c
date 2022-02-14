
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_freq; int min_freq; } ;
struct cpufreq_policy {scalar_t__ cpu; TYPE_1__ cpuinfo; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpufreq_policy*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct cpufreq_policy *VAR_1)
{
 if (VAR_1->cpu != 0)
  return -VAR_0;

 FUNC_0(VAR_1, VAR_1->cpuinfo.min_freq,
   VAR_1->cpuinfo.max_freq);
 return 0;
}
