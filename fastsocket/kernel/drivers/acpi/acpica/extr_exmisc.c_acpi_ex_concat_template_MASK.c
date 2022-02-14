
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* pointer; } ;
union acpi_operand_object {TYPE_1__ buffer; } ;
typedef int u8 ;
struct aml_resource_end_tag {int dummy; } ;
struct acpi_walk_state {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_size ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 union acpi_operand_object* FUNC_4 (int) ;
 int FUNC_5 (union acpi_operand_object*,int**) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;

acpi_status
FUNC_7(union acpi_operand_object *VAR_4,
   union acpi_operand_object *VAR_5,
   union acpi_operand_object **VAR_6,
   struct acpi_walk_state *VAR_7)
{
 acpi_status VAR_8;
 union acpi_operand_object *VAR_9;
 u8 *VAR_10;
 u8 *VAR_11;
 acpi_size VAR_12;
 acpi_size VAR_13;
 acpi_size VAR_14;

 FUNC_1(VAR_3);
 VAR_8 = FUNC_5(VAR_4, &VAR_11);
 if (FUNC_0(VAR_8)) {
  FUNC_6(VAR_8);
 }

 VAR_12 = FUNC_3(VAR_11, VAR_4->buffer.pointer);



 VAR_8 = FUNC_5(VAR_5, &VAR_11);
 if (FUNC_0(VAR_8)) {
  FUNC_6(VAR_8);
 }

 VAR_13 = FUNC_3(VAR_11, VAR_5->buffer.pointer);



 VAR_14 = VAR_12 + VAR_13 + sizeof(struct aml_resource_end_tag);



 VAR_9 = FUNC_4(VAR_14);
 if (!VAR_9) {
  FUNC_6(VAR_1);
 }





 VAR_10 = VAR_9->buffer.pointer;
 FUNC_2(VAR_10, VAR_4->buffer.pointer, VAR_12);
 FUNC_2(VAR_10 + VAR_12, VAR_5->buffer.pointer, VAR_13);



 VAR_10[VAR_14 - 1] = 0;
 VAR_10[VAR_14 - 2] = VAR_0 | 1;



 *VAR_6 = VAR_9;
 FUNC_6(VAR_2);
}
