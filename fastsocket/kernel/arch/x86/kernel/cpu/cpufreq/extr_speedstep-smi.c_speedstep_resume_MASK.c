
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct cpufreq_policy *VAR_0)
{
 int VAR_1 = FUNC_1();

 if (VAR_1)
  FUNC_0("fails in re-aquiring ownership of a SMI interface.\n");

 return VAR_1;
}
