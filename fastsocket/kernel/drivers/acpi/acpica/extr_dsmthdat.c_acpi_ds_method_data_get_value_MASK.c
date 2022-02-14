
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; } ;
union acpi_operand_object {TYPE_1__ integer; } ;
typedef int u8 ;
typedef int u32 ;
struct acpi_walk_state {int dummy; } ;
struct acpi_namespace_node {union acpi_operand_object* object; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int,int ,struct acpi_walk_state*,struct acpi_namespace_node**) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (union acpi_operand_object*) ;
 union acpi_operand_object* FUNC_5 (int ) ;
 int VAR_9 ;
 int FUNC_6 (int ) ;

acpi_status
FUNC_7(u8 VAR_10,
         u32 VAR_11,
         struct acpi_walk_state *VAR_12,
         union acpi_operand_object **VAR_13)
{
 acpi_status VAR_14;
 struct acpi_namespace_node *VAR_15;
 union acpi_operand_object *VAR_16;

 FUNC_2(VAR_9);



 if (!VAR_13) {
  FUNC_0((VAR_5, "Null object descriptor pointer"));
  FUNC_6(VAR_4);
 }



 VAR_14 = FUNC_3(VAR_10, VAR_11, VAR_12, &VAR_15);
 if (FUNC_1(VAR_14)) {
  FUNC_6(VAR_14);
 }



 VAR_16 = VAR_15->object;



 if (!VAR_16) {
  if (VAR_8) {
   VAR_16 =
       FUNC_5(VAR_0);
   if (!VAR_16) {
    FUNC_6(VAR_6);
   }

   VAR_16->integer.value = 0;
   VAR_15->object = VAR_16;
  }



  else
   switch (VAR_10) {
   case 129:

    FUNC_0((VAR_5,
         "Uninitialized Arg[%d] at node %p",
         VAR_11, VAR_15));

    FUNC_6(VAR_2);

   case 128:





    FUNC_6(VAR_3);

   default:

    FUNC_0((VAR_5,
         "Not a Arg/Local opcode: %X",
         VAR_10));
    FUNC_6(VAR_1);
   }
 }





 *VAR_13 = VAR_16;
 FUNC_4(VAR_16);

 FUNC_6(VAR_7);
}
