
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {int cpu; } ;
struct TYPE_2__ {int (* target ) (struct cpufreq_policy*,unsigned int,unsigned int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,int ,unsigned int,unsigned int) ;
 int FUNC_2 (struct cpufreq_policy*,unsigned int,unsigned int) ;

int FUNC_3(struct cpufreq_policy *VAR_2,
       unsigned int VAR_3,
       unsigned int VAR_4)
{
 int VAR_5 = -VAR_0;

 FUNC_1("target for CPU %u: %u kHz, relation %u\n", VAR_2->cpu,
  VAR_3, VAR_4);
 if (FUNC_0(VAR_2->cpu) && VAR_1->target)
  VAR_5 = VAR_1->target(VAR_2, VAR_3, VAR_4);

 return VAR_5;
}
