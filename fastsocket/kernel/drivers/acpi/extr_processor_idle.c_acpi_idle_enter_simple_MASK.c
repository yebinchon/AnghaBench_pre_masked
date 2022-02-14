
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_state {int dummy; } ;
struct cpuidle_device {int dummy; } ;
struct acpi_processor_cx {scalar_t__ entry_method; scalar_t__ type; int time; int usage; } ;
struct acpi_processor {int dummy; } ;
typedef int s64 ;
typedef int ktime_t ;
struct TYPE_2__ {int status; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct acpi_processor* FUNC_1 (int ) ;
 int FUNC_2 (struct acpi_processor_cx*) ;
 int FUNC_3 (struct cpuidle_device*,struct cpuidle_state*) ;
 scalar_t__ VAR_4 ;
 struct acpi_processor_cx* FUNC_4 (struct cpuidle_state*) ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct acpi_processor*,struct acpi_processor_cx*,int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_5 ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct cpuidle_device *VAR_6,
      struct cpuidle_state *VAR_7)
{
 struct acpi_processor *VAR_8;
 struct acpi_processor_cx *VAR_9 = FUNC_4(VAR_7);
 ktime_t VAR_10, VAR_11;
 s64 VAR_12;
 s64 VAR_13 = 0;

 VAR_8 = FUNC_1(VAR_5);

 if (FUNC_16(!VAR_8))
  return 0;

 if (VAR_4)
  return(FUNC_3(VAR_6, VAR_7));

 FUNC_10();
 if (VAR_9->entry_method != VAR_0) {
  FUNC_5()->status &= ~VAR_3;




  FUNC_15();
 }

 if (FUNC_16(FUNC_12())) {
  FUNC_5()->status |= VAR_3;
  FUNC_11();
  return 0;
 }





 FUNC_9(VAR_8, VAR_9, 1);

 if (VAR_9->type == VAR_1)
  FUNC_0();

 VAR_10 = FUNC_6();

 FUNC_13();
 FUNC_2(VAR_9);
 VAR_11 = FUNC_6();
 VAR_12 = FUNC_8(FUNC_7(VAR_11, VAR_10));

 VAR_13 = FUNC_17(VAR_12);


 FUNC_14(VAR_13*VAR_2);

 FUNC_11();
 FUNC_5()->status |= VAR_3;

 VAR_9->usage++;

 FUNC_9(VAR_8, VAR_9, 0);
 VAR_9->time += VAR_13;
 return VAR_12;
}
