
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_acpi_io {int dummy; } ;


 struct cpufreq_acpi_io** VAR_0 ;
 int FUNC_0 (char*) ;
 unsigned int FUNC_1 (struct cpufreq_acpi_io*,unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_2 (
 unsigned int VAR_1)
{
 struct cpufreq_acpi_io *VAR_2 = VAR_0[VAR_1];

 FUNC_0("acpi_cpufreq_get\n");

 return FUNC_1(VAR_2, VAR_1);
}
