
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {char* name; } ;
struct TYPE_16__ {TYPE_7__ value; TYPE_6__* parent; struct acpi_namespace_node* node; } ;
union acpi_parse_object {TYPE_8__ common; } ;
struct TYPE_10__ {int param_count; } ;
union acpi_operand_object {TYPE_2__ method; } ;
typedef scalar_t__ u8 ;
struct TYPE_9__ {scalar_t__* aml; } ;
struct acpi_walk_state {scalar_t__ opcode; int arg_count; int parse_flags; TYPE_4__* op; TYPE_1__ parser_state; int scope_info; } ;
struct acpi_parse_state {scalar_t__* aml; } ;
struct acpi_namespace_node {scalar_t__ type; } ;
typedef scalar_t__ acpi_status ;
struct TYPE_13__ {scalar_t__ aml_opcode; } ;
struct TYPE_14__ {TYPE_5__ common; } ;
struct TYPE_11__ {scalar_t__ aml_opcode; } ;
struct TYPE_12__ {TYPE_3__ common; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_6 (scalar_t__,struct acpi_walk_state*) ;
 union acpi_operand_object* FUNC_7 (struct acpi_namespace_node*) ;
 scalar_t__ FUNC_8 (int ,char*,int ,int ,int,int *,struct acpi_namespace_node**) ;
 union acpi_parse_object* FUNC_9 (int ) ;
 int FUNC_10 (union acpi_parse_object*,union acpi_parse_object*) ;
 char* FUNC_11 (struct acpi_parse_state*) ;
 int FUNC_12 (union acpi_parse_object*,int ) ;
 int VAR_19 ;
 int FUNC_13 (scalar_t__) ;

acpi_status
FUNC_14(struct acpi_walk_state *VAR_20,
     struct acpi_parse_state *VAR_21,
     union acpi_parse_object *VAR_22, u8 VAR_23)
{
 acpi_status VAR_24;
 char *VAR_25;
 union acpi_parse_object *VAR_26;
 union acpi_operand_object *VAR_27;
 struct acpi_namespace_node *VAR_28;
 u8 *VAR_29 = VAR_21->aml;

 FUNC_4(VAR_19);

 VAR_25 = FUNC_11(VAR_21);
 FUNC_12(VAR_22, VAR_15);



 if (!VAR_25) {
  VAR_22->common.value.name = VAR_25;
  FUNC_13(VAR_12);
 }
 VAR_24 = FUNC_8(VAR_20->scope_info, VAR_25,
    VAR_6, VAR_1,
    VAR_3 | VAR_2,
    ((void*)0), &VAR_28);





 if (FUNC_5(VAR_24) &&
     VAR_23 && (VAR_28->type == VAR_7)) {
  if (VAR_20->opcode == VAR_17) {




   VAR_20->parser_state.aml = VAR_29;
   VAR_20->arg_count = 1;
   FUNC_12(VAR_22, VAR_14);
   FUNC_13(VAR_12);
  }



  VAR_27 = FUNC_7(VAR_28);
  FUNC_0((VAR_0,
      "Control Method - %p Desc %p Path=%p\n", VAR_28,
      VAR_27, VAR_25));

  VAR_26 = FUNC_9(VAR_15);
  if (!VAR_26) {
   FUNC_13(VAR_11);
  }



  FUNC_12(VAR_22, VAR_14);
  VAR_26->common.value.name = VAR_25;



  VAR_26->common.node = VAR_28;
  FUNC_10(VAR_22, VAR_26);

  if (!VAR_27) {
   FUNC_1((VAR_9,
        "Control Method %p has no attached object",
        VAR_28));
   FUNC_13(VAR_8);
  }

  FUNC_0((VAR_0,
      "Control Method - %p Args %X\n",
      VAR_28, VAR_27->method.param_count));



  VAR_20->arg_count = VAR_27->method.param_count;
  FUNC_13(VAR_12);
 }





 if (VAR_24 == VAR_10) {



  if ((VAR_20->parse_flags & VAR_5) !=
      VAR_4) {
   VAR_24 = VAR_12;
  }



  else if (VAR_20->op->common.aml_opcode ==
    VAR_13) {
   VAR_24 = VAR_12;
  }






  else if ((VAR_22->common.parent) &&
    ((VAR_22->common.parent->common.aml_opcode ==
      VAR_16)
     || (VAR_22->common.parent->common.aml_opcode ==
         VAR_18))) {
   VAR_24 = VAR_12;
  }
 }



 if (FUNC_3(VAR_24)) {
  FUNC_2(VAR_25, VAR_24);

  if ((VAR_20->parse_flags & VAR_5) ==
      VAR_4) {



   VAR_24 = FUNC_6(VAR_24, VAR_20);
  }
 }



 VAR_22->common.value.name = VAR_25;
 FUNC_13(VAR_24);
}
