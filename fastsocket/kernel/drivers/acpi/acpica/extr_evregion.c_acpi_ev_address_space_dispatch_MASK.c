
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int handler_flags; int context; int (* handler ) (scalar_t__,scalar_t__,scalar_t__,int *,int ,void*) ;int (* setup ) (union acpi_operand_object*,int ,int ,void**) ;} ;
struct TYPE_5__ {int flags; int space_id; scalar_t__ address; union acpi_operand_object* handler; int node; } ;
struct TYPE_4__ {void* region_context; } ;
union acpi_operand_object {TYPE_3__ address_space; TYPE_2__ region; TYPE_1__ extra; } ;
typedef scalar_t__ u32 ;
typedef int acpi_status ;
typedef int acpi_integer ;
typedef int (* acpi_adr_space_setup ) (union acpi_operand_object*,int ,int ,void**) ;
typedef int (* acpi_adr_space_handler ) (scalar_t__,scalar_t__,scalar_t__,int *,int ,void*) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 union acpi_operand_object* FUNC_9 (union acpi_operand_object*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_6 ;
 int FUNC_12 (int ) ;

acpi_status
FUNC_13(union acpi_operand_object *VAR_7,
          u32 VAR_8,
          u32 VAR_9,
          u32 VAR_10, acpi_integer * VAR_11)
{
 acpi_status VAR_12;
 acpi_adr_space_handler VAR_13;
 acpi_adr_space_setup VAR_14;
 union acpi_operand_object *VAR_15;
 union acpi_operand_object *VAR_16;
 void *VAR_17 = ((void*)0);

 FUNC_6(VAR_6);

 VAR_16 = FUNC_9(VAR_7);
 if (!VAR_16) {
  FUNC_12(VAR_4);
 }



 VAR_15 = VAR_7->region.handler;
 if (!VAR_15) {
  FUNC_1((VAR_3,
       "No handler for Region [%4.4s] (%p) [%s]",
       FUNC_10(VAR_7->region.node),
       VAR_7,
       FUNC_11(VAR_7->region.
          space_id)));

  FUNC_12(VAR_4);
 }





 if (!(VAR_7->region.flags & VAR_5)) {



  VAR_14 = VAR_15->address_space.setup;
  if (!VAR_14) {



   FUNC_1((VAR_3,
        "No init routine for region(%p) [%s]",
        VAR_7,
        FUNC_11(VAR_7->region.
           space_id)));
   FUNC_12(VAR_4);
  }






  FUNC_8();

  VAR_12 = VAR_14(VAR_7, VAR_2,
          VAR_15->address_space.context,
          &VAR_17);



  FUNC_7();



  if (FUNC_3(VAR_12)) {
   FUNC_2((VAR_3, VAR_12,
     "During region initialization: [%s]",
     FUNC_11(VAR_7->
        region.
        space_id)));
   FUNC_12(VAR_12);
  }



  if (!(VAR_7->region.flags & VAR_5)) {
   VAR_7->region.flags |= VAR_5;

   if (VAR_16->extra.region_context) {



    FUNC_5(VAR_17);
   } else {




    VAR_16->extra.region_context =
        VAR_17;
   }
  }
 }



 VAR_13 = VAR_15->address_space.handler;

 FUNC_0((VAR_1,
     "Handler %p (@%p) Address %8.8X%8.8X [%s]\n",
     &VAR_7->region.handler->address_space, VAR_13,
     FUNC_4(VAR_7->region.address +
        VAR_9),
     FUNC_11(VAR_7->region.
        space_id)));

 if (!(VAR_15->address_space.handler_flags &
       VAR_0)) {





  FUNC_8();
 }



 VAR_12 = VAR_13(VAR_8,
    (VAR_7->region.address + VAR_9),
    VAR_10, VAR_11, VAR_15->address_space.context,
    VAR_16->extra.region_context);

 if (FUNC_3(VAR_12)) {
  FUNC_2((VAR_3, VAR_12, "Returned by Handler for [%s]",
    FUNC_11(VAR_7->region.
       space_id)));
 }

 if (!(VAR_15->address_space.handler_flags &
       VAR_0)) {




  FUNC_7();
 }

 FUNC_12(VAR_12);
}
