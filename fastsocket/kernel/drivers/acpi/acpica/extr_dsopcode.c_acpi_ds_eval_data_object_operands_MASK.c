
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int arg; } ;
struct TYPE_10__ {int aml_opcode; TYPE_4__* parent; TYPE_1__ value; } ;
union acpi_parse_object {TYPE_5__ common; } ;
struct TYPE_7__ {scalar_t__ value; } ;
union acpi_operand_object {TYPE_2__ integer; } ;
typedef scalar_t__ u32 ;
struct acpi_walk_state {int operand_index; int num_operands; union acpi_operand_object* result_obj; union acpi_operand_object** operands; int opcode; } ;
typedef int acpi_status ;
struct TYPE_8__ {int const aml_opcode; } ;
struct TYPE_9__ {TYPE_3__ common; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;

 scalar_t__ VAR_1 ;


 int FUNC_3 (struct acpi_walk_state*,union acpi_parse_object*,scalar_t__,union acpi_operand_object**) ;
 int FUNC_4 (struct acpi_walk_state*,union acpi_parse_object*,scalar_t__,union acpi_operand_object**) ;
 int FUNC_5 (struct acpi_walk_state*,int ,int) ;
 int FUNC_6 (int,struct acpi_walk_state*) ;
 int FUNC_7 (int ,union acpi_operand_object**,struct acpi_walk_state*) ;
 int FUNC_8 (union acpi_operand_object*) ;
 int VAR_2 ;
 int FUNC_9 (int ) ;

acpi_status
FUNC_10(struct acpi_walk_state *VAR_3,
      union acpi_parse_object *VAR_4,
      union acpi_operand_object *VAR_5)
{
 acpi_status VAR_6;
 union acpi_operand_object *VAR_7;
 u32 VAR_8;

 FUNC_1(VAR_2);







 VAR_3->operand_index = VAR_3->num_operands;

 VAR_6 = FUNC_5(VAR_3, VAR_4->common.value.arg, 1);
 if (FUNC_0(VAR_6)) {
  FUNC_9(VAR_6);
 }

 VAR_6 = FUNC_7(VAR_3->opcode,
       &(VAR_3->
         operands[VAR_3->num_operands -
           1]), VAR_3);
 if (FUNC_0(VAR_6)) {
  FUNC_9(VAR_6);
 }



 VAR_7 = VAR_3->operands[VAR_3->num_operands - 1];
 VAR_8 = (u32) VAR_7->integer.value;



 VAR_6 = FUNC_6(1, VAR_3);
 if (FUNC_0(VAR_6)) {
  FUNC_9(VAR_6);
 }

 FUNC_8(VAR_7);




 switch (VAR_4->common.aml_opcode) {
 case 130:

  VAR_6 =
      FUNC_3(VAR_3, VAR_4, VAR_8,
            &VAR_5);
  break;

 case 129:
 case 128:

  VAR_6 =
      FUNC_4(VAR_3, VAR_4, VAR_8,
             &VAR_5);
  break;

 default:
  FUNC_9(VAR_0);
 }

 if (FUNC_2(VAR_6)) {





  if ((!VAR_4->common.parent) ||
      ((VAR_4->common.parent->common.aml_opcode != 129) &&
       (VAR_4->common.parent->common.aml_opcode !=
        128)
       && (VAR_4->common.parent->common.aml_opcode != VAR_1))) {
   VAR_3->result_obj = VAR_5;
  }
 }

 FUNC_9(VAR_6);
}
