
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {union acpi_operand_object* object; int class; } ;
struct TYPE_3__ {int type; } ;
union acpi_operand_object {TYPE_2__ reference; TYPE_1__ common; } ;
struct acpi_walk_state {int dummy; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;


 int FUNC_1 (int ) ;
 int FUNC_2 (int ,union acpi_operand_object*) ;
 int FUNC_3 (union acpi_operand_object*) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 union acpi_operand_object* FUNC_4 (int ) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int VAR_9 ;
 int FUNC_6 (int ) ;

acpi_status
FUNC_7(union acpi_operand_object *VAR_10,
        union acpi_operand_object **VAR_11,
        struct acpi_walk_state *VAR_12)
{
 union acpi_operand_object *VAR_13;
 union acpi_operand_object *VAR_14;

 FUNC_2(VAR_9, VAR_10);

 *VAR_11 = ((void*)0);

 switch (FUNC_3(VAR_10)) {
 case 131:

  if (VAR_10->common.type != VAR_2) {
   FUNC_6(VAR_4);
  }




  switch (VAR_10->reference.class) {
  case 128:
  case 130:
  case 129:



   VAR_14 = VAR_10->reference.object;
   break;

  default:

   FUNC_1((VAR_5, "Unknown Reference Class %2.2X",
        VAR_10->reference.class));
   FUNC_6(VAR_3);
  }
  break;

 case 132:




  VAR_14 = VAR_10;
  break;

 default:

  FUNC_1((VAR_5, "Invalid descriptor type %X",
       FUNC_3(VAR_10)));
  FUNC_6(VAR_8);
 }



 VAR_13 =
     FUNC_4(VAR_2);
 if (!VAR_13) {
  FUNC_6(VAR_6);
 }

 VAR_13->reference.class = VAR_1;
 VAR_13->reference.object = VAR_14;
 *VAR_11 = VAR_13;

 FUNC_0((VAR_0,
     "Object %p Type [%s], returning Reference %p\n",
     VAR_10, FUNC_5(VAR_10),
     *VAR_11));

 FUNC_6(VAR_7);
}
