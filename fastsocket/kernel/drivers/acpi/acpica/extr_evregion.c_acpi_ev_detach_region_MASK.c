
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; union acpi_operand_object* next; union acpi_operand_object* handler; int space_id; } ;
struct TYPE_5__ {int context; int (* setup ) (union acpi_operand_object*,int ,int ,void**) ;union acpi_operand_object* region_list; } ;
struct TYPE_4__ {void* region_context; } ;
union acpi_operand_object {TYPE_3__ region; TYPE_2__ address_space; TYPE_1__ extra; } ;
typedef scalar_t__ u8 ;
typedef int acpi_status ;
typedef int (* acpi_adr_space_setup ) (union acpi_operand_object*,int ,int ,void**) ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (union acpi_operand_object*,int ) ;
 union acpi_operand_object* FUNC_5 (union acpi_operand_object*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (union acpi_operand_object*) ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_10(union acpi_operand_object *VAR_7,
        u8 VAR_8)
{
 union acpi_operand_object *VAR_9;
 union acpi_operand_object *VAR_10;
 union acpi_operand_object **VAR_11;
 acpi_adr_space_setup VAR_12;
 void **VAR_13;
 union acpi_operand_object *VAR_14;
 acpi_status VAR_15;

 FUNC_3(VAR_5);

 VAR_14 = FUNC_5(VAR_7);
 if (!VAR_14) {
  VAR_6;
 }
 VAR_13 = &VAR_14->extra.region_context;



 VAR_9 = VAR_7->region.handler;
 if (!VAR_9) {



  VAR_6;
 }



 VAR_10 = VAR_9->address_space.region_list;
 VAR_11 = &VAR_9->address_space.region_list;

 while (VAR_10) {



  if (VAR_10 == VAR_7) {
   FUNC_0((VAR_0,
       "Removing Region %p from address handler %p\n",
       VAR_7, VAR_9));



   *VAR_11 = VAR_10->region.next;
   VAR_10->region.next = ((void*)0);

   if (VAR_8) {
    VAR_15 =
        FUNC_8(VAR_1);
    if (FUNC_2(VAR_15)) {
     VAR_6;
    }
   }



   VAR_15 = FUNC_4(VAR_7, 0);
   if (FUNC_2(VAR_15)) {
    FUNC_1((VAR_3, VAR_15,
      "from region _REG, [%s]",
      FUNC_7
      (VAR_7->region.space_id)));
   }

   if (VAR_8) {
    VAR_15 =
        FUNC_6(VAR_1);
    if (FUNC_2(VAR_15)) {
     VAR_6;
    }
   }





   if (VAR_7->region.flags & VAR_4) {
    VAR_12 = VAR_9->address_space.setup;
    VAR_15 =
        VAR_12(VAR_7,
       VAR_2,
       VAR_9->address_space.
       context, VAR_13);



    if (FUNC_2(VAR_15)) {
     FUNC_1((VAR_3, VAR_15,
       "from region handler - deactivate, [%s]",
       FUNC_7
       (VAR_7->region.
        space_id)));
    }

    VAR_7->region.flags &=
        ~(VAR_4);
   }
   VAR_7->region.handler = ((void*)0);
   FUNC_9(VAR_9);

   VAR_6;
  }



  VAR_11 = &VAR_10->region.next;
  VAR_10 = VAR_10->region.next;
 }



 FUNC_0((VAR_0,
     "Cannot remove region %p from address handler %p\n",
     VAR_7, VAR_9));

 VAR_6;
}
