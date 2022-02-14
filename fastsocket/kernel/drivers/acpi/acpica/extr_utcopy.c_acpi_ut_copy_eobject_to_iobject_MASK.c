
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
union acpi_object {scalar_t__ type; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (union acpi_object*,union acpi_operand_object**) ;
 int FUNC_2 (union acpi_object*,union acpi_operand_object**) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

acpi_status
FUNC_4(union acpi_object *VAR_2,
    union acpi_operand_object **VAR_3)
{
 acpi_status VAR_4;

 FUNC_0(VAR_1);

 if (VAR_2->type == VAR_0) {
  VAR_4 =
      FUNC_1(VAR_2,
            VAR_3);
 } else {



  VAR_4 =
      FUNC_2(VAR_2,
          VAR_3);
 }

 FUNC_3(VAR_4);
}
