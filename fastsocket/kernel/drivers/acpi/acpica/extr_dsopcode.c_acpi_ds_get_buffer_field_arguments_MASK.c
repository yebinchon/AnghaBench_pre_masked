
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int aml_start; int aml_length; } ;
struct TYPE_6__ {struct acpi_namespace_node* node; } ;
struct TYPE_5__ {int flags; } ;
union acpi_operand_object {TYPE_1__ extra; TYPE_3__ buffer_field; TYPE_2__ common; } ;
struct acpi_namespace_node {int parent; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,union acpi_operand_object*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct acpi_namespace_node*,int ,int ,int ) ;
 union acpi_operand_object* FUNC_4 (union acpi_operand_object*) ;
 int FUNC_5 (int ,struct acpi_namespace_node*,int *) ;
 int FUNC_6 (struct acpi_namespace_node*) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;

acpi_status
FUNC_8(union acpi_operand_object *VAR_5)
{
 union acpi_operand_object *VAR_6;
 struct acpi_namespace_node *VAR_7;
 acpi_status VAR_8;

 FUNC_2(VAR_4, VAR_5);

 if (VAR_5->common.flags & VAR_3) {
  FUNC_7(VAR_2);
 }



 VAR_6 = FUNC_4(VAR_5);
 VAR_7 = VAR_5->buffer_field.node;

 FUNC_0(FUNC_5
   (VAR_1, VAR_7, ((void*)0)));
 FUNC_1((VAR_0, "[%4.4s] BufferField Arg Init\n",
     FUNC_6(VAR_7)));



 VAR_8 = FUNC_3(VAR_7, VAR_7->parent,
        VAR_6->extra.aml_length,
        VAR_6->extra.aml_start);
 FUNC_7(VAR_8);
}
