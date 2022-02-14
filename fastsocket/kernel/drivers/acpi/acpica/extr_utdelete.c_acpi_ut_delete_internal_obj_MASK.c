
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_15__ {int region_context; } ;
struct TYPE_14__ {int handler_flags; int context; int (* setup ) (union acpi_operand_object*,int ,int ,int *) ;union acpi_operand_object* region_list; union acpi_operand_object* next; } ;
struct TYPE_13__ {union acpi_operand_object* next; union acpi_operand_object* handler; int length; int address; int space_id; } ;
struct TYPE_24__ {union acpi_operand_object* mutex; } ;
struct TYPE_23__ {int os_mutex; } ;
struct TYPE_22__ {int * os_semaphore; } ;
struct TYPE_21__ {union acpi_operand_object* handler; } ;
struct TYPE_20__ {int gpe_block; } ;
struct TYPE_19__ {void* elements; int count; } ;
struct TYPE_18__ {void* pointer; } ;
struct TYPE_17__ {int type; int flags; } ;
struct TYPE_16__ {void* pointer; } ;
union acpi_operand_object {TYPE_12__ extra; TYPE_11__ address_space; TYPE_10__ region; TYPE_9__ method; TYPE_8__ mutex; TYPE_7__ event; TYPE_6__ common_notify; TYPE_5__ device; TYPE_4__ package; TYPE_3__ buffer; TYPE_2__ common; TYPE_1__ string; } ;
typedef int acpi_size ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,union acpi_operand_object*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (union acpi_operand_object*) ;
 union acpi_operand_object* VAR_4 ;
 int * VAR_5 ;
 union acpi_operand_object* FUNC_5 (union acpi_operand_object*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (union acpi_operand_object*) ;
 int FUNC_10 (union acpi_operand_object*) ;
 int FUNC_11 (union acpi_operand_object*) ;
 int VAR_6 ;
 int FUNC_12 (union acpi_operand_object*,int ,int ,int *) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_13(union acpi_operand_object *VAR_8)
{
 void *VAR_9 = ((void*)0);
 union acpi_operand_object *VAR_10;
 union acpi_operand_object *VAR_11;
 union acpi_operand_object *VAR_12;
 union acpi_operand_object **VAR_13;

 FUNC_2(VAR_7, VAR_8);

 if (!VAR_8) {
  VAR_6;
 }





 switch (VAR_8->common.type) {
 case 129:

  FUNC_0((VAR_1,
      "**** String %p, ptr %p\n", VAR_8,
      VAR_8->string.pointer));



  if (!(VAR_8->common.flags & VAR_3)) {



   VAR_9 = VAR_8->string.pointer;
  }
  break;

 case 139:

  FUNC_0((VAR_1,
      "**** Buffer %p, ptr %p\n", VAR_8,
      VAR_8->buffer.pointer));



  if (!(VAR_8->common.flags & VAR_3)) {



   VAR_9 = VAR_8->buffer.pointer;
  }
  break;

 case 132:

  FUNC_0((VAR_1,
      " **** Package of count %X\n",
      VAR_8->package.count));
  VAR_9 = VAR_8->package.elements;
  break;





 case 137:

  if (VAR_8->device.gpe_block) {
   (void)FUNC_3(VAR_8->device.
             gpe_block);
  }



 case 131:
 case 128:



  VAR_10 = VAR_8->common_notify.handler;
  while (VAR_10) {
   VAR_12 = VAR_10->address_space.next;
   FUNC_11(VAR_10);
   VAR_10 = VAR_12;
  }
  break;

 case 133:

  FUNC_0((VAR_1,
      "***** Mutex %p, OS Mutex %p\n",
      VAR_8, VAR_8->mutex.os_mutex));

  if (VAR_8 == VAR_4) {



   (void)
       FUNC_7
       (VAR_5);
   VAR_5 = ((void*)0);

   FUNC_6(VAR_8->mutex.os_mutex);
   VAR_4 = ((void*)0);
  } else {
   FUNC_4(VAR_8);
   FUNC_6(VAR_8->mutex.os_mutex);
  }
  break;

 case 136:

  FUNC_0(*(VAR_1,
      "***** Event %p, OS Semaphore %p\n",
      VAR_8, VAR_8->event.os_semaphore));

  (void)FUNC_7(VAR_8->event.os_semaphore);
  VAR_8->event.os_semaphore = ((void*)0);
  break;

 case 134:

  FUNC_0((VAR_1,
      "***** Method %p\n", VAR_8));



  if (VAR_8->method.mutex) {
   FUNC_6(VAR_8->method.mutex->mutex.
          os_mutex);
   FUNC_9(VAR_8->method.mutex);
   VAR_8->method.mutex = ((void*)0);
  }
  break;

 case 130:

  FUNC_0((VAR_1,
      "***** Region %p\n", VAR_8));



  FUNC_8(VAR_8->region.space_id,
       VAR_8->region.address,
       (acpi_size) VAR_8->region.length);

  VAR_11 = FUNC_5(VAR_8);
  if (VAR_11) {





   VAR_10 = VAR_8->region.handler;
   if (VAR_10) {
    VAR_12 =
        VAR_10->address_space.region_list;
    VAR_13 =
        &VAR_10->address_space.region_list;



    while (VAR_12) {
     if (VAR_12 == VAR_8) {
      *VAR_13 =
          VAR_12->region.next;
      break;
     }



     VAR_13 = &VAR_12->region.next;
     VAR_12 = VAR_12->region.next;
    }

    if (VAR_10->address_space.handler_flags &
        VAR_0) {



     if (VAR_10->address_space.setup) {
      (void)VAR_10->
          address_space.setup(VAR_8,
         VAR_2,
         VAR_10->
         address_space.
         context,
         &VAR_11->
         extra.
         region_context);
     }
    }

    FUNC_11(VAR_10);
   }



   FUNC_9(VAR_11);
  }
  break;

 case 138:

  FUNC_0((VAR_1,
      "***** Buffer Field %p\n", VAR_8));

  VAR_11 = FUNC_5(VAR_8);
  if (VAR_11) {
   FUNC_9(VAR_11);
  }
  break;

 case 135:

  FUNC_0((VAR_1,
      "***** Bank Field %p\n", VAR_8));

  VAR_11 = FUNC_5(VAR_8);
  if (VAR_11) {
   FUNC_9(VAR_11);
  }
  break;

 default:
  break;
 }



 if (VAR_9) {
  FUNC_0((VAR_1,
      "Deleting Object Subptr %p\n", VAR_9));
  FUNC_1(VAR_9);
 }



 FUNC_0((VAR_1, "Deleting Object %p [%s]\n",
     VAR_8, FUNC_10(VAR_8)));

 FUNC_9(VAR_8);
 VAR_6;
}
