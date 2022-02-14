
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct eps_cpu_data {int dummy; } ;
struct cpufreq_policy {unsigned int cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 struct eps_cpu_data** VAR_2 ;
 int FUNC_1 (struct eps_cpu_data*,unsigned int,int) ;
 int FUNC_2 (struct eps_cpu_data*) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct cpufreq_policy *VAR_3)
{
 unsigned int VAR_4 = VAR_3->cpu;
 struct eps_cpu_data *VAR_5;
 u32 VAR_6, VAR_7;

 if (VAR_2[VAR_4] == ((void*)0))
  return -VAR_0;
 VAR_5 = VAR_2[VAR_4];


 FUNC_3(VAR_1, VAR_6, VAR_7);

 FUNC_1(VAR_5, VAR_4, VAR_7 & 0xffff);

 FUNC_0(VAR_3->cpu);
 FUNC_2(VAR_2[VAR_4]);
 VAR_2[VAR_4] = ((void*)0);
 return 0;
}
