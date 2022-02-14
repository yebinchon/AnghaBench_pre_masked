
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {size_t cpu; } ;
struct cpufreq_acpi_io {int freq_table; } ;


 struct cpufreq_acpi_io** VAR_0 ;
 unsigned int FUNC_0 (struct cpufreq_policy*,int ,unsigned int,unsigned int,unsigned int*) ;
 int FUNC_1 (char*) ;
 unsigned int FUNC_2 (struct cpufreq_acpi_io*,size_t,unsigned int) ;

__attribute__((used)) static int
FUNC_3 (
 struct cpufreq_policy *VAR_1,
 unsigned int VAR_2,
 unsigned int VAR_3)
{
 struct cpufreq_acpi_io *VAR_4 = VAR_0[VAR_1->cpu];
 unsigned int VAR_5 = 0;
 unsigned int VAR_6 = 0;

 FUNC_1("acpi_cpufreq_setpolicy\n");

 VAR_6 = FUNC_0(VAR_1,
   VAR_4->freq_table, VAR_2, VAR_3, &VAR_5);
 if (VAR_6)
  return (VAR_6);

 VAR_6 = FUNC_2(VAR_4, VAR_1->cpu, VAR_5);

 return (VAR_6);
}
