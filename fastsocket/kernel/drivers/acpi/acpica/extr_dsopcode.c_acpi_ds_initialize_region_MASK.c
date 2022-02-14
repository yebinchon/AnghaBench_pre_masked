
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (union acpi_operand_object*,int ) ;
 union acpi_operand_object* FUNC_1 (int ) ;

acpi_status FUNC_2(acpi_handle VAR_1)
{
 union acpi_operand_object *VAR_2;
 acpi_status VAR_3;

 VAR_2 = FUNC_1(VAR_1);



 VAR_3 = FUNC_0(VAR_2, VAR_0);
 return (VAR_3);
}
