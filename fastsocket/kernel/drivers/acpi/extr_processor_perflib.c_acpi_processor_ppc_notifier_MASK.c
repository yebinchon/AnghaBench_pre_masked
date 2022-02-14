
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct cpufreq_policy {int cpu; } ;
struct acpi_processor {TYPE_2__* performance; scalar_t__ performance_platform_limit; } ;
struct TYPE_4__ {unsigned int state_count; TYPE_1__* states; } ;
struct TYPE_3__ {int core_frequency; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct cpufreq_policy*,int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct acpi_processor* FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_5,
           unsigned long VAR_6, void *VAR_7)
{
 struct cpufreq_policy *VAR_8 = VAR_7;
 struct acpi_processor *VAR_9;
 unsigned int VAR_10 = 0;

 if (VAR_6 == VAR_1 && VAR_2 <= 0) {
  VAR_2 = 0;
  return 0;
 }

 if (VAR_2)
  return 0;

 if (VAR_6 != VAR_0)
  return 0;

 FUNC_1(&VAR_3);

 VAR_9 = FUNC_3(VAR_4, VAR_8->cpu);
 if (!VAR_9 || !VAR_9->performance)
  goto out;

 VAR_10 = (unsigned int)VAR_9->performance_platform_limit;

 if (VAR_10 >= VAR_9->performance->state_count)
  goto out;

 FUNC_0(VAR_8, 0,
         VAR_9->performance->states[VAR_10].
         core_frequency * 1000);

      out:
 FUNC_2(&VAR_3);

 return 0;
}
