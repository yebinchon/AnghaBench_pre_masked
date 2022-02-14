
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
struct TYPE_4__ {int value; union acpi_operand_object* object; } ;
struct TYPE_3__ {int descriptor_type; } ;
union acpi_generic_state {TYPE_2__ update; TYPE_1__ common; } ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int ,union acpi_operand_object*) ;
 union acpi_generic_state* FUNC_1 () ;
 int FUNC_2 (union acpi_generic_state*) ;
 int VAR_1 ;

union acpi_generic_state *FUNC_3(union acpi_operand_object
            *VAR_2, u16 VAR_3)
{
 union acpi_generic_state *VAR_4;

 FUNC_0(VAR_1, VAR_2);



 VAR_4 = FUNC_1();
 if (!VAR_4) {
  FUNC_2(((void*)0));
 }



 VAR_4->common.descriptor_type = VAR_0;
 VAR_4->update.object = VAR_2;
 VAR_4->update.value = VAR_3;

 FUNC_2(VAR_4);
}
