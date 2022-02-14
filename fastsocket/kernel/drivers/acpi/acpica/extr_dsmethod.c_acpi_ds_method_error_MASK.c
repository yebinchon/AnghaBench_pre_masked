
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct acpi_walk_state {int op; int aml_offset; int opcode; TYPE_2__* method_node; } ;
typedef int acpi_status ;
struct TYPE_3__ {int integer; } ;
struct TYPE_4__ {TYPE_1__ name; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int,struct acpi_walk_state*,int ) ;
 int FUNC_4 (struct acpi_walk_state*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int,int ,int ,int ,int *) ;

acpi_status
FUNC_8(acpi_status VAR_1, struct acpi_walk_state *VAR_2)
{
 FUNC_1();



 if (FUNC_2(VAR_1) || (VAR_1 & VAR_0)) {
  return (VAR_1);
 }



 if (&FUNC_7) {



  FUNC_6();





  VAR_1 = FUNC_7(VAR_1,
          VAR_2->method_node ?
          VAR_2->method_node->
          name.integer : 0,
          VAR_2->opcode,
          VAR_2->aml_offset,
          ((void*)0));
  FUNC_5();
 }

 FUNC_4(VAR_2);
 return (VAR_1);
}
