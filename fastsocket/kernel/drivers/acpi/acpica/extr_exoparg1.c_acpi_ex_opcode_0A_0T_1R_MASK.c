
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_operand_object {TYPE_1__ integer; } ;
struct acpi_walk_state {int opcode; union acpi_operand_object* result_obj; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_3 () ;
 int FUNC_4 (int) ;
 union acpi_operand_object* FUNC_5 (int ) ;
 int FUNC_6 (union acpi_operand_object*) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;

acpi_status FUNC_8(struct acpi_walk_state *VAR_6)
{
 acpi_status VAR_7 = VAR_4;
 union acpi_operand_object *VAR_8 = ((void*)0);

 FUNC_2(VAR_5,
    FUNC_4(VAR_6->opcode));



 switch (VAR_6->opcode) {
 case 128:



  VAR_8 = FUNC_5(VAR_0);
  if (!VAR_8) {
   VAR_7 = VAR_3;
   goto cleanup;
  }
  VAR_8->integer.value = FUNC_3();
  break;

 default:

  FUNC_0((VAR_2, "Unknown AML opcode %X",
       VAR_6->opcode));
  VAR_7 = VAR_1;
  break;
 }

      cleanup:



 if ((FUNC_1(VAR_7)) || VAR_6->result_obj) {
  FUNC_6(VAR_8);
  VAR_6->result_obj = ((void*)0);
 } else {


  VAR_6->result_obj = VAR_8;
 }

 FUNC_7(VAR_7);
}
