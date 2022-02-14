
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ space_id; union acpi_operand_object* next; } ;
struct TYPE_7__ {scalar_t__ space_id; } ;
struct TYPE_6__ {union acpi_operand_object* handler; } ;
struct TYPE_5__ {scalar_t__ type; } ;
union acpi_operand_object {TYPE_4__ address_space; TYPE_3__ region; TYPE_2__ device; TYPE_1__ common; } ;
typedef int u32 ;
struct acpi_namespace_node {scalar_t__ type; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (union acpi_operand_object*,union acpi_operand_object*,int ) ;
 int FUNC_3 (union acpi_operand_object*,int ) ;
 struct acpi_namespace_node* VAR_7 ;
 union acpi_operand_object* FUNC_4 (struct acpi_namespace_node*) ;
 struct acpi_namespace_node* FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_8 ;

__attribute__((used)) static acpi_status
FUNC_7(acpi_handle VAR_9,
   u32 VAR_10, void *VAR_11, void **VAR_12)
{
 union acpi_operand_object *VAR_13;
 union acpi_operand_object *VAR_14;
 union acpi_operand_object *VAR_15;
 struct acpi_namespace_node *VAR_16;
 acpi_status VAR_17;

 FUNC_1(VAR_8);

 VAR_13 = (union acpi_operand_object *)VAR_11;



 if (!VAR_13) {
  return (VAR_5);
 }



 VAR_16 = FUNC_5(VAR_9);
 if (!VAR_16) {
  return (VAR_3);
 }





 if ((VAR_16->type != VAR_1) &&
     (VAR_16->type != VAR_2) && (VAR_16 != VAR_7)) {
  return (VAR_5);
 }



 VAR_15 = FUNC_4(VAR_16);
 if (!VAR_15) {



  return (VAR_5);
 }



 if (VAR_15->common.type == VAR_1) {



  VAR_14 = VAR_15->device.handler;
  while (VAR_14) {



   if (VAR_14->address_space.space_id ==
       VAR_13->address_space.space_id) {
    FUNC_0((VAR_0,
        "Found handler for region [%s] in device %p(%p) "
        "handler %p\n",
        FUNC_6
        (VAR_13->address_space.
         space_id), VAR_15,
        VAR_14,
        VAR_13));
    return (VAR_4);
   }



   VAR_14 = VAR_14->address_space.next;
  }





  return (VAR_5);
 }



 if (VAR_15->region.space_id != VAR_13->address_space.space_id) {



  return (VAR_5);
 }






 FUNC_3(VAR_15, VAR_6);



 VAR_17 = FUNC_2(VAR_13, VAR_15, VAR_6);
 return (VAR_17);
}
