
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {union acpi_operand_object* mutex; } ;
union acpi_operand_object {TYPE_1__ method; } ;
typedef scalar_t__ u32 ;
struct acpi_evaluate_info {int dummy; } ;


 struct acpi_evaluate_info* FUNC_0 (int) ;
 int FUNC_1 (struct acpi_evaluate_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 union acpi_operand_object* VAR_1 ;
 int FUNC_4 (union acpi_operand_object*,struct acpi_evaluate_info*) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_6(void)
{
 union acpi_operand_object *VAR_4;
 union acpi_operand_object *VAR_5;
 struct acpi_evaluate_info *VAR_6;
 u32 VAR_7 = 0;

 FUNC_2(VAR_2);



 VAR_5 = VAR_1;
 if (!VAR_5) {
  VAR_3;
 }



 VAR_6 = FUNC_0(sizeof(struct acpi_evaluate_info));
 if (!VAR_6) {
  VAR_3;
 }



 while (VAR_5) {
  VAR_4 = VAR_5;
  VAR_5 = VAR_5->method.mutex;



  VAR_4->method.mutex = ((void*)0);
  FUNC_4(VAR_4, VAR_6);
  VAR_7++;



  FUNC_5(VAR_4);
 }

 FUNC_3((VAR_0,
     "Executed %u blocks of module-level executable AML code",
     VAR_7));

 FUNC_1(VAR_6);
 VAR_1 = ((void*)0);
 VAR_3;
}
