
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ length; int pointer; } ;
struct TYPE_5__ {int value; } ;
struct TYPE_4__ {int type; } ;
union acpi_operand_object {TYPE_3__ buffer; TYPE_2__ integer; TYPE_1__ common; } ;
typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
typedef int acpi_status ;
typedef int acpi_integer ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,scalar_t__) ;



 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (union acpi_operand_object*,union acpi_operand_object**) ;
 int FUNC_4 (union acpi_operand_object*,union acpi_operand_object**,int) ;
 int FUNC_5 (union acpi_operand_object*,union acpi_operand_object**,int ) ;
 int FUNC_6 (union acpi_operand_object*) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;

acpi_status
FUNC_8(u16 VAR_6,
        union acpi_operand_object *VAR_7,
        union acpi_operand_object *VAR_8, u8 * VAR_9)
{
 union acpi_operand_object *VAR_10 = VAR_8;
 acpi_integer VAR_11;
 acpi_integer VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 acpi_status VAR_15 = VAR_2;
 u8 VAR_16 = VAR_3;
 int VAR_17;

 FUNC_1(VAR_5);
 switch (VAR_7->common.type) {
 case 132:
  VAR_15 =
      FUNC_4(VAR_8, &VAR_10, 16);
  break;

 case 131:
  VAR_15 = FUNC_5(VAR_8, &VAR_10,
         VAR_0);
  break;

 case 133:
  VAR_15 = FUNC_3(VAR_8, &VAR_10);
  break;

 default:
  VAR_15 = VAR_1;
  break;
 }

 if (FUNC_0(VAR_15)) {
  goto cleanup;
 }




 if (VAR_7->common.type == 132) {




  VAR_11 = VAR_7->integer.value;
  VAR_12 = VAR_10->integer.value;

  switch (VAR_6) {
  case 130:

   if (VAR_11 == VAR_12) {
    VAR_16 = VAR_4;
   }
   break;

  case 129:

   if (VAR_11 > VAR_12) {
    VAR_16 = VAR_4;
   }
   break;

  case 128:

   if (VAR_11 < VAR_12) {
    VAR_16 = VAR_4;
   }
   break;

  default:
   VAR_15 = VAR_1;
   break;
  }
 } else {






  VAR_13 = VAR_7->buffer.length;
  VAR_14 = VAR_10->buffer.length;



  VAR_17 = FUNC_2(VAR_7->buffer.pointer,
          VAR_10->buffer.pointer,
          (VAR_13 > VAR_14) ? VAR_14 : VAR_13);

  switch (VAR_6) {
  case 130:



   if ((VAR_13 == VAR_14) && (VAR_17 == 0)) {



    VAR_16 = VAR_4;
   }
   break;

  case 129:

   if (VAR_17 > 0) {
    VAR_16 = VAR_4;
    goto cleanup;
   }
   if (VAR_17 < 0) {
    goto cleanup;
   }



   if (VAR_13 > VAR_14) {
    VAR_16 = VAR_4;
   }
   break;

  case 128:

   if (VAR_17 > 0) {
    goto cleanup;
   }
   if (VAR_17 < 0) {
    VAR_16 = VAR_4;
    goto cleanup;
   }



   if (VAR_13 < VAR_14) {
    VAR_16 = VAR_4;
   }
   break;

  default:
   VAR_15 = VAR_1;
   break;
  }
 }

      cleanup:



 if (VAR_10 != VAR_8) {
  FUNC_6(VAR_10);
 }



 *VAR_9 = VAR_16;
 FUNC_7(VAR_15);
}
