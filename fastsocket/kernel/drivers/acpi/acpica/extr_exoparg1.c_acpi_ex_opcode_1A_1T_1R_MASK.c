
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_operand_object {TYPE_1__ integer; } ;
typedef int u32 ;
struct acpi_walk_state {int opcode; union acpi_operand_object* result_obj; union acpi_operand_object** operands; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_integer ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (union acpi_operand_object*,union acpi_operand_object**) ;
 int FUNC_7 (union acpi_operand_object*,union acpi_operand_object**,int ) ;
 int FUNC_8 (union acpi_operand_object*,union acpi_operand_object**,int ) ;
 int FUNC_9 (union acpi_operand_object*,union acpi_operand_object**,struct acpi_walk_state*) ;
 int FUNC_10 (union acpi_operand_object*,union acpi_operand_object*,struct acpi_walk_state*) ;
 int VAR_12 ;
 struct acpi_namespace_node* VAR_13 ;
 int FUNC_11 (int) ;
 int FUNC_12 (union acpi_operand_object*) ;
 int FUNC_13 (union acpi_operand_object*,union acpi_operand_object**,struct acpi_walk_state*) ;
 union acpi_operand_object* FUNC_14 (int ) ;
 int FUNC_15 (union acpi_operand_object*) ;
 int FUNC_16 (int,int,int*,int*) ;
 int VAR_14 ;
 int FUNC_17 (int ) ;

acpi_status FUNC_18(struct acpi_walk_state *VAR_15)
{
 acpi_status VAR_16 = VAR_10;
 union acpi_operand_object **VAR_17 = &VAR_15->operands[0];
 union acpi_operand_object *VAR_18 = ((void*)0);
 union acpi_operand_object *VAR_19 = ((void*)0);
 u32 VAR_20;
 u32 VAR_21;
 acpi_integer VAR_22;
 acpi_integer VAR_23;

 FUNC_3(VAR_14,
    FUNC_11(VAR_15->opcode));



 switch (VAR_15->opcode) {
 case 141:
 case 138:
 case 137:
 case 136:
 case 132:
 case 140:



  VAR_18 = FUNC_14(VAR_5);
  if (!VAR_18) {
   VAR_16 = VAR_9;
   goto cleanup;
  }

  switch (VAR_15->opcode) {
  case 141:

   VAR_18->integer.value = ~VAR_17[0]->integer.value;
   break;

  case 138:

   VAR_18->integer.value = VAR_17[0]->integer.value;





   for (VAR_20 = 0; VAR_18->integer.value &&
        VAR_20 < VAR_3; ++VAR_20) {
    VAR_18->integer.value >>= 1;
   }

   VAR_18->integer.value = VAR_20;
   break;

  case 137:

   VAR_18->integer.value = VAR_17[0]->integer.value;





   for (VAR_20 = 0; VAR_18->integer.value &&
        VAR_20 < VAR_3; ++VAR_20) {
    VAR_18->integer.value <<= 1;
   }



   VAR_18->integer.value =
       VAR_20 ==
       0 ? 0 : (VAR_3 + 1) - VAR_20;
   break;

  case 136:






   VAR_22 = 1;
   VAR_18->integer.value = 0;
   VAR_23 = VAR_17[0]->integer.value;



   for (VAR_21 = 0;
        (VAR_21 < VAR_12) && (VAR_23 > 0);
        VAR_21++) {



    VAR_20 = ((u32) VAR_23) & 0xF;



    if (VAR_20 > 9) {
     FUNC_0((VAR_8,
          "BCD digit too large (not decimal): 0x%X",
          VAR_20));

     VAR_16 = VAR_7;
     goto cleanup;
    }



    VAR_18->integer.value +=
        (((acpi_integer) VAR_20) * VAR_22);



    VAR_23 >>= 4;



    VAR_22 *= 10;
   }
   break;

  case 132:

   VAR_18->integer.value = 0;
   VAR_23 = VAR_17[0]->integer.value;



   for (VAR_21 = 0;
        (VAR_21 < VAR_12) && (VAR_23 > 0);
        VAR_21++) {
    (void)FUNC_16(VAR_23, 10, &VAR_23,
          &VAR_20);





    VAR_18->integer.value |=
        (((acpi_integer) VAR_20) << FUNC_4(VAR_21));
   }



   if (VAR_23 > 0) {
    FUNC_0((VAR_8,
         "Integer too large to convert to BCD: %8.8X%8.8X",
         FUNC_2(VAR_17[0]->
              integer.value)));
    VAR_16 = VAR_7;
    goto cleanup;
   }
   break;

  case 140:






   if ((struct acpi_namespace_node *)VAR_17[0] ==
       VAR_13) {




    VAR_18->integer.value = 0;
    goto cleanup;
   }



   VAR_16 = FUNC_9(VAR_17[0],
             &VAR_19,
             VAR_15);
   if (FUNC_1(VAR_16)) {
    goto cleanup;
   }

   VAR_16 =
       FUNC_10(VAR_19, VAR_17[1], VAR_15);
   FUNC_15(VAR_19);



   VAR_18->integer.value = VAR_4;
   goto cleanup;

  default:

   break;
  }
  break;

 case 133:






  VAR_16 = FUNC_10(VAR_17[0], VAR_17[1], VAR_15);
  if (FUNC_1(VAR_16)) {
   FUNC_17(VAR_16);
  }



  if (!VAR_15->result_obj) {






   VAR_15->result_obj = VAR_17[0];
   VAR_15->operands[0] = ((void*)0);
  }
  FUNC_17(VAR_16);




 case 139:

  VAR_16 =
      FUNC_13(VAR_17[0], &VAR_18,
          VAR_15);
  break;

 case 130:

  VAR_16 = FUNC_8(VAR_17[0], &VAR_18,
         VAR_1);
  if (VAR_18 == VAR_17[0]) {


   FUNC_12(VAR_18);
  }
  break;

 case 129:

  VAR_16 = FUNC_8(VAR_17[0], &VAR_18,
         VAR_2);
  if (VAR_18 == VAR_17[0]) {


   FUNC_12(VAR_18);
  }
  break;

 case 131:

  VAR_16 = FUNC_6(VAR_17[0], &VAR_18);
  if (VAR_18 == VAR_17[0]) {


   FUNC_12(VAR_18);
  }
  break;

 case 128:

  VAR_16 = FUNC_7(VAR_17[0], &VAR_18,
          VAR_0);
  if (VAR_18 == VAR_17[0]) {


   FUNC_12(VAR_18);
  }
  break;

 case 135:
 case 134:



  FUNC_0((VAR_8,
       "%s is obsolete and not implemented",
       FUNC_11(VAR_15->opcode)));
  VAR_16 = VAR_11;
  goto cleanup;

 default:

  FUNC_0((VAR_8, "Unknown AML opcode %X",
       VAR_15->opcode));
  VAR_16 = VAR_6;
  goto cleanup;
 }

 if (FUNC_5(VAR_16)) {



  VAR_16 = FUNC_10(VAR_18, VAR_17[1], VAR_15);
 }

      cleanup:



 if (FUNC_1(VAR_16)) {
  FUNC_15(VAR_18);
 }



 else if (!VAR_15->result_obj) {
  VAR_15->result_obj = VAR_18;
 }

 FUNC_17(VAR_16);
}
