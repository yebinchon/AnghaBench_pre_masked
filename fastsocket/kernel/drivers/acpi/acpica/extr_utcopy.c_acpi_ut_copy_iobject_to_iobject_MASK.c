
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
union acpi_operand_object {TYPE_1__ common; } ;
struct acpi_walk_state {int dummy; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (union acpi_operand_object*,union acpi_operand_object*,struct acpi_walk_state*) ;
 int FUNC_2 (union acpi_operand_object*,union acpi_operand_object*) ;
 union acpi_operand_object* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;

acpi_status
FUNC_5(union acpi_operand_object *VAR_4,
    union acpi_operand_object **VAR_5,
    struct acpi_walk_state *VAR_6)
{
 acpi_status VAR_7 = VAR_2;

 FUNC_0(VAR_3);



 *VAR_5 = FUNC_3(VAR_4->common.type);
 if (!*VAR_5) {
  FUNC_4(VAR_1);
 }



 if (VAR_4->common.type == VAR_0) {
  VAR_7 =
      FUNC_1(VAR_4, *VAR_5,
            VAR_6);
 } else {
  VAR_7 = FUNC_2(VAR_4, *VAR_5);
 }

 FUNC_4(VAR_7);
}
