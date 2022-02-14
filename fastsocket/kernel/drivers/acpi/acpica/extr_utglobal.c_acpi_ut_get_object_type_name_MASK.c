
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
union acpi_operand_object {TYPE_1__ common; } ;


 char* FUNC_0 (int ) ;

char *FUNC_1(union acpi_operand_object *VAR_0)
{

 if (!VAR_0) {
  return ("[NULL Object Descriptor]");
 }

 return (FUNC_0(VAR_0->common.type));
}
