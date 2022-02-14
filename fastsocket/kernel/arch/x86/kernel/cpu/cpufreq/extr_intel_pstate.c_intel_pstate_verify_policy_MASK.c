
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_freq; int min_freq; } ;
struct cpufreq_policy {scalar_t__ policy; TYPE_1__ cpuinfo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cpufreq_policy*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct cpufreq_policy *VAR_3)
{
 FUNC_0(VAR_3,
    VAR_3->cpuinfo.min_freq,
    VAR_3->cpuinfo.max_freq);

 if ((VAR_3->policy != VAR_1) &&
  (VAR_3->policy != VAR_0))
  return -VAR_2;

 return 0;
}
