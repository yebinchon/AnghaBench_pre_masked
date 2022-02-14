
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int cpu; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct cpufreq_policy *VAR_1, char *VAR_2)
{
 return FUNC_1(VAR_2, "%u\n", FUNC_0(VAR_0, VAR_1->cpu));
}
