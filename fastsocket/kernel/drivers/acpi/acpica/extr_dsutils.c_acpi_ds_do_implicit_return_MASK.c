
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
typedef scalar_t__ u8 ;
struct acpi_walk_state {union acpi_operand_object* implicit_return_obj; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct acpi_walk_state*) ;
 int VAR_3 ;
 int FUNC_3 (union acpi_operand_object*) ;
 int VAR_4 ;

u8
FUNC_4(union acpi_operand_object *VAR_5,
      struct acpi_walk_state *VAR_6, u8 VAR_7)
{
 FUNC_1(VAR_4);





 if ((!VAR_3) || (!VAR_5)) {
  return (VAR_1);
 }

 FUNC_0((VAR_0,
     "Result %p will be implicitly returned; Prev=%p\n",
     VAR_5, VAR_6->implicit_return_obj));







 if (VAR_6->implicit_return_obj) {
  if (VAR_6->implicit_return_obj == VAR_5) {
   return (VAR_2);
  }
  FUNC_2(VAR_6);
 }



 VAR_6->implicit_return_obj = VAR_5;
 if (VAR_7) {
  FUNC_3(VAR_5);
 }

 return (VAR_2);
}
