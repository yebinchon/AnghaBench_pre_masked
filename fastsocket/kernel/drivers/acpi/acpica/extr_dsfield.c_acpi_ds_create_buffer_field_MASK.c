
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int length; int data; } ;
struct TYPE_7__ {int string; } ;
struct TYPE_8__ {scalar_t__ aml_opcode; struct acpi_namespace_node* node; TYPE_1__ value; } ;
union acpi_parse_object {TYPE_5__ named; TYPE_2__ common; } ;
struct TYPE_12__ {struct acpi_namespace_node* node; } ;
struct TYPE_10__ {int aml_length; int aml_start; } ;
struct TYPE_9__ {union acpi_operand_object* next_object; } ;
union acpi_operand_object {TYPE_6__ buffer_field; TYPE_4__ extra; TYPE_3__ common; } ;
typedef int u32 ;
struct acpi_walk_state {int parse_flags; int scope_info; scalar_t__ method_node; struct acpi_namespace_node* deferred_node; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (struct acpi_namespace_node*,union acpi_operand_object*,int ) ;
 union acpi_operand_object* FUNC_4 (struct acpi_namespace_node*) ;
 int FUNC_5 (int ,int ,int ,int ,int,struct acpi_walk_state*,struct acpi_namespace_node**) ;
 union acpi_parse_object* FUNC_6 (union acpi_parse_object*,int) ;
 union acpi_operand_object* FUNC_7 (int ) ;
 int FUNC_8 (union acpi_operand_object*) ;
 int VAR_14 ;
 int FUNC_9 (int ) ;

acpi_status
FUNC_10(union acpi_parse_object *VAR_15,
       struct acpi_walk_state *VAR_16)
{
 union acpi_parse_object *VAR_17;
 struct acpi_namespace_node *VAR_18;
 acpi_status VAR_19;
 union acpi_operand_object *VAR_20;
 union acpi_operand_object *VAR_21 = ((void*)0);
 u32 VAR_22;

 FUNC_2(VAR_14);




 if (VAR_15->common.aml_opcode == VAR_13) {



  VAR_17 = FUNC_6(VAR_15, 3);
 } else {


  VAR_17 = FUNC_6(VAR_15, 2);
 }

 if (!VAR_17) {
  FUNC_9(VAR_10);
 }

 if (VAR_16->deferred_node) {
  VAR_18 = VAR_16->deferred_node;
  VAR_19 = VAR_12;
 } else {


  if (!(VAR_16->parse_flags & VAR_5)) {
   FUNC_9(VAR_9);
  }



  VAR_22 = VAR_3 | VAR_1 |
      VAR_2;





  if (VAR_16->method_node &&
      !(VAR_16->parse_flags & VAR_6)) {
   VAR_22 |= VAR_4;
  }



  VAR_19 =
      FUNC_5(VAR_16->scope_info,
       VAR_17->common.value.string, VAR_7,
       VAR_0, VAR_22, VAR_16,
       &VAR_18);
  if (FUNC_1(VAR_19)) {
   FUNC_0(VAR_17->common.value.string, VAR_19);
   FUNC_9(VAR_19);
  }
 }






 VAR_15->common.node = VAR_18;






 VAR_20 = FUNC_4(VAR_18);
 if (VAR_20) {
  FUNC_9(VAR_12);
 }
 VAR_20 = FUNC_7(VAR_8);
 if (!VAR_20) {
  VAR_19 = VAR_11;
  goto cleanup;
 }





 VAR_21 = VAR_20->common.next_object;
 VAR_21->extra.aml_start = VAR_15->named.data;
 VAR_21->extra.aml_length = VAR_15->named.length;
 VAR_20->buffer_field.node = VAR_18;



 VAR_19 = FUNC_3(VAR_18, VAR_20, VAR_8);
 if (FUNC_1(VAR_19)) {
  goto cleanup;
 }

      cleanup:



 FUNC_8(VAR_20);
 FUNC_9(VAR_19);
}
