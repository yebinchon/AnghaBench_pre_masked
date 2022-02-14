
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


struct TYPE_16__ {scalar_t__ space_id; union acpi_operand_object* next; } ;
struct TYPE_15__ {union acpi_operand_object* handler; } ;
struct TYPE_14__ {union acpi_operand_object* handler; } ;
struct TYPE_13__ {union acpi_operand_object* handler; } ;
struct TYPE_12__ {struct acpi_namespace_node* method_REG; } ;
struct TYPE_11__ {int flags; } ;
struct TYPE_10__ {scalar_t__ space_id; int * handler; TYPE_1__* node; } ;
union acpi_operand_object {TYPE_8__ address_space; TYPE_7__ thermal_zone; TYPE_6__ processor; TYPE_5__ device; TYPE_4__ extra; TYPE_3__ common; TYPE_2__ region; } ;
typedef int u8 ;
struct acpi_namespace_node {int type; struct acpi_namespace_node* parent; } ;
typedef int acpi_status ;
typedef int acpi_name ;
typedef scalar_t__ acpi_adr_space_type ;
struct TYPE_9__ {struct acpi_namespace_node* parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;

 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (union acpi_operand_object*,union acpi_operand_object*,int ) ;
 int FUNC_5 (union acpi_operand_object*,int) ;
 union acpi_operand_object* FUNC_6 (struct acpi_namespace_node*) ;
 union acpi_operand_object* FUNC_7 (union acpi_operand_object*) ;
 int FUNC_8 (int ,struct acpi_namespace_node*,int ,struct acpi_namespace_node**) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ) ;
 int VAR_9 ;
 int FUNC_12 (int ) ;

acpi_status
FUNC_13(union acpi_operand_object *VAR_10,
     u8 VAR_11)
{
 union acpi_operand_object *VAR_12;
 union acpi_operand_object *VAR_13;
 acpi_adr_space_type VAR_14;
 struct acpi_namespace_node *VAR_15;
 acpi_status VAR_16;
 struct acpi_namespace_node *VAR_17;
 acpi_name *VAR_18 = (acpi_name *) VAR_8;
 union acpi_operand_object *VAR_19;

 FUNC_2(VAR_9, VAR_11);

 if (!VAR_10) {
  FUNC_12(VAR_3);
 }

 if (VAR_10->common.flags & VAR_6) {
  FUNC_12(VAR_5);
 }

 VAR_19 = FUNC_7(VAR_10);
 if (!VAR_19) {
  FUNC_12(VAR_4);
 }

 VAR_15 = VAR_10->region.node->parent;
 VAR_14 = VAR_10->region.space_id;



 VAR_10->region.handler = ((void*)0);
 VAR_19->extra.method_REG = ((void*)0);
 VAR_10->common.flags &= ~(VAR_7);
 VAR_10->common.flags |= VAR_6;



 VAR_16 =
     FUNC_8(*VAR_18, VAR_15, VAR_2,
         &VAR_17);
 if (FUNC_3(VAR_16)) {





  VAR_19->extra.method_REG = VAR_17;
 }





 while (VAR_15) {



  VAR_12 = ((void*)0);
  VAR_13 = FUNC_6(VAR_15);
  if (VAR_13) {



   switch (VAR_15->type) {
   case 130:

    VAR_12 = VAR_13->device.handler;
    break;

   case 129:

    VAR_12 = VAR_13->processor.handler;
    break;

   case 128:

    VAR_12 = VAR_13->thermal_zone.handler;
    break;

   default:

    break;
   }

   while (VAR_12) {



    if (VAR_12->address_space.space_id ==
        VAR_14) {



     FUNC_0((VAR_0,
         "Found handler %p for region %p in obj %p\n",
         VAR_12,
         VAR_10,
         VAR_13));

     VAR_16 =
         FUNC_4(VAR_12,
          VAR_10,
          VAR_11);





     if (VAR_11) {
      VAR_16 =
          FUNC_11
          (VAR_1);
      if (FUNC_1(VAR_16)) {
       FUNC_12
           (VAR_16);
      }
     }

     VAR_16 =
         FUNC_5
         (VAR_10, 1);

     if (VAR_11) {
      VAR_16 =
          FUNC_9
          (VAR_1);
      if (FUNC_1(VAR_16)) {
       FUNC_12
           (VAR_16);
      }
     }

     FUNC_12(VAR_5);
    }



    VAR_12 = VAR_12->address_space.next;
   }
  }



  VAR_15 = VAR_15->parent;
 }



 FUNC_0((VAR_0,
     "No handler for RegionType %s(%X) (RegionObj %p)\n",
     FUNC_10(VAR_14), VAR_14,
     VAR_10));

 FUNC_12(VAR_4);
}
