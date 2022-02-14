
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

acpi_status
FUNC_0(struct acpi_namespace_node * VAR_3,
     acpi_object_handler VAR_4, void **VAR_5)
{
 union acpi_operand_object *VAR_6;

 VAR_6 = VAR_3->object;
 while (VAR_6) {
  if ((VAR_6->common.type == VAR_0) &&
      (VAR_6->data.handler == VAR_4)) {
   *VAR_5 = VAR_6->data.pointer;
   return (VAR_2);
  }

  VAR_6 = VAR_6->common.next_object;
 }

 return (VAR_1);
}
