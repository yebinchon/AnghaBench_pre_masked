
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int node; int class; } ;
struct TYPE_13__ {int value; } ;
struct TYPE_12__ {int flags; int length; void* pointer; } ;
struct TYPE_9__ {int length; void* pointer; } ;
union acpi_operand_object {TYPE_7__ reference; TYPE_5__ integer; TYPE_4__ buffer; TYPE_1__ string; } ;
struct TYPE_16__ {int handle; } ;
struct TYPE_14__ {int value; } ;
struct TYPE_11__ {int length; int pointer; } ;
struct TYPE_10__ {int length; int pointer; } ;
union acpi_object {int type; TYPE_8__ reference; TYPE_6__ integer; TYPE_3__ buffer; TYPE_2__ string; } ;
typedef int u8 ;
typedef int acpi_status ;
typedef int acpi_size ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,int ,int ) ;
 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 union acpi_operand_object* FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (union acpi_operand_object*) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;

__attribute__((used)) static acpi_status
FUNC_8(union acpi_object *VAR_7,
    union acpi_operand_object **VAR_8)
{
 union acpi_operand_object *VAR_9;

 FUNC_2(VAR_6);




 switch (VAR_7->type) {
 case 128:
 case 131:
 case 130:
 case 129:

  VAR_9 = FUNC_4((u8)
         VAR_7->
         type);
  if (!VAR_9) {
   FUNC_7(VAR_2);
  }
  break;

 case 132:

  *VAR_8 = ((void*)0);
  FUNC_7(VAR_3);

 default:


  FUNC_1((VAR_1,
       "Unsupported object type, cannot convert to internal object: %s",
       FUNC_5(VAR_7->type)));

  FUNC_7(VAR_4);
 }



 switch (VAR_7->type) {
 case 128:

  VAR_9->string.pointer =
      FUNC_0((acpi_size)
      VAR_7->string.length + 1);

  if (!VAR_9->string.pointer) {
   goto error_exit;
  }

  FUNC_3(VAR_9->string.pointer,
       VAR_7->string.pointer,
       VAR_7->string.length);

  VAR_9->string.length = VAR_7->string.length;
  break;

 case 131:

  VAR_9->buffer.pointer =
      FUNC_0(VAR_7->buffer.length);
  if (!VAR_9->buffer.pointer) {
   goto error_exit;
  }

  FUNC_3(VAR_9->buffer.pointer,
       VAR_7->buffer.pointer,
       VAR_7->buffer.length);

  VAR_9->buffer.length = VAR_7->buffer.length;



  VAR_9->buffer.flags |= VAR_5;
  break;

 case 130:

  VAR_9->integer.value = VAR_7->integer.value;
  break;

 case 129:



  VAR_9->reference.class = VAR_0;
  VAR_9->reference.node =
      VAR_7->reference.handle;
  break;

 default:

  break;
 }

 *VAR_8 = VAR_9;
 FUNC_7(VAR_3);

      error_exit:
 FUNC_6(VAR_9);
 FUNC_7(VAR_2);
}
