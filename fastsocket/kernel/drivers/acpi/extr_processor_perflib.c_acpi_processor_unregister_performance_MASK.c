
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_processor_performance {int dummy; } ;
struct acpi_processor {TYPE_1__* performance; } ;
struct TYPE_2__ {int states; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct acpi_processor* FUNC_3 (int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_4(struct acpi_processor_performance
          *VAR_2, unsigned int VAR_3)
{
 struct acpi_processor *VAR_4;

 FUNC_1(&VAR_0);

 VAR_4 = FUNC_3(VAR_1, VAR_3);
 if (!VAR_4) {
  FUNC_2(&VAR_0);
  return;
 }

 if (VAR_4->performance)
  FUNC_0(VAR_4->performance->states);
 VAR_4->performance = ((void*)0);

 FUNC_2(&VAR_0);

 return;
}
