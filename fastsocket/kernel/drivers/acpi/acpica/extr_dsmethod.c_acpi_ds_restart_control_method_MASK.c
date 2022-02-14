
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
struct acpi_walk_state {union acpi_operand_object* return_desc; scalar_t__ return_used; union acpi_operand_object* implicit_return_obj; int results; int method_call_op; int method_node; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct acpi_walk_state*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (union acpi_operand_object*,struct acpi_walk_state*,int ) ;
 int FUNC_4 (union acpi_operand_object*,struct acpi_walk_state*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (union acpi_operand_object*) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;

acpi_status
FUNC_8(struct acpi_walk_state *VAR_4,
          union acpi_operand_object *VAR_5)
{
 acpi_status VAR_6;
 int VAR_7;

 FUNC_2(VAR_3, VAR_4);

 FUNC_0((VAR_0,
     "****Restart [%4.4s] Op %p ReturnValueFromCallee %p\n",
     FUNC_5(VAR_4->method_node),
     VAR_4->method_call_op, VAR_5));

 FUNC_0((VAR_0,
     "    ReturnFromThisMethodUsed?=%X ResStack %p Walk %p\n",
     VAR_4->return_used,
     VAR_4->results, VAR_4));



 if (VAR_5) {



  VAR_7 =
      (VAR_4->implicit_return_obj == VAR_5);



  if (VAR_4->return_used) {



   VAR_6 = FUNC_4(VAR_5, VAR_4);
   if (FUNC_1(VAR_6)) {
    FUNC_6(VAR_5);
    FUNC_7(VAR_6);
   }





   VAR_4->return_desc = VAR_5;
  }
  else if (!FUNC_3
    (VAR_5, VAR_4, VAR_2)
    || VAR_7) {





   FUNC_6(VAR_5);
  }
 }

 FUNC_7(VAR_1);
}
