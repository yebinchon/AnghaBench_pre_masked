
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_cpufreq_data {int cpu_feature; } ;




 int FUNC_0 (int ,struct acpi_cpufreq_data*) ;
 int FUNC_1 (int ,struct acpi_cpufreq_data*) ;

__attribute__((used)) static unsigned FUNC_2(u32 VAR_0, struct acpi_cpufreq_data *VAR_1)
{
 switch (VAR_1->cpu_feature) {
 case 129:
  return FUNC_1(VAR_0, VAR_1);
 case 128:
  return FUNC_0(VAR_0, VAR_1);
 default:
  return 0;
 }
}
