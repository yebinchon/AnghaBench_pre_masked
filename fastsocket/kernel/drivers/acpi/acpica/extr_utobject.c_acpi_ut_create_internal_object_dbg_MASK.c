
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reference_count; scalar_t__ type; union acpi_operand_object* next_object; } ;
union acpi_operand_object {TYPE_1__ common; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int acpi_object_type ;


 int FUNC_0 (int ,int ) ;


 scalar_t__ VAR_0 ;

 union acpi_operand_object* FUNC_1 (char const*,int ,int ) ;
 int FUNC_2 (union acpi_operand_object*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (union acpi_operand_object*) ;
 int VAR_1 ;

union acpi_operand_object *FUNC_5(const char
             *VAR_2,
             u32 VAR_3,
             u32 VAR_4,
             acpi_object_type
             VAR_5)
{
 union acpi_operand_object *VAR_6;
 union acpi_operand_object *VAR_7;

 FUNC_0(VAR_1,
    FUNC_3(VAR_5));



 VAR_6 =
     FUNC_1(VAR_2, VAR_3,
          VAR_4);
 if (!VAR_6) {
  FUNC_4(((void*)0));
 }

 switch (VAR_5) {
 case 128:
 case 130:
 case 129:



  VAR_7 = FUNC_1(VAR_2,
         VAR_3,
         VAR_4);
  if (!VAR_7) {
   FUNC_2(VAR_6);
   FUNC_4(((void*)0));
  }

  VAR_7->common.type = VAR_0;
  VAR_7->common.reference_count = 1;



  VAR_6->common.next_object = VAR_7;
  break;

 default:

  break;
 }



 VAR_6->common.type = (u8) VAR_5;



 VAR_6->common.reference_count = 1;



 FUNC_4(VAR_6);
}
