
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {size_t cpu; } ;
struct TYPE_2__ {int * table; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cpufreq_policy*,int *,unsigned int,unsigned int,unsigned int*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (size_t,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct cpufreq_policy *VAR_2,
     unsigned int VAR_3,
     unsigned int VAR_4)
{
 unsigned int VAR_5 = 0;

 if (FUNC_0(VAR_2,
        &VAR_1[VAR_2->cpu].table[0],
        VAR_3,
        VAR_4,
        &VAR_5))
  return -VAR_0;

 FUNC_1(VAR_2->cpu, VAR_5);

 return 0;
}
