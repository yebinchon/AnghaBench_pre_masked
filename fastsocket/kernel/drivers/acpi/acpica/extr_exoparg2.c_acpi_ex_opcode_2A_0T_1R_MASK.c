
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
union acpi_operand_object {TYPE_2__ integer; } ;
typedef scalar_t__ u8 ;
struct acpi_walk_state {int opcode; union acpi_operand_object* result_obj; TYPE_1__* op_info; union acpi_operand_object** operands; } ;
typedef int acpi_status ;
struct TYPE_3__ {int flags; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;

 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (union acpi_operand_object*,union acpi_operand_object*,struct acpi_walk_state*) ;
 int FUNC_4 (int,int ,int ,scalar_t__*) ;
 int FUNC_5 (int,union acpi_operand_object*,union acpi_operand_object*,scalar_t__*) ;
 int FUNC_6 (union acpi_operand_object*,union acpi_operand_object*) ;
 int FUNC_7 (int) ;
 union acpi_operand_object* FUNC_8 (int ) ;
 int FUNC_9 (union acpi_operand_object*) ;
 int VAR_11 ;
 int FUNC_10 (int ) ;

acpi_status FUNC_11(struct acpi_walk_state *VAR_12)
{
 union acpi_operand_object **VAR_13 = &VAR_12->operands[0];
 union acpi_operand_object *VAR_14 = ((void*)0);
 acpi_status VAR_15 = VAR_5;
 u8 VAR_16 = VAR_9;

 FUNC_2(VAR_11,
    FUNC_7(VAR_12->opcode));



 VAR_14 = FUNC_8(VAR_1);
 if (!VAR_14) {
  VAR_15 = VAR_4;
  goto cleanup;
 }



 if (VAR_12->op_info->flags & VAR_8) {



  VAR_15 = FUNC_4(VAR_12->opcode,
             VAR_13[0]->integer.
             value,
             VAR_13[1]->integer.
             value, &VAR_16);
  goto store_logical_result;
 } else if (VAR_12->op_info->flags & VAR_7) {



  VAR_15 = FUNC_5(VAR_12->opcode, VAR_13[0],
            VAR_13[1], &VAR_16);
  goto store_logical_result;
 }

 switch (VAR_12->opcode) {
 case 129:

  VAR_15 =
      FUNC_3(VAR_13[1], VAR_13[0], VAR_12);
  if (VAR_15 == VAR_6) {
   VAR_16 = VAR_10;
   VAR_15 = VAR_5;
  }
  break;

 case 128:

  VAR_15 = FUNC_6(VAR_13[1], VAR_13[0]);
  if (VAR_15 == VAR_6) {
   VAR_16 = VAR_10;
   VAR_15 = VAR_5;
  }
  break;

 default:

  FUNC_0((VAR_3, "Unknown AML opcode %X",
       VAR_12->opcode));
  VAR_15 = VAR_2;
  goto cleanup;
 }

      store_logical_result:




 if (VAR_16) {
  VAR_14->integer.value = VAR_0;
 }

      cleanup:



 if (FUNC_1(VAR_15)) {
  FUNC_9(VAR_14);
 }



 else {
  VAR_12->result_obj = VAR_14;
 }

 FUNC_10(VAR_15);
}
