
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
typedef union acpi_generic_state {int dummy; } acpi_generic_state ;
typedef int u16 ;
typedef int acpi_status ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 union acpi_generic_state* FUNC_1 (union acpi_operand_object*,int ) ;
 int FUNC_2 (union acpi_generic_state**,union acpi_generic_state*) ;

acpi_status
FUNC_3(union acpi_operand_object *VAR_2,
         u16 VAR_3,
         union acpi_generic_state **VAR_4)
{
 union acpi_generic_state *VAR_5;

 FUNC_0();



 if (!VAR_2) {
  return (VAR_1);
 }

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_5) {
  return (VAR_0);
 }

 FUNC_2(VAR_4, VAR_5);
 return (VAR_1);
}
