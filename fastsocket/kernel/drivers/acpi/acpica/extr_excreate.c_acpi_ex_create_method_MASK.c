
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* aml_start; int method_flags; int param_count; int sync_level; int aml_length; } ;
struct TYPE_3__ {scalar_t__ value; } ;
union acpi_operand_object {TYPE_2__ method; TYPE_1__ integer; } ;
typedef int u8 ;
typedef int u32 ;
struct acpi_walk_state {union acpi_operand_object** operands; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 int FUNC_0 (int ,struct acpi_walk_state*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct acpi_namespace_node*,union acpi_operand_object*,int ) ;
 union acpi_operand_object* FUNC_2 (int ) ;
 int FUNC_3 (union acpi_operand_object*) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;

acpi_status
FUNC_5(u8 * VAR_6,
        u32 VAR_7, struct acpi_walk_state *VAR_8)
{
 union acpi_operand_object **VAR_9 = &VAR_8->operands[0];
 union acpi_operand_object *VAR_10;
 acpi_status VAR_11;
 u8 VAR_12;

 FUNC_0(VAR_5, VAR_8);



 VAR_10 = FUNC_2(VAR_0);
 if (!VAR_10) {
  VAR_11 = VAR_1;
  goto exit;
 }



 VAR_10->method.aml_start = VAR_6;
 VAR_10->method.aml_length = VAR_7;





 VAR_12 = (u8) VAR_9[1]->integer.value;

 VAR_10->method.method_flags =
     (u8) (VAR_12 & ~VAR_2);
 VAR_10->method.param_count =
     (u8) (VAR_12 & VAR_2);





 if (VAR_12 & VAR_3) {




  VAR_10->method.sync_level = (u8)
      ((VAR_12 & VAR_4) >> 4);
 }



 VAR_11 = FUNC_1((struct acpi_namespace_node *)VAR_9[0],
           VAR_10, VAR_0);



 FUNC_3(VAR_10);

      exit:


 FUNC_3(VAR_9[1]);
 FUNC_4(VAR_11);
}
