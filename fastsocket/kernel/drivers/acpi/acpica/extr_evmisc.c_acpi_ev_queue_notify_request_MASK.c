
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {union acpi_operand_object* device_notify; union acpi_operand_object* system_notify; } ;
union acpi_operand_object {TYPE_1__ common_notify; } ;
struct TYPE_8__ {union acpi_operand_object* handler_obj; scalar_t__ value; struct acpi_namespace_node* node; } ;
struct TYPE_7__ {int descriptor_type; } ;
union acpi_generic_state {TYPE_3__ notify; TYPE_2__ common; } ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct acpi_namespace_node {int type; } ;
typedef int acpi_status ;
struct TYPE_10__ {scalar_t__ handler; } ;
struct TYPE_9__ {scalar_t__ handler; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_5__ VAR_8 ;
 TYPE_4__ VAR_9 ;
 union acpi_operand_object* FUNC_3 (struct acpi_namespace_node*) ;
 int FUNC_4 (int ,int ,union acpi_generic_state*) ;
 union acpi_generic_state* FUNC_5 () ;
 int FUNC_6 (union acpi_generic_state*) ;
 int FUNC_7 (struct acpi_namespace_node*) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_10 ;

acpi_status
FUNC_9(struct acpi_namespace_node * VAR_11,
        u32 VAR_12)
{
 union acpi_operand_object *VAR_13;
 union acpi_operand_object *VAR_14 = ((void*)0);
 union acpi_generic_state *VAR_15;
 acpi_status VAR_16 = VAR_4;

 FUNC_2(VAR_10);
 FUNC_0((VAR_0,
     "Dispatching Notify on [%4.4s] Node %p Value 0x%2.2X (%s)\n",
     FUNC_7(VAR_11), VAR_11, VAR_12,
     FUNC_8(VAR_12)));



 VAR_13 = FUNC_3(VAR_11);
 if (VAR_13) {



  switch (VAR_11->type) {



  case 130:
  case 128:
  case 129:

   if (VAR_12 <= VAR_2) {
    VAR_14 =
        VAR_13->common_notify.system_notify;
   } else {
    VAR_14 =
        VAR_13->common_notify.device_notify;
   }
   break;

  default:



   return (VAR_5);
  }
 }
 if ((VAR_9.handler &&
      (VAR_12 <= VAR_2)) ||
     (VAR_8.handler &&
      (VAR_12 > VAR_2)) || VAR_14) {
  VAR_15 = FUNC_5();
  if (!VAR_15) {
   return (VAR_3);
  }

  if (!VAR_14) {
   FUNC_0((VAR_0,
       "Executing system notify handler for Notify (%4.4s, %X) "
       "node %p\n",
       FUNC_7(VAR_11),
       VAR_12, VAR_11));
  }

  VAR_15->common.descriptor_type =
      VAR_1;
  VAR_15->notify.node = VAR_11;
  VAR_15->notify.value = (u16) VAR_12;
  VAR_15->notify.handler_obj = VAR_14;

  VAR_16 =
      FUNC_4(VAR_6, VAR_7,
        VAR_15);
  if (FUNC_1(VAR_16)) {
   FUNC_6(VAR_15);
  }
 } else {


  FUNC_0((VAR_0,
      "No notify handler for Notify (%4.4s, %X) node %p\n",
      FUNC_7(VAR_11), VAR_12,
      VAR_11));
 }

 return (VAR_16);
}
