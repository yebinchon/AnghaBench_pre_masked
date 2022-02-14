
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int type; } ;
struct TYPE_7__ {scalar_t__ length; int * pointer; } ;
struct TYPE_6__ {char* pointer; scalar_t__ length; } ;
struct TYPE_5__ {int value; } ;
union acpi_operand_object {TYPE_4__ common; TYPE_3__ buffer; TYPE_2__ string; TYPE_1__ integer; } ;
struct acpi_walk_state {int dummy; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_size ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (char*,int *,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,char*) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (union acpi_operand_object*,union acpi_operand_object**) ;
 int FUNC_7 (union acpi_operand_object*,union acpi_operand_object**,int) ;
 int FUNC_8 (union acpi_operand_object*,union acpi_operand_object**,int ) ;
 scalar_t__ VAR_4 ;
 union acpi_operand_object* FUNC_9 (scalar_t__) ;
 union acpi_operand_object* FUNC_10 (scalar_t__) ;
 int FUNC_11 (union acpi_operand_object*) ;
 int VAR_5 ;
 int FUNC_12 (int ) ;

acpi_status
FUNC_13(union acpi_operand_object *VAR_6,
         union acpi_operand_object *VAR_7,
         union acpi_operand_object **VAR_8,
         struct acpi_walk_state *VAR_9)
{
 union acpi_operand_object *VAR_10 = VAR_7;
 union acpi_operand_object *VAR_11;
 char *VAR_12;
 acpi_status VAR_13;

 FUNC_2(VAR_5);
 switch (VAR_6->common.type) {
 case 129:
  VAR_13 =
      FUNC_7(VAR_7, &VAR_10, 16);
  break;

 case 128:
  VAR_13 = FUNC_8(VAR_7, &VAR_10,
         VAR_0);
  break;

 case 130:
  VAR_13 = FUNC_6(VAR_7, &VAR_10);
  break;

 default:
  FUNC_0((VAR_2, "Invalid object type: %X",
       VAR_6->common.type));
  VAR_13 = VAR_1;
 }

 if (FUNC_1(VAR_13)) {
  goto cleanup;
 }
 switch (VAR_6->common.type) {
 case 129:




  VAR_11 = FUNC_9((acpi_size)
          FUNC_4
          (VAR_4));
  if (!VAR_11) {
   VAR_13 = VAR_3;
   goto cleanup;
  }

  VAR_12 = (char *)VAR_11->buffer.pointer;



  FUNC_3(VAR_12, &VAR_6->integer.value,
       VAR_4);



  FUNC_3(VAR_12 + VAR_4,
       &VAR_10->integer.value,
       VAR_4);
  break;

 case 128:



  VAR_11 = FUNC_10(((acpi_size)
           VAR_6->string.
           length +
           VAR_10->
           string.length));
  if (!VAR_11) {
   VAR_13 = VAR_3;
   goto cleanup;
  }

  VAR_12 = VAR_11->string.pointer;



  FUNC_5(VAR_12, VAR_6->string.pointer);
  FUNC_5(VAR_12 + VAR_6->string.length,
       VAR_10->string.pointer);
  break;

 case 130:



  VAR_11 = FUNC_9(((acpi_size)
           VAR_6->buffer.
           length +
           VAR_10->
           buffer.length));
  if (!VAR_11) {
   VAR_13 = VAR_3;
   goto cleanup;
  }

  VAR_12 = (char *)VAR_11->buffer.pointer;



  FUNC_3(VAR_12, VAR_6->buffer.pointer,
       VAR_6->buffer.length);
  FUNC_3(VAR_12 + VAR_6->buffer.length,
       VAR_10->buffer.pointer,
       VAR_10->buffer.length);
  break;

 default:



  FUNC_0((VAR_2, "Invalid object type: %X",
       VAR_6->common.type));
  VAR_13 = VAR_1;
  goto cleanup;
 }

 *VAR_8 = VAR_11;

      cleanup:
 if (VAR_10 != VAR_7) {
  FUNC_11(VAR_10);
 }
 FUNC_12(VAR_13);
}
