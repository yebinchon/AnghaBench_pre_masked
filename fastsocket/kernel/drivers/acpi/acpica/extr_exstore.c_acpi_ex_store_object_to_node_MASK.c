
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
union acpi_operand_object {TYPE_1__ common; } ;
typedef int u8 ;
struct acpi_walk_state {scalar_t__ opcode; int result_obj; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_object_type ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,union acpi_operand_object*) ;
 int VAR_1 ;







 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (union acpi_operand_object**,int,struct acpi_walk_state*) ;
 int FUNC_4 (union acpi_operand_object*,union acpi_operand_object*,union acpi_operand_object**,struct acpi_walk_state*) ;
 int FUNC_5 (union acpi_operand_object*,union acpi_operand_object*,int *) ;
 int FUNC_6 (struct acpi_namespace_node*,union acpi_operand_object*,int ) ;
 union acpi_operand_object* FUNC_7 (struct acpi_namespace_node*) ;
 int FUNC_8 (struct acpi_namespace_node*) ;
 int FUNC_9 (union acpi_operand_object*) ;
 int FUNC_10 (int) ;
 int VAR_4 ;
 int FUNC_11 (int ) ;

acpi_status
FUNC_12(union acpi_operand_object *VAR_5,
        struct acpi_namespace_node *VAR_6,
        struct acpi_walk_state *VAR_7,
        u8 VAR_8)
{
 acpi_status VAR_9 = VAR_2;
 union acpi_operand_object *VAR_10;
 union acpi_operand_object *VAR_11;
 acpi_object_type VAR_12;

 FUNC_2(VAR_4, VAR_5);



 VAR_12 = FUNC_8(VAR_6);
 VAR_10 = FUNC_7(VAR_6);

 FUNC_0((VAR_0, "Storing %p(%s) into node %p(%s)\n",
     VAR_5,
     FUNC_9(VAR_5), VAR_6,
     FUNC_10(VAR_12)));





 VAR_9 = FUNC_3(&VAR_5, VAR_12, VAR_7);
 if (FUNC_1(VAR_9)) {
  FUNC_11(VAR_9);
 }



 if ((!VAR_8) ||
     ((VAR_7->opcode == VAR_3) &&
      (VAR_12 != 129) &&
      (VAR_12 != 131) &&
      (VAR_12 != 130))) {






  VAR_12 = VAR_1;
 }



 switch (VAR_12) {
 case 133:
 case 129:
 case 131:
 case 130:



  VAR_9 = FUNC_5(VAR_5, VAR_10,
           &VAR_7->result_obj);
  break;

 case 132:
 case 128:
 case 134:







  VAR_9 =
      FUNC_4(VAR_5, VAR_10,
         &VAR_11, VAR_7);
  if (FUNC_1(VAR_9)) {
   FUNC_11(VAR_9);
  }

  if (VAR_11 != VAR_10) {
   VAR_9 =
       FUNC_6(VAR_6, VAR_11,
        VAR_11->common.type);

   FUNC_0((VAR_0,
       "Store %s into %s via Convert/Attach\n",
       FUNC_9
       (VAR_5),
       FUNC_9
       (VAR_11)));
  }
  break;

 default:

  FUNC_0((VAR_0,
      "Storing %s (%p) directly into node (%p) with no implicit conversion\n",
      FUNC_9(VAR_5),
      VAR_5, VAR_6));



  VAR_9 = FUNC_6(VAR_6, VAR_5,
            VAR_5->common.type);
  break;
 }

 FUNC_11(VAR_9);
}
