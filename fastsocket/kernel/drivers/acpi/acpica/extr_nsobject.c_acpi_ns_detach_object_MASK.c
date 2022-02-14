
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; union acpi_operand_object* next_object; } ;
struct TYPE_3__ {int aml_start; } ;
union acpi_operand_object {TYPE_2__ common; TYPE_1__ method; } ;
struct acpi_namespace_node {int flags; int type; union acpi_operand_object* object; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (union acpi_operand_object*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct acpi_namespace_node*) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_6(struct acpi_namespace_node *VAR_8)
{
 union acpi_operand_object *VAR_9;

 FUNC_2(VAR_6);

 VAR_9 = VAR_8->object;

 if (!VAR_9 || (VAR_9->common.type == VAR_3)) {
  VAR_7;
 }

 if (VAR_8->flags & VAR_5) {



  if (VAR_9->common.type == VAR_4) {
   FUNC_1(VAR_9->method.aml_start);
  }
 }



 VAR_8->object = ((void*)0);
 if (FUNC_3(VAR_9) == VAR_1) {
  VAR_8->object = VAR_9->common.next_object;
  if (VAR_8->object &&
      ((VAR_8->object)->common.type != VAR_3)) {
   VAR_8->object = VAR_8->object->common.next_object;
  }
 }



 VAR_8->type = VAR_2;

 FUNC_0((VAR_0, "Node %p [%4.4s] Object %p\n",
     VAR_8, FUNC_4(VAR_8), VAR_9));



 FUNC_5(VAR_9);
 VAR_7;
}
