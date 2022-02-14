
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int flags; } ;
struct TYPE_3__ {int value; } ;
union acpi_operand_object {TYPE_2__ common; TYPE_1__ reference; } ;
typedef int u32 ;
struct acpi_table_header {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (union acpi_operand_object*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,struct acpi_table_header*,int ) ;
 int VAR_8 ;
 int FUNC_5 (int ,struct acpi_table_header**) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_9 ;
 int FUNC_10 (int ) ;

acpi_status FUNC_11(union acpi_operand_object *VAR_10)
{
 acpi_status VAR_11 = VAR_5;
 union acpi_operand_object *VAR_12 = VAR_10;
 u32 VAR_13;
 struct acpi_table_header *VAR_14;

 FUNC_1(VAR_9);
 if ((!VAR_10) ||
     (FUNC_2(VAR_10) != VAR_0) ||
     (VAR_10->common.type != VAR_2) ||
     (!(VAR_10->common.flags & VAR_6))) {
  FUNC_10(VAR_3);
 }



 VAR_13 = VAR_12->reference.value;



 if (!FUNC_7(VAR_13)) {
  FUNC_10(VAR_4);
 }



 if (&FUNC_4) {
  VAR_11 = FUNC_5(VAR_13, &VAR_14);
  if (FUNC_3(VAR_11)) {
   (void)FUNC_4(VAR_1,
           VAR_14,
           VAR_8);
  }
 }



 VAR_11 = FUNC_6(VAR_13);
 if (FUNC_0(VAR_11)) {
  FUNC_10(VAR_11);
 }

 (void)FUNC_8(VAR_13);
 FUNC_9(VAR_13, VAR_7);





 VAR_10->common.flags &= ~VAR_6;
 FUNC_10(VAR_5);
}
