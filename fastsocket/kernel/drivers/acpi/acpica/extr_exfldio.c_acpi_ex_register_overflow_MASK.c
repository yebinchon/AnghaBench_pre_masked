
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bit_length; } ;
union acpi_operand_object {TYPE_1__ common_field; } ;
typedef int u8 ;
typedef int acpi_integer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u8
FUNC_0(union acpi_operand_object *VAR_3,
     acpi_integer VAR_4)
{

 if (VAR_3->common_field.bit_length >= VAR_0) {




  return (VAR_1);
 }

 if (VAR_4 >= ((acpi_integer) 1 << VAR_3->common_field.bit_length)) {




  return (VAR_2);
 }



 return (VAR_1);
}
