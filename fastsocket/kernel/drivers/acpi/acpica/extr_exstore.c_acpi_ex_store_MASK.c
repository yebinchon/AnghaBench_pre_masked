
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int class; int value; struct acpi_namespace_node* object; } ;
struct TYPE_3__ {int type; int flags; } ;
union acpi_operand_object {TYPE_2__ reference; TYPE_1__ common; } ;
struct acpi_walk_state {int dummy; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (union acpi_operand_object*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,union acpi_operand_object*) ;
 scalar_t__ FUNC_4 (union acpi_operand_object*) ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int,int ,union acpi_operand_object*,struct acpi_walk_state*) ;
 int FUNC_6 (union acpi_operand_object*,int ,int ) ;
 int FUNC_7 (union acpi_operand_object*,union acpi_operand_object*,struct acpi_walk_state*) ;
 int FUNC_8 (union acpi_operand_object*,struct acpi_namespace_node*,struct acpi_walk_state*,int ) ;
 int FUNC_9 (union acpi_operand_object*) ;
 int VAR_10 ;
 int FUNC_10 (int ) ;

acpi_status
FUNC_11(union acpi_operand_object *VAR_11,
       union acpi_operand_object *VAR_12,
       struct acpi_walk_state *VAR_13)
{
 acpi_status VAR_14 = VAR_8;
 union acpi_operand_object *VAR_15 = VAR_12;

 FUNC_3(VAR_10, VAR_12);



 if (!VAR_11 || !VAR_12) {
  FUNC_2((VAR_7, "Null parameter"));
  FUNC_10(VAR_5);
 }



 if (FUNC_4(VAR_12) == VAR_1) {




  VAR_14 = FUNC_8(VAR_11,
            (struct
             acpi_namespace_node *)
            VAR_12, VAR_13,
            VAR_2);

  FUNC_10(VAR_14);
 }



 switch (VAR_12->common.type) {
 case 128:
  break;

 case 129:



  if (VAR_12->common.flags & VAR_9) {
   FUNC_10(VAR_8);
  }



 default:



  FUNC_2((VAR_7,
       "Target is not a Reference or Constant object - %s [%p]",
       FUNC_9(VAR_12),
       VAR_12));

  FUNC_10(VAR_6);
 }
 switch (VAR_15->reference.class) {
 case 130:



  VAR_14 = FUNC_8(VAR_11,
            VAR_15->reference.
            object, VAR_13,
            VAR_2);
  break;

 case 132:



  VAR_14 =
      FUNC_7(VAR_11, VAR_15,
        VAR_13);
  break;

 case 131:
 case 134:



  VAR_14 =
      FUNC_5(VAR_15->reference.class,
        VAR_15->reference.value,
        VAR_11, VAR_13);
  break;

 case 133:





  FUNC_0((VAR_0,
      "**** Write to Debug Object: Object %p %s ****:\n\n",
      VAR_11,
      FUNC_9(VAR_11)));

  FUNC_6(VAR_11, 0, 0);
  break;

 default:

  FUNC_2((VAR_7, "Unknown Reference Class %2.2X",
       VAR_15->reference.class));
  FUNC_1(VAR_15, VAR_3);

  VAR_14 = VAR_4;
  break;
 }

 FUNC_10(VAR_14);
}
