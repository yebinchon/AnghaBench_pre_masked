
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int dummy; } ;
struct acpi_cpufreq_data {int dummy; } ;


 unsigned int FUNC_0 (int ,struct acpi_cpufreq_data*) ;
 int FUNC_1 (struct cpumask const*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static unsigned int FUNC_3(const struct cpumask *VAR_0, unsigned int VAR_1,
    struct acpi_cpufreq_data *VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < 100; VAR_4++) {
  VAR_3 = FUNC_0(FUNC_1(VAR_0), VAR_2);
  if (VAR_3 == VAR_1)
   return 1;
  FUNC_2(10);
 }
 return 0;
}
