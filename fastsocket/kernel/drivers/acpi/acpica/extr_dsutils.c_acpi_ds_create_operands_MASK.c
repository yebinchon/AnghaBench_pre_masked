
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {union acpi_parse_object* next; } ;
union acpi_parse_object {TYPE_1__ common; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct acpi_walk_state {int num_operands; scalar_t__ operand_index; int ** operands; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,union acpi_parse_object*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct acpi_walk_state*,union acpi_parse_object*,int) ;
 int FUNC_5 (int,struct acpi_walk_state*) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;

acpi_status
FUNC_7(struct acpi_walk_state *VAR_6,
   union acpi_parse_object *VAR_7)
{
 acpi_status VAR_8 = VAR_4;
 union acpi_parse_object *VAR_9;
 union acpi_parse_object *VAR_10[VAR_1];
 u32 VAR_11 = 0;
 u32 VAR_12 = VAR_6->num_operands;
 u32 VAR_13;

 FUNC_3(VAR_5, VAR_7);



 VAR_9 = VAR_7;
 while (VAR_9) {
  if (VAR_12 >= VAR_1) {
   FUNC_6(VAR_2);
  }

  VAR_10[VAR_12] = VAR_9;
  VAR_6->operands[VAR_12] = ((void*)0);



  VAR_9 = VAR_9->common.next;
  VAR_11++;
  VAR_12++;
 }

 VAR_12--;



 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  VAR_9 = VAR_10[VAR_12];



  VAR_6->operand_index = (u8) VAR_12;

  VAR_8 = FUNC_4(VAR_6, VAR_9, VAR_12);
  if (FUNC_2(VAR_8)) {
   goto cleanup;
  }

  VAR_12--;

  FUNC_0((VAR_0,
      "Arg #%d (%p) done, Arg1=%p\n", VAR_12, VAR_9,
      VAR_7));
 }

 FUNC_6(VAR_8);

      cleanup:





 FUNC_5(VAR_11, VAR_6);

 FUNC_1((VAR_3, VAR_8, "While creating Arg %d", VAR_12));
 FUNC_6(VAR_8);
}
