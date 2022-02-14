
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* pointer; scalar_t__ length; } ;
union acpi_operand_object {TYPE_1__ string; } ;
typedef scalar_t__ u32 ;
typedef scalar_t__ acpi_size ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 union acpi_operand_object* FUNC_3 (int ) ;
 int FUNC_4 (union acpi_operand_object*) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int VAR_2 ;

union acpi_operand_object *FUNC_6(acpi_size VAR_3)
{
 union acpi_operand_object *VAR_4;
 char *VAR_5;

 FUNC_2(VAR_2, VAR_3);



 VAR_4 = FUNC_3(VAR_0);
 if (!VAR_4) {
  FUNC_5(((void*)0));
 }





 VAR_5 = FUNC_0(VAR_3 + 1);
 if (!VAR_5) {
  FUNC_1((VAR_1, "Could not allocate size %X",
       (u32) VAR_3));
  FUNC_4(VAR_4);
  FUNC_5(((void*)0));
 }



 VAR_4->string.pointer = VAR_5;
 VAR_4->string.length = (u32) VAR_3;



 FUNC_5(VAR_4);
}
