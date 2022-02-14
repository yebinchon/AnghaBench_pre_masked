
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {TYPE_1__* governor; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int (* store_setspeed ) (struct cpufreq_policy*,unsigned int) ;} ;


 size_t VAR_0 ;
 unsigned int FUNC_0 (char const*,char*,unsigned int*) ;
 int FUNC_1 (struct cpufreq_policy*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_2(struct cpufreq_policy *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 unsigned int VAR_4 = 0;
 unsigned int VAR_5;

 if (!VAR_1->governor || !VAR_1->governor->store_setspeed)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2, "%u", &VAR_4);
 if (VAR_5 != 1)
  return -VAR_0;

 VAR_1->governor->store_setspeed(VAR_1, VAR_4);

 return VAR_3;
}
