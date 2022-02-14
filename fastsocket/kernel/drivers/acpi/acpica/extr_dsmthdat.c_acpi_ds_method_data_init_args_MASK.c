
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
typedef size_t u32 ;
struct acpi_walk_state {int dummy; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,union acpi_operand_object**) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,size_t,union acpi_operand_object*,struct acpi_walk_state*) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;

acpi_status
FUNC_5(union acpi_operand_object **VAR_5,
         u32 VAR_6,
         struct acpi_walk_state *VAR_7)
{
 acpi_status VAR_8;
 u32 VAR_9 = 0;

 FUNC_2(VAR_4, VAR_5);

 if (!VAR_5) {
  FUNC_0((VAR_0,
      "No param list passed to method\n"));
  FUNC_4(VAR_3);
 }



 while ((VAR_9 < VAR_1) &&
        (VAR_9 < VAR_6) && VAR_5[VAR_9]) {





  VAR_8 = FUNC_3(VAR_2, VAR_9,
             VAR_5[VAR_9],
             VAR_7);
  if (FUNC_1(VAR_8)) {
   FUNC_4(VAR_8);
  }

  VAR_9++;
 }

 FUNC_0((VAR_0, "%d args passed to method\n", VAR_9));
 FUNC_4(VAR_3);
}
