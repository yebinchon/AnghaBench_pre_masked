
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reference_count; } ;
union acpi_operand_object {TYPE_1__ common; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,union acpi_operand_object*) ;
 int VAR_1 ;
 int FUNC_2 (union acpi_operand_object*,int ) ;
 int FUNC_3 (union acpi_operand_object*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_4(union acpi_operand_object *VAR_4)
{

 FUNC_1(VAR_3, VAR_4);



 if (!FUNC_3(VAR_4)) {
  VAR_2;
 }

 FUNC_0((VAR_0,
     "Obj %p Current Refs=%X [To Be Incremented]\n",
     VAR_4, VAR_4->common.reference_count));



 (void)FUNC_2(VAR_4, VAR_1);
 VAR_2;
}
