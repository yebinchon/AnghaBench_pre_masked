
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {scalar_t__ cpu; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpufreq_policy*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct cpufreq_policy *VAR_2)
{
 if (VAR_2->cpu != 0)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_1);
}
