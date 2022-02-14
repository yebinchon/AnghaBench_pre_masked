
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {size_t cpu; } ;
struct cpufreq_acpi_io {int acpi_data; } ;


 struct cpufreq_acpi_io** VAR_0 ;
 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct cpufreq_acpi_io*) ;

__attribute__((used)) static int
FUNC_4 (
 struct cpufreq_policy *VAR_1)
{
 struct cpufreq_acpi_io *VAR_2 = VAR_0[VAR_1->cpu];

 FUNC_2("acpi_cpufreq_cpu_exit\n");

 if (VAR_2) {
  FUNC_1(VAR_1->cpu);
  VAR_0[VAR_1->cpu] = ((void*)0);
  FUNC_0(&VAR_2->acpi_data,
                                        VAR_1->cpu);
  FUNC_3(VAR_2);
 }

 return (0);
}
