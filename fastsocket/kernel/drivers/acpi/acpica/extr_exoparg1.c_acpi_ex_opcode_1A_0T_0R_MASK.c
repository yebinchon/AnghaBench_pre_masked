
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_operand_object {TYPE_1__ integer; } ;
typedef int u32 ;
struct acpi_walk_state {int opcode; union acpi_operand_object** operands; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int FUNC_2 (union acpi_operand_object*,struct acpi_walk_state*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int FUNC_6 (union acpi_operand_object*) ;
 int FUNC_7 (union acpi_operand_object*) ;
 int FUNC_8 (int) ;
 int VAR_3 ;
 int FUNC_9 (int ) ;

acpi_status FUNC_10(struct acpi_walk_state *VAR_4)
{
 union acpi_operand_object **VAR_5 = &VAR_4->operands[0];
 acpi_status VAR_6 = VAR_2;

 FUNC_1(VAR_3,
    FUNC_8(VAR_4->opcode));



 switch (VAR_4->opcode) {
 case 133:

  VAR_6 = FUNC_2(VAR_5[0], VAR_4);
  break;

 case 132:

  VAR_6 = FUNC_5(VAR_5[0]);
  break;

 case 131:

  VAR_6 = FUNC_6(VAR_5[0]);
  break;

 case 130:

  VAR_6 = FUNC_4(VAR_5[0]->integer.value);
  break;

 case 129:

  VAR_6 =
      FUNC_3((u32) VAR_5[0]->integer.value);
  break;

 case 128:

  VAR_6 = FUNC_7(VAR_5[0]);
  break;

 default:

  FUNC_0((VAR_1, "Unknown AML opcode %X",
       VAR_4->opcode));
  VAR_6 = VAR_0;
  break;
 }

 FUNC_9(VAR_6);
}
