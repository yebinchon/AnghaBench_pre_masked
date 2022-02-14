
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {union acpi_operand_object** elements; scalar_t__ count; } ;
union acpi_operand_object {TYPE_1__ package; } ;
typedef scalar_t__ u32 ;
typedef int acpi_size ;


 union acpi_operand_object** FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_0 ;
 union acpi_operand_object* FUNC_2 (int ) ;
 int FUNC_3 (union acpi_operand_object*) ;
 int FUNC_4 (union acpi_operand_object*) ;
 int VAR_1 ;

union acpi_operand_object *FUNC_5(u32 VAR_2)
{
 union acpi_operand_object *VAR_3;
 union acpi_operand_object **VAR_4;

 FUNC_1(VAR_1, VAR_2);



 VAR_3 = FUNC_2(VAR_0);
 if (!VAR_3) {
  FUNC_4(((void*)0));
 }





 VAR_4 = FUNC_0(((acpi_size) VAR_2 +
       1) * sizeof(void *));
 if (!VAR_4) {
  FUNC_3(VAR_3);
  FUNC_4(((void*)0));
 }

 VAR_3->package.count = VAR_2;
 VAR_3->package.elements = VAR_4;
 FUNC_4(VAR_3);
}
