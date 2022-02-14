
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pointer; int (* handler ) (struct acpi_namespace_node*,int ) ;} ;
struct TYPE_4__ {scalar_t__ type; } ;
union acpi_operand_object {TYPE_2__ data; TYPE_1__ common; } ;
struct acpi_namespace_node {union acpi_operand_object* object; } ;
struct TYPE_6__ {int total_freed; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_3 (struct acpi_namespace_node*) ;
 int FUNC_4 (int ,struct acpi_namespace_node*) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int VAR_5 ;
 int FUNC_6 (struct acpi_namespace_node*,int ) ;

void FUNC_7(struct acpi_namespace_node *VAR_6)
{
 union acpi_operand_object *VAR_7;

 FUNC_1(VAR_5);



 FUNC_3(VAR_6);






 VAR_7 = VAR_6->object;
 if (VAR_7 && (VAR_7->common.type == VAR_1)) {



  if (VAR_7->data.handler) {
   VAR_7->data.handler(VAR_6, VAR_7->data.pointer);
  }

  FUNC_5(VAR_7);
 }



 (void)FUNC_4(VAR_3, VAR_6);

 FUNC_2(VAR_4->total_freed++);
 FUNC_0((VAR_0, "Node %p, Remaining %X\n",
     VAR_6, VAR_2));
}
