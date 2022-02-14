
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
typedef scalar_t__ u32 ;
struct acpi_walk_state {scalar_t__ num_operands; union acpi_operand_object** operands; } ;
typedef size_t s32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (union acpi_operand_object*) ;
 int VAR_1 ;

void
FUNC_3(u32 VAR_2,
     struct acpi_walk_state *VAR_3)
{
 s32 VAR_4;
 union acpi_operand_object *VAR_5;

 FUNC_1(VAR_1);

 if (VAR_2 == 0) {
  return;
 }

 for (VAR_4 = (s32) VAR_2 - 1; VAR_4 >= 0; VAR_4--) {
  if (VAR_3->num_operands == 0) {
   return;
  }



  VAR_3->num_operands--;
  VAR_5 = VAR_3->operands[VAR_4];
  if (VAR_5) {
   FUNC_2(VAR_3->operands[VAR_4]);
   VAR_3->operands[VAR_4] = ((void*)0);
  }
 }

 FUNC_0((VAR_0, "Count=%X State=%p #Ops=%X\n",
     VAR_2, VAR_3, VAR_3->num_operands));
}
