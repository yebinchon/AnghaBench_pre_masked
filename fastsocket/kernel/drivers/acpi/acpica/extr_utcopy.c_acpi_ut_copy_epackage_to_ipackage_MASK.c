
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t count; int flags; union acpi_operand_object** elements; } ;
union acpi_operand_object {TYPE_2__ package; } ;
struct TYPE_3__ {size_t count; int * elements; } ;
union acpi_object {TYPE_1__ package; } ;
typedef size_t u32 ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,union acpi_operand_object**) ;
 union acpi_operand_object* FUNC_3 (size_t) ;
 int FUNC_4 (union acpi_operand_object*) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;

__attribute__((used)) static acpi_status
FUNC_6(union acpi_object *VAR_4,
      union acpi_operand_object **VAR_5)
{
 acpi_status VAR_6 = VAR_1;
 union acpi_operand_object *VAR_7;
 union acpi_operand_object **VAR_8;
 u32 VAR_9;

 FUNC_1(VAR_3);



 VAR_7 =
     FUNC_3(VAR_4->package.count);
 if (!VAR_7) {
  FUNC_5(VAR_0);
 }

 VAR_8 = VAR_7->package.elements;





 for (VAR_9 = 0; VAR_9 < VAR_4->package.count; VAR_9++) {
  VAR_6 =
      FUNC_2(&VAR_4->package.
          elements[VAR_9],
          &VAR_8[VAR_9]);
  if (FUNC_0(VAR_6)) {



   VAR_7->package.count = VAR_9;
   VAR_8[VAR_9] = ((void*)0);
   FUNC_4(VAR_7);
   FUNC_5(VAR_6);
  }
 }



 VAR_7->package.flags |= VAR_2;

 *VAR_5 = VAR_7;
 FUNC_5(VAR_6);
}
