
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int os_semaphore; } ;
union acpi_operand_object {TYPE_1__ event; } ;
struct acpi_walk_state {scalar_t__* operands; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct acpi_namespace_node*,union acpi_operand_object*,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 union acpi_operand_object* FUNC_4 (int ) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;

acpi_status FUNC_7(struct acpi_walk_state *VAR_4)
{
 acpi_status VAR_5;
 union acpi_operand_object *VAR_6;

 FUNC_1(VAR_3);

 VAR_6 = FUNC_4(VAR_1);
 if (!VAR_6) {
  VAR_5 = VAR_2;
  goto cleanup;
 }





 VAR_5 = FUNC_3(VAR_0, 0,
       &VAR_6->event.os_semaphore);
 if (FUNC_0(VAR_5)) {
  goto cleanup;
 }



 VAR_5 =
     FUNC_2((struct acpi_namespace_node *)VAR_4->
      operands[0], VAR_6, VAR_1);

      cleanup:




 FUNC_5(VAR_6);
 FUNC_6(VAR_5);
}
