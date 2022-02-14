
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ value; } ;
struct TYPE_5__ {scalar_t__ type; } ;
union acpi_operand_object {TYPE_2__ integer; TYPE_1__ common; } ;
struct acpi_walk_state {TYPE_4__* control_state; int op; union acpi_operand_object** operands; } ;
typedef int acpi_status ;
struct TYPE_7__ {scalar_t__ state; int value; } ;
struct TYPE_8__ {TYPE_3__ common; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,struct acpi_walk_state*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (union acpi_operand_object*,struct acpi_walk_state*) ;
 int FUNC_7 (struct acpi_walk_state*,int ,int ) ;
 int FUNC_8 (union acpi_operand_object*,struct acpi_walk_state*,int ) ;
 int FUNC_9 (union acpi_operand_object**,struct acpi_walk_state*) ;
 int FUNC_10 (union acpi_operand_object*,union acpi_operand_object**,int) ;
 int FUNC_11 (union acpi_operand_object**,struct acpi_walk_state*) ;
 int FUNC_12 (union acpi_operand_object*) ;
 int FUNC_13 (union acpi_operand_object*) ;
 int VAR_10 ;
 int FUNC_14 (int ) ;

acpi_status
FUNC_15(struct acpi_walk_state *VAR_11,
       union acpi_operand_object *VAR_12)
{
 acpi_status VAR_13 = VAR_7;
 union acpi_operand_object *VAR_14;
 union acpi_operand_object *VAR_15 = ((void*)0);

 FUNC_5(VAR_10, VAR_11);

 VAR_11->control_state->common.state = 0;

 if (VAR_12) {
  VAR_13 = FUNC_9(&VAR_14, VAR_11);
  if (FUNC_4(VAR_13)) {
   FUNC_3((VAR_6, VAR_13,
     "Could not get result from predicate evaluation"));

   FUNC_14(VAR_13);
  }
 } else {
  VAR_13 = FUNC_7(VAR_11, VAR_11->op, 0);
  if (FUNC_4(VAR_13)) {
   FUNC_14(VAR_13);
  }

  VAR_13 =
      FUNC_11(&VAR_11->operands[0],
          VAR_11);
  if (FUNC_4(VAR_13)) {
   FUNC_14(VAR_13);
  }

  VAR_14 = VAR_11->operands[0];
 }

 if (!VAR_14) {
  FUNC_2((VAR_6,
       "No predicate ObjDesc=%p State=%p",
       VAR_14, VAR_11));

  FUNC_14(VAR_3);
 }





 VAR_13 = FUNC_10(VAR_14, &VAR_15, 16);
 if (FUNC_4(VAR_13)) {
  goto cleanup;
 }

 if (VAR_15->common.type != VAR_2) {
  FUNC_2((VAR_6,
       "Bad predicate (not an integer) ObjDesc=%p State=%p Type=%X",
       VAR_14, VAR_11, VAR_14->common.type));

  VAR_13 = VAR_4;
  goto cleanup;
 }



 FUNC_12(VAR_15);





 if (VAR_15->integer.value) {
  VAR_11->control_state->common.value = VAR_9;
 } else {




  VAR_11->control_state->common.value = VAR_8;
  VAR_13 = VAR_5;
 }



 (void)FUNC_8(VAR_15, VAR_11, VAR_9);

      cleanup:

 FUNC_1((VAR_1, "Completed a predicate eval=%X Op=%p\n",
     VAR_11->control_state->common.value,
     VAR_11->op));



 FUNC_0(FUNC_6
      (VAR_15, VAR_11));





 if (VAR_15 != VAR_14) {
  FUNC_13(VAR_15);
 }
 FUNC_13(VAR_14);

 VAR_11->control_state->common.state = VAR_0;
 FUNC_14(VAR_13);
}
