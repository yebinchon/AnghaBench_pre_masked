
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {size_t value; } ;
struct TYPE_5__ {int type; } ;
struct TYPE_4__ {size_t length; int * pointer; } ;
union acpi_operand_object {TYPE_3__ integer; TYPE_2__ common; TYPE_1__ buffer; } ;
typedef int u8 ;
typedef size_t u32 ;
typedef int acpi_status ;
typedef size_t acpi_integer ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int ,union acpi_operand_object*) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (union acpi_operand_object*) ;
 size_t VAR_5 ;
 union acpi_operand_object* FUNC_5 (int const) ;
 int FUNC_6 (char*,size_t,size_t*) ;
 int VAR_6 ;
 int FUNC_7 (int ) ;

acpi_status
FUNC_8(union acpi_operand_object *VAR_7,
      union acpi_operand_object **VAR_8, u32 VAR_9)
{
 union acpi_operand_object *VAR_10;
 u8 *VAR_11;
 acpi_integer VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 acpi_status VAR_15;

 FUNC_3(VAR_6, VAR_7);

 switch (VAR_7->common.type) {
 case 129:



  *VAR_8 = VAR_7;
  FUNC_7(VAR_3);

 case 130:
 case 128:



  VAR_11 = VAR_7->buffer.pointer;
  VAR_14 = VAR_7->buffer.length;
  break;

 default:
  FUNC_7(VAR_4);
 }
 VAR_12 = 0;



 switch (VAR_7->common.type) {
 case 128:







  VAR_15 = FUNC_6((char *)VAR_11, VAR_9, &VAR_12);
  if (FUNC_1(VAR_15)) {
   FUNC_7(VAR_15);
  }
  break;

 case 130:



  if (!VAR_14) {
   FUNC_7(VAR_1);
  }



  if (VAR_14 > VAR_5) {
   VAR_14 = VAR_5;
  }





  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {





   VAR_12 |= (((acpi_integer) VAR_11[VAR_13]) << (VAR_13 * 8));
  }
  break;

 default:


  break;
 }



 VAR_10 = FUNC_5(129);
 if (!VAR_10) {
  FUNC_7(VAR_2);
 }

 FUNC_0((VAR_0, "Converted value: %8.8X%8.8X\n",
     FUNC_2(VAR_12)));



 VAR_10->integer.value = VAR_12;
 FUNC_4(VAR_10);
 *VAR_8 = VAR_10;
 FUNC_7(VAR_3);
}
