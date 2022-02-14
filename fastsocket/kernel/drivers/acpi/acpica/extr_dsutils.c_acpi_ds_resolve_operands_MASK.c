
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct acpi_walk_state {size_t num_operands; int * operands; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct acpi_walk_state*) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct acpi_walk_state*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

acpi_status FUNC_4(struct acpi_walk_state *VAR_2)
{
 u32 VAR_3;
 acpi_status VAR_4 = VAR_0;

 FUNC_1(VAR_1, VAR_2);






 for (VAR_3 = 0; VAR_3 < VAR_2->num_operands; VAR_3++) {
  VAR_4 =
      FUNC_2(&VAR_2->operands[VAR_3],
          VAR_2);
  if (FUNC_0(VAR_4)) {
   break;
  }
 }

 FUNC_3(VAR_4);
}
