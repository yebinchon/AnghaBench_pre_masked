
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cpufreq_policy*,int ,unsigned int,unsigned int,unsigned int*) ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct cpufreq_policy *VAR_2,
       unsigned int VAR_3,
       unsigned int VAR_4)
{
 unsigned int VAR_5 = 0;

 if (FUNC_0(VAR_2, VAR_1,
    VAR_3, VAR_4, &VAR_5))
  return -VAR_0;

 FUNC_1(VAR_5);

 return 0;
}
