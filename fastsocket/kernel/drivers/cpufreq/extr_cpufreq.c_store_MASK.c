
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct freq_attr {int (* store ) (struct cpufreq_policy*,char const*,size_t) ;} ;
struct cpufreq_policy {int cpu; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct cpufreq_policy* FUNC_0 (int ) ;
 int FUNC_1 (struct cpufreq_policy*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct cpufreq_policy*,char const*,size_t) ;
 struct freq_attr* FUNC_4 (struct attribute*) ;
 struct cpufreq_policy* FUNC_5 (struct kobject*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct kobject *VAR_2, struct attribute *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 struct cpufreq_policy *VAR_6 = FUNC_5(VAR_2);
 struct freq_attr *VAR_7 = FUNC_4(VAR_3);
 ssize_t VAR_8 = -VAR_0;
 VAR_6 = FUNC_0(VAR_6->cpu);
 if (!VAR_6)
  goto no_policy;

 if (FUNC_2(VAR_6->cpu) < 0)
  goto fail;

 if (VAR_7->store)
  VAR_8 = VAR_7->store(VAR_6, VAR_4, VAR_5);
 else
  VAR_8 = -VAR_1;

 FUNC_6(VAR_6->cpu);
fail:
 FUNC_1(VAR_6);
no_policy:
 return VAR_8;
}
