
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {size_t cpu; } ;
struct TYPE_2__ {int * table; } ;


 int FUNC_0 (struct cpufreq_policy*,int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct cpufreq_policy *VAR_1)
{
 return FUNC_0(VAR_1,
           &VAR_0[VAR_1->cpu].table[0]);
}
