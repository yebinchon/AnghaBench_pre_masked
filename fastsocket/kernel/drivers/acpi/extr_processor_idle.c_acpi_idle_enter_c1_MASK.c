
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_state {int dummy; } ;
struct cpuidle_device {int dummy; } ;
struct acpi_processor_cx {int usage; } ;
struct acpi_processor {int dummy; } ;
typedef int s64 ;
typedef int ktime_t ;


 struct acpi_processor* FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_processor_cx*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 struct acpi_processor_cx* FUNC_3 (struct cpuidle_state*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct acpi_processor*,struct acpi_processor_cx*,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_1 ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct cpuidle_device *VAR_2,
         struct cpuidle_state *VAR_3)
{
 ktime_t VAR_4, VAR_5;
 s64 VAR_6;
 struct acpi_processor *VAR_7;
 struct acpi_processor_cx *VAR_8 = FUNC_3(VAR_3);

 VAR_7 = FUNC_0(VAR_1);

 if (FUNC_10(!VAR_7))
  return 0;

 FUNC_8();


 if (VAR_0) {
  FUNC_9();
  FUNC_2();
  return 0;
 }

 FUNC_7(VAR_7, VAR_8, 1);
 VAR_4 = FUNC_4();
 FUNC_1(VAR_8);
 VAR_5 = FUNC_4();
 VAR_6 = FUNC_6(FUNC_5(VAR_5, VAR_4));

 FUNC_9();
 VAR_8->usage++;
 FUNC_7(VAR_7, VAR_8, 0);

 return VAR_6;
}
