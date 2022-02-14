
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int os_semaphore; } ;
struct TYPE_13__ {int os_mutex; } ;
struct TYPE_12__ {int handler; } ;
struct TYPE_11__ {int object; int class; } ;
struct TYPE_10__ {char* pointer; int length; } ;
struct TYPE_9__ {char* pointer; int length; } ;
struct TYPE_8__ {int type; int flags; union acpi_operand_object* next_object; int reference_count; } ;
union acpi_operand_object {TYPE_7__ event; TYPE_6__ mutex; TYPE_5__ region; TYPE_4__ reference; TYPE_3__ string; TYPE_2__ buffer; TYPE_1__ common; } ;
typedef int u16 ;
typedef int acpi_status ;
typedef int acpi_size ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static acpi_status
FUNC_6(union acpi_operand_object *VAR_5,
      union acpi_operand_object *VAR_6)
{
 u16 VAR_7;
 union acpi_operand_object *VAR_8;
 acpi_status VAR_9;



 VAR_7 = VAR_6->common.reference_count;
 VAR_8 = VAR_6->common.next_object;



 FUNC_2((char *)VAR_6, (char *)VAR_5,
      sizeof(union acpi_operand_object));



 VAR_6->common.reference_count = VAR_7;
 VAR_6->common.next_object = VAR_8;



 VAR_6->common.flags &= ~VAR_4;



 switch (VAR_6->common.type) {
 case 133:





  if ((VAR_5->buffer.pointer) &&
      (VAR_5->buffer.length)) {
   VAR_6->buffer.pointer =
       FUNC_0(VAR_5->buffer.length);
   if (!VAR_6->buffer.pointer) {
    return (VAR_2);
   }



   FUNC_2(VAR_6->buffer.pointer,
        VAR_5->buffer.pointer,
        VAR_5->buffer.length);
  }
  break;

 case 128:





  if (VAR_5->string.pointer) {
   VAR_6->string.pointer =
       FUNC_0((acpi_size) VAR_5->string.
       length + 1);
   if (!VAR_6->string.pointer) {
    return (VAR_2);
   }



   FUNC_2(VAR_6->string.pointer,
        VAR_5->string.pointer,
        (acpi_size) VAR_5->string.length + 1);
  }
  break;

 case 131:
  if (VAR_5->reference.class == VAR_1) {
   break;
  }

  FUNC_5(VAR_5->reference.object);
  break;

 case 129:



  if (VAR_6->region.handler) {
   FUNC_5(VAR_6->region.handler);
  }
  break;





 case 130:

  VAR_9 = FUNC_3(&VAR_6->mutex.os_mutex);
  if (FUNC_1(VAR_9)) {
   return VAR_9;
  }
  break;

 case 132:

  VAR_9 = FUNC_4(VAR_0, 0,
        &VAR_6->event.
        os_semaphore);
  if (FUNC_1(VAR_9)) {
   return VAR_9;
  }
  break;

 default:

  break;
 }

 return (VAR_3);
}
