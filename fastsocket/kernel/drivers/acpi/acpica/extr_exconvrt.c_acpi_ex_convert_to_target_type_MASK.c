
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
union acpi_operand_object {TYPE_1__ common; } ;
struct acpi_walk_state {int opcode; TYPE_2__* op_info; } ;
typedef scalar_t__ acpi_status ;
typedef int acpi_object_type ;
struct TYPE_4__ {int runtime_args; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;







 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;





 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (union acpi_operand_object*,union acpi_operand_object**) ;
 scalar_t__ FUNC_5 (union acpi_operand_object*,union acpi_operand_object**,int) ;
 scalar_t__ FUNC_6 (union acpi_operand_object*,union acpi_operand_object**,int ) ;
 int FUNC_7 (union acpi_operand_object*) ;
 int FUNC_8 (int ) ;
 int VAR_6 ;
 int FUNC_9 (scalar_t__) ;

acpi_status
FUNC_10(acpi_object_type VAR_7,
          union acpi_operand_object *VAR_8,
          union acpi_operand_object **VAR_9,
          struct acpi_walk_state *VAR_10)
{
 acpi_status VAR_11 = VAR_4;

 FUNC_2(VAR_6);



 *VAR_9 = VAR_8;





 switch (FUNC_3(VAR_10->op_info->runtime_args)) {
 case 129:
 case 132:
 case 131:

  switch (VAR_7) {
  case 134:



   break;

  default:


   if (VAR_7 != VAR_8->common.type) {
    FUNC_0((VAR_0,
        "Explicit operator, will store (%s) over existing type (%s)\n",
        FUNC_7
        (VAR_8),
        FUNC_8
        (VAR_7)));
    VAR_11 = VAR_5;
   }
  }
  break;

 case 128:

  switch (VAR_7) {
  case 137:
  case 138:
  case 136:
  case 135:




   VAR_11 =
       FUNC_5(VAR_8, VAR_9,
             16);
   break;

  case 133:




   VAR_11 =
       FUNC_6(VAR_8, VAR_9,
            VAR_1);
   break;

  case 139:




   VAR_11 =
       FUNC_4(VAR_8, VAR_9);
   break;

  default:
   FUNC_1((VAR_3,
        "Bad destination type during conversion: %X",
        VAR_7));
   VAR_11 = VAR_2;
   break;
  }
  break;

 case 130:



  break;

 default:
  FUNC_1((VAR_3,
       "Unknown Target type ID 0x%X AmlOpcode %X DestType %s",
       FUNC_3(VAR_10->op_info->
       runtime_args),
       VAR_10->opcode,
       FUNC_8(VAR_7)));
  VAR_11 = VAR_2;
 }







 if (VAR_11 == VAR_5) {
  VAR_11 = VAR_4;
 }

 FUNC_9(VAR_11);
}
