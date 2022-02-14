
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {int class; scalar_t__ target_type; int value; union acpi_operand_object** where; union acpi_operand_object* node; union acpi_operand_object* object; } ;
union acpi_operand_object {scalar_t__ type; TYPE_2__ common; TYPE_1__ reference; } ;
struct acpi_walk_state {int dummy; } ;
struct acpi_namespace_node {scalar_t__ type; TYPE_2__ common; TYPE_1__ reference; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_object_type ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int (*) (struct acpi_walk_state*,union acpi_operand_object*,scalar_t__*,union acpi_operand_object**)) ;
 int const FUNC_3 (union acpi_operand_object*) ;







 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;


 scalar_t__ VAR_5 ;


 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int const,int ,struct acpi_walk_state*,union acpi_operand_object**) ;
 int FUNC_5 (int const,int ,struct acpi_walk_state*,union acpi_operand_object**) ;
 union acpi_operand_object* FUNC_6 (union acpi_operand_object*) ;
 scalar_t__ FUNC_7 (union acpi_operand_object*) ;
 int FUNC_8 (union acpi_operand_object*) ;
 int FUNC_9 (union acpi_operand_object*) ;
 int FUNC_10 (int ) ;

acpi_status
FUNC_11(struct acpi_walk_state *VAR_12,
    union acpi_operand_object *VAR_13,
    acpi_object_type * VAR_14,
    union acpi_operand_object **VAR_15)
{
 union acpi_operand_object *VAR_16 = (void *)VAR_13;
 struct acpi_namespace_node *VAR_17;
 acpi_object_type VAR_18;
 acpi_status VAR_19;

 FUNC_2(FUNC_11);



 switch (FUNC_3(VAR_16)) {
 case 139:
  VAR_18 = VAR_16->common.type;
  break;

 case 140:
  VAR_18 = ((struct acpi_namespace_node *)VAR_16)->type;
  VAR_16 =
      FUNC_6((struct acpi_namespace_node *)
      VAR_16);



  if (VAR_18 == VAR_4) {
   VAR_18 = ((struct acpi_namespace_node *)VAR_16)->type;
   VAR_16 =
       FUNC_6((struct
        acpi_namespace_node *)
       VAR_16);
  }
  break;

 default:
  FUNC_10(VAR_9);
 }



 if (VAR_18 != VAR_5) {
  goto exit;
 }







 while (VAR_16->common.type == VAR_5) {
  switch (VAR_16->reference.class) {
  case 133:
  case 134:



   if (VAR_16->reference.class == 133) {
    VAR_17 = VAR_16->reference.object;
   } else {

    VAR_17 = VAR_16->reference.node;
   }



   if (FUNC_3(VAR_17) !=
       140) {
    FUNC_0((VAR_10, "Not a NS node %p [%s]",
         VAR_17,
         FUNC_8(VAR_17)));
    FUNC_10(VAR_8);
   }



   VAR_16 = FUNC_6(VAR_17);
   if (!VAR_16) {



    VAR_18 = FUNC_7(VAR_17);
    goto exit;
   }



   if (VAR_16 == VAR_13) {
    FUNC_10(VAR_7);
   }
   break;

  case 136:



   VAR_18 = VAR_16->reference.target_type;
   if (VAR_18 != VAR_6) {
    goto exit;
   }
   VAR_16 = *(VAR_16->reference.where);
   if (!VAR_16) {



    VAR_18 = 0;
    goto exit;
   }
   break;

  case 132:

   VAR_18 = VAR_1;
   goto exit;

  case 135:
  case 138:

   if (VAR_15) {
    VAR_19 =
        FUNC_5(VAR_16->
          reference.
          class,
          VAR_16->
          reference.
          value,
          VAR_12,
          &VAR_16);
    if (FUNC_1(VAR_19)) {
     FUNC_10(VAR_19);
    }
    FUNC_9(VAR_16);
   } else {
    VAR_19 =
        FUNC_4(VAR_16->
         reference.
         class,
         VAR_16->
         reference.
         value,
         VAR_12,
         &VAR_17);
    if (FUNC_1(VAR_19)) {
     FUNC_10(VAR_19);
    }

    VAR_16 = FUNC_6(VAR_17);
    if (!VAR_16) {
     VAR_18 = VAR_0;
     goto exit;
    }
   }
   break;

  case 137:



   VAR_18 = VAR_2;
   goto exit;

  default:

   FUNC_0((VAR_10,
        "Unknown Reference Class %2.2X",
        VAR_16->reference.class));
   FUNC_10(VAR_8);
  }
 }





 VAR_18 = VAR_16->common.type;

      exit:


 switch (VAR_18) {
 case 129:
 case 131:
 case 130:

  VAR_18 = VAR_3;
  break;

 case 128:



  VAR_18 = VAR_0;
  break;

 default:

  break;
 }

 *VAR_14 = VAR_18;
 if (VAR_15) {
  *VAR_15 = VAR_16;
 }
 FUNC_10(VAR_11);
}
