
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; union acpi_operand_object* next_object; } ;
struct TYPE_3__ {scalar_t__ handler; void* pointer; } ;
union acpi_operand_object {TYPE_2__ common; TYPE_1__ data; } ;
struct acpi_namespace_node {union acpi_operand_object* object; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_object_handler ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 union acpi_operand_object* FUNC_0 (scalar_t__) ;

acpi_status
FUNC_1(struct acpi_namespace_node *VAR_4,
      acpi_object_handler VAR_5, void *VAR_6)
{
 union acpi_operand_object *VAR_7;
 union acpi_operand_object *VAR_8;
 union acpi_operand_object *VAR_9;



 VAR_7 = ((void*)0);
 VAR_8 = VAR_4->object;
 while (VAR_8) {
  if ((VAR_8->common.type == VAR_0) &&
      (VAR_8->data.handler == VAR_5)) {
   return (VAR_1);
  }

  VAR_7 = VAR_8;
  VAR_8 = VAR_8->common.next_object;
 }



 VAR_9 = FUNC_0(VAR_0);
 if (!VAR_9) {
  return (VAR_2);
 }

 VAR_9->data.handler = VAR_5;
 VAR_9->data.pointer = VAR_6;



 if (VAR_7) {
  VAR_7->common.next_object = VAR_9;
 } else {
  VAR_4->object = VAR_9;
 }

 return (VAR_3);
}
