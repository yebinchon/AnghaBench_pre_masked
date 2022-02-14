
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int flags; TYPE_2__* parent; } ;
union acpi_parse_object {TYPE_4__ common; } ;
struct TYPE_7__ {scalar_t__ type; } ;
union acpi_operand_object {TYPE_3__ common; } ;
typedef scalar_t__ u8 ;
struct acpi_walk_state {union acpi_operand_object* result_obj; union acpi_operand_object** operands; union acpi_parse_object* op; } ;
typedef int acpi_status ;
struct TYPE_5__ {scalar_t__ aml_opcode; } ;
struct TYPE_6__ {TYPE_1__ common; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct acpi_walk_state*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct acpi_walk_state*,union acpi_parse_object*,int ) ;
 int FUNC_4 (int,struct acpi_walk_state*) ;
 int FUNC_5 (union acpi_operand_object*,struct acpi_walk_state*) ;
 int FUNC_6 (union acpi_operand_object**,struct acpi_walk_state*) ;
 int FUNC_7 (union acpi_operand_object*,union acpi_operand_object**,struct acpi_walk_state*) ;
 int FUNC_8 (union acpi_operand_object*) ;
 int VAR_7 ;
 int FUNC_9 (int ) ;

acpi_status FUNC_10(struct acpi_walk_state *VAR_8)
{
 acpi_status VAR_9 = VAR_3;
 union acpi_parse_object *VAR_10 = VAR_8->op;
 union acpi_operand_object **VAR_11 = &VAR_8->operands[0];
 union acpi_operand_object *VAR_12;
 u8 VAR_13;

 FUNC_1(VAR_7, VAR_8);

 if (!VAR_10->common.parent) {



  goto exit;
 }

 if ((VAR_10->common.parent->common.aml_opcode == VAR_4) ||
     (VAR_10->common.parent->common.aml_opcode == VAR_6) ||
     (VAR_10->common.parent->common.aml_opcode == VAR_5)) {



  goto exit;
 }

 VAR_9 = FUNC_3(VAR_8, VAR_10, 0);
 if (FUNC_0(VAR_9)) {
  goto exit;
 }

 if (VAR_10->common.flags & VAR_1) {
  VAR_12 = *VAR_11;
  goto push_result;
 }

 VAR_13 = (*VAR_11)->common.type;

 VAR_9 = FUNC_6(VAR_11, VAR_8);
 if (FUNC_0(VAR_9)) {
  goto exit;
 }

 if (VAR_13 == VAR_2) {



  FUNC_8(*VAR_11);

  VAR_9 =
      FUNC_7(*VAR_11, &VAR_12,
          VAR_8);
  if (FUNC_0(VAR_9)) {
   goto exit;
  }
 } else {




  VAR_12 = *VAR_11;
 }



 VAR_9 = FUNC_4(1, VAR_8);
 if (FUNC_0(VAR_9)) {
  VAR_8->result_obj = VAR_12;
  goto exit;
 }

      push_result:

 VAR_8->result_obj = VAR_12;

 VAR_9 = FUNC_5(VAR_8->result_obj, VAR_8);
 if (FUNC_2(VAR_9)) {



  VAR_10->common.flags |= VAR_0;
 }

      exit:

 FUNC_9(VAR_9);
}
