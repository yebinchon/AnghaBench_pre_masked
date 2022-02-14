
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {size_t value; } ;
struct TYPE_9__ {int pointer; } ;
struct TYPE_8__ {scalar_t__ type; } ;
union acpi_operand_object {TYPE_4__ integer; TYPE_3__ string; TYPE_2__ common; } ;
typedef size_t u32 ;
struct acpi_walk_state {union acpi_operand_object* return_desc; TYPE_1__* arguments; } ;
typedef int acpi_status ;
struct TYPE_11__ {scalar_t__ value; int name; } ;
struct TYPE_7__ {union acpi_operand_object* object; } ;


 size_t FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_5__* VAR_8 ;
 int FUNC_5 (int ) ;
 union acpi_operand_object* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_9 ;

acpi_status FUNC_8(struct acpi_walk_state *VAR_10)
{
 acpi_status VAR_11;
 union acpi_operand_object *VAR_12;
 union acpi_operand_object *VAR_13;
 u32 VAR_14;
 u32 VAR_15;

 FUNC_2(VAR_9);



 VAR_12 = VAR_10->arguments[0].object;
 if (!VAR_12 || (VAR_12->common.type != VAR_2)) {
  FUNC_7(VAR_6);
 }



 VAR_13 = FUNC_6(VAR_1);
 if (!VAR_13) {
  FUNC_7(VAR_4);
 }



 VAR_14 = 0;



 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_8); VAR_15++) {
  if (!FUNC_3(VAR_12->string.pointer,
     VAR_8[VAR_15].name)) {





   if (VAR_8[VAR_15].value >
       VAR_7) {
    VAR_7 =
        VAR_8[VAR_15].value;
   }

   VAR_14 = VAR_3;
   goto exit;
  }
 }






 VAR_11 = FUNC_5(VAR_12->string.pointer);
 if (FUNC_4(VAR_11)) {



  VAR_14 = VAR_3;
 }

exit:
 FUNC_1 ((VAR_0,
  "ACPI: BIOS _OSI(%s) is %ssupported\n",
  VAR_12->string.pointer, VAR_14 == 0 ? "not " : ""));



 VAR_13->integer.value = VAR_14;
 VAR_10->return_desc = VAR_13;
 FUNC_7 (VAR_5);
}
