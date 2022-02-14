
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct freq_attr {int (* show ) (struct cpufreq_policy*,char*) ;} ;
struct cpufreq_policy {int cpu; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct cpufreq_policy* FUNC_0 (int ) ;
 int FUNC_1 (struct cpufreq_policy*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct cpufreq_policy*,char*) ;
 struct freq_attr* FUNC_4 (struct attribute*) ;
 struct cpufreq_policy* FUNC_5 (struct kobject*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct kobject *VAR_2, struct attribute *VAR_3, char *VAR_4)
{
 struct cpufreq_policy *VAR_5 = FUNC_5(VAR_2);
 struct freq_attr *VAR_6 = FUNC_4(VAR_3);
 ssize_t VAR_7 = -VAR_0;
 VAR_5 = FUNC_0(VAR_5->cpu);
 if (!VAR_5)
  goto no_policy;

 if (FUNC_2(VAR_5->cpu) < 0)
  goto fail;

 if (VAR_6->show)
  VAR_7 = VAR_6->show(VAR_5, VAR_4);
 else
  VAR_7 = -VAR_1;

 FUNC_6(VAR_5->cpu);
fail:
 FUNC_1(VAR_5);
no_policy:
 return VAR_7;
}
