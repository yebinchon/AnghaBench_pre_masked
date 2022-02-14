
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_3__ {int type; } ;
union acpi_operand_object {TYPE_2__ integer; TYPE_1__ common; } ;
struct acpi_walk_state {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,union acpi_operand_object*) ;




 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,union acpi_operand_object*,union acpi_operand_object**,struct acpi_walk_state*) ;
 int FUNC_4 (union acpi_operand_object*,union acpi_operand_object*) ;
 int FUNC_5 (union acpi_operand_object*,union acpi_operand_object*) ;
 int FUNC_6 (union acpi_operand_object*) ;
 int FUNC_7 (union acpi_operand_object*,union acpi_operand_object**,struct acpi_walk_state*) ;
 int FUNC_8 (union acpi_operand_object*) ;
 int FUNC_9 (union acpi_operand_object*) ;
 int VAR_3 ;
 int FUNC_10 (int ) ;

acpi_status
FUNC_11(union acpi_operand_object *VAR_4,
          union acpi_operand_object *VAR_5,
          union acpi_operand_object **VAR_6,
          struct acpi_walk_state *VAR_7)
{
 union acpi_operand_object *VAR_8;
 acpi_status VAR_9 = VAR_2;

 FUNC_1(VAR_3, VAR_4);

 VAR_8 = VAR_4;
 if (!VAR_5) {





  VAR_9 =
      FUNC_7(VAR_8, VAR_6,
          VAR_7);
  FUNC_10(VAR_9);
 }

 if (VAR_4->common.type != VAR_5->common.type) {
  VAR_9 = FUNC_3(VAR_5->common.type,
       VAR_4,
       &VAR_8,
       VAR_7);
  if (FUNC_0(VAR_9)) {
   FUNC_10(VAR_9);
  }

  if (VAR_4 == VAR_8) {




   *VAR_6 = VAR_4;
   FUNC_10(VAR_2);
  }
 }





 switch (VAR_5->common.type) {
 case 130:

  VAR_5->integer.value = VAR_8->integer.value;



  FUNC_6(VAR_5);
  break;

 case 128:

  VAR_9 =
      FUNC_5(VAR_8, VAR_5);
  break;

 case 131:

  VAR_9 =
      FUNC_4(VAR_8, VAR_5);
  break;

 case 129:

  VAR_9 =
      FUNC_7(VAR_8, &VAR_5,
          VAR_7);
  break;

 default:



  FUNC_2((VAR_0, "Store into type %s not implemented",
         FUNC_8(VAR_5)));

  VAR_9 = VAR_1;
  break;
 }

 if (VAR_8 != VAR_4) {



  FUNC_9(VAR_8);
 }

 *VAR_6 = VAR_5;
 FUNC_10(VAR_9);
}
