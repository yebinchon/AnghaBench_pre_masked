
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int target_type; union acpi_operand_object* object; int * where; int class; int value; } ;
struct TYPE_13__ {size_t count; int * elements; } ;
struct TYPE_12__ {size_t length; int * pointer; } ;
struct TYPE_11__ {size_t length; int pointer; } ;
struct TYPE_10__ {int type; } ;
struct TYPE_9__ {size_t value; } ;
union acpi_operand_object {TYPE_7__ reference; TYPE_6__ package; TYPE_5__ buffer; TYPE_4__ string; TYPE_3__ common; TYPE_2__ integer; } ;
typedef int u32 ;
struct acpi_walk_state {int opcode; union acpi_operand_object* result_obj; TYPE_1__* op_info; union acpi_operand_object** operands; } ;
typedef int acpi_status ;
typedef size_t acpi_size ;
typedef size_t acpi_integer ;
struct TYPE_8__ {int flags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *,size_t) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int ) ;

 void* VAR_1 ;
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


 int FUNC_7 (union acpi_operand_object*,union acpi_operand_object*,union acpi_operand_object**,struct acpi_walk_state*) ;
 int FUNC_8 (union acpi_operand_object*,union acpi_operand_object*,union acpi_operand_object**,struct acpi_walk_state*) ;
 size_t FUNC_9 (int,size_t,size_t) ;
 int FUNC_10 (union acpi_operand_object*,union acpi_operand_object*,struct acpi_walk_state*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (union acpi_operand_object*) ;
 union acpi_operand_object* FUNC_13 (int ) ;
 union acpi_operand_object* FUNC_14 (size_t) ;
 int FUNC_15 (size_t,size_t,int *,size_t*) ;
 int FUNC_16 (union acpi_operand_object*) ;
 int VAR_13 ;
 int FUNC_17 (int ) ;

acpi_status FUNC_18(struct acpi_walk_state *VAR_14)
{
 union acpi_operand_object **VAR_15 = &VAR_14->operands[0];
 union acpi_operand_object *VAR_16 = ((void*)0);
 acpi_integer VAR_17;
 acpi_status VAR_18 = VAR_11;
 acpi_size VAR_19;

 FUNC_4(VAR_13,
    FUNC_11(VAR_14->opcode));



 if (VAR_14->op_info->flags & VAR_12) {



  VAR_16 = FUNC_13(VAR_2);
  if (!VAR_16) {
   VAR_18 = VAR_10;
   goto cleanup;
  }

  VAR_16->integer.value =
      FUNC_9(VAR_14->opcode,
           VAR_15[0]->integer.value,
           VAR_15[1]->integer.value);
  goto store_result_to_target;
 }

 switch (VAR_14->opcode) {
 case 129:

  VAR_16 = FUNC_13(VAR_2);
  if (!VAR_16) {
   VAR_18 = VAR_10;
   goto cleanup;
  }



  VAR_18 = FUNC_15(VAR_15[0]->integer.value,
     VAR_15[1]->integer.value,
     ((void*)0), &VAR_16->integer.value);
  break;

 case 132:

  VAR_18 = FUNC_8(VAR_15[0], VAR_15[1],
      &VAR_16, VAR_14);
  break;

 case 128:
  VAR_19 = 0;
  while ((VAR_19 < VAR_15[0]->buffer.length) &&
         (VAR_19 < VAR_15[1]->integer.value) &&
         (VAR_15[0]->buffer.pointer[VAR_19])) {
   VAR_19++;
  }



  VAR_16 = FUNC_14(VAR_19);
  if (!VAR_16) {
   VAR_18 = VAR_10;
   goto cleanup;
  }





  FUNC_5(VAR_16->string.pointer,
       VAR_15[0]->buffer.pointer, VAR_19);
  break;

 case 131:



  VAR_18 = FUNC_7(VAR_15[0], VAR_15[1],
       &VAR_16, VAR_14);
  break;

 case 130:



  VAR_16 =
      FUNC_13(VAR_3);
  if (!VAR_16) {
   VAR_18 = VAR_10;
   goto cleanup;
  }



  VAR_17 = VAR_15[1]->integer.value;
  VAR_16->reference.value = (u32) VAR_17;
  VAR_16->reference.class = VAR_0;





  switch ((VAR_15[0])->common.type) {
  case 133:

   if (VAR_17 >= VAR_15[0]->string.length) {
    VAR_18 = VAR_8;
   }

   VAR_16->reference.target_type =
       VAR_1;
   break;

  case 135:

   if (VAR_17 >= VAR_15[0]->buffer.length) {
    VAR_18 = VAR_5;
   }

   VAR_16->reference.target_type =
       VAR_1;
   break;

  case 134:

   if (VAR_17 >= VAR_15[0]->package.count) {
    VAR_18 = VAR_7;
   }

   VAR_16->reference.target_type = 134;
   VAR_16->reference.where =
       &VAR_15[0]->package.elements[VAR_17];
   break;

  default:

   VAR_18 = VAR_6;
   goto cleanup;
  }



  if (FUNC_2(VAR_18)) {
   FUNC_1((VAR_9, VAR_18,
     "Index (%X%8.8X) is beyond end of object",
     FUNC_3(VAR_17)));
   goto cleanup;
  }





  VAR_16->reference.object = VAR_15[0];
  FUNC_12(VAR_15[0]);



  VAR_18 = FUNC_10(VAR_16, VAR_15[2], VAR_14);



  VAR_14->result_obj = VAR_16;
  goto cleanup;

 default:

  FUNC_0((VAR_9, "Unknown AML opcode %X",
       VAR_14->opcode));
  VAR_18 = VAR_4;
  break;
 }

      store_result_to_target:

 if (FUNC_6(VAR_18)) {




  VAR_18 = FUNC_10(VAR_16, VAR_15[2], VAR_14);
  if (FUNC_2(VAR_18)) {
   goto cleanup;
  }

  if (!VAR_14->result_obj) {
   VAR_14->result_obj = VAR_16;
  }
 }

      cleanup:



 if (FUNC_2(VAR_18)) {
  FUNC_16(VAR_16);
  VAR_14->result_obj = ((void*)0);
 }

 FUNC_17(VAR_18);
}
