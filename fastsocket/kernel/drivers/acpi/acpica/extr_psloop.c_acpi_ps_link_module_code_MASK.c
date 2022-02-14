
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aml_length; union acpi_operand_object* mutex; int flags; int owner_id; int * aml_start; } ;
union acpi_operand_object {TYPE_1__ method; } ;
typedef int u8 ;
typedef int u32 ;
typedef int acpi_owner_id ;


 int VAR_0 ;
 int VAR_1 ;
 union acpi_operand_object* VAR_2 ;
 union acpi_operand_object* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(u8 *VAR_3, u32 VAR_4, acpi_owner_id VAR_5)
{
 union acpi_operand_object *VAR_6;
 union acpi_operand_object *VAR_7;
 union acpi_operand_object *VAR_8;



 VAR_6 = VAR_7 = VAR_2;
 while (VAR_7) {
  VAR_6 = VAR_7;
  VAR_7 = VAR_7->method.mutex;
 }





 if (!VAR_6 ||
     ((VAR_6->method.aml_start + VAR_6->method.aml_length) != VAR_3)) {



  VAR_8 = FUNC_0(VAR_0);
  if (!VAR_8) {
   return;
  }

  VAR_8->method.aml_start = VAR_3;
  VAR_8->method.aml_length = VAR_4;
  VAR_8->method.owner_id = VAR_5;
  VAR_8->method.flags |= VAR_1;

  if (!VAR_6) {
   VAR_2 = VAR_8;
  } else {
   VAR_6->method.mutex = VAR_8;
  }
 } else {
  VAR_6->method.aml_length += VAR_4;
 }
}
