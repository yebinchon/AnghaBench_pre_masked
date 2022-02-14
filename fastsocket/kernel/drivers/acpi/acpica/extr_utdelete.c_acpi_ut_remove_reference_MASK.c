
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reference_count; } ;
union acpi_operand_object {TYPE_1__ common; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,union acpi_operand_object*) ;
 scalar_t__ FUNC_2 (union acpi_operand_object*) ;
 int VAR_2 ;
 int FUNC_3 (union acpi_operand_object*,int ) ;
 int FUNC_4 (union acpi_operand_object*) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_5(union acpi_operand_object *VAR_5)
{

 FUNC_1(VAR_4, VAR_5);






 if (!VAR_5 ||
     (FUNC_2(VAR_5) == VAR_1)) {
  VAR_3;
 }



 if (!FUNC_4(VAR_5)) {
  VAR_3;
 }

 FUNC_0((VAR_0,
     "Obj %p Current Refs=%X [To Be Decremented]\n",
     VAR_5, VAR_5->common.reference_count));






 (void)FUNC_3(VAR_5, VAR_2);
 VAR_3;
}
