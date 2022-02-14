
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {union acpi_operand_object* next_object; } ;
union acpi_operand_object {scalar_t__ type; union acpi_operand_object* object; TYPE_1__ common; } ;
typedef scalar_t__ u8 ;
struct acpi_namespace_node {scalar_t__ type; struct acpi_namespace_node* object; TYPE_1__ common; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_object_type ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (union acpi_operand_object*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (union acpi_operand_object*) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int FUNC_6 (union acpi_operand_object*) ;
 int FUNC_7 (union acpi_operand_object*) ;
 int VAR_6 ;
 int FUNC_8 (int ) ;

acpi_status
FUNC_9(struct acpi_namespace_node *VAR_7,
        union acpi_operand_object *VAR_8, acpi_object_type VAR_9)
{
 union acpi_operand_object *VAR_10;
 union acpi_operand_object *VAR_11;
 acpi_object_type VAR_12 = VAR_2;

 FUNC_2(VAR_6);




 if (!VAR_7) {



  FUNC_1((VAR_4, "Null NamedObj handle"));
  FUNC_8(VAR_3);
 }

 if (!VAR_8 && (VAR_2 != VAR_9)) {



  FUNC_1((VAR_4,
       "Null object, but type not ACPI_TYPE_ANY"));
  FUNC_8(VAR_3);
 }

 if (FUNC_3(VAR_7) != VAR_1) {



  FUNC_1((VAR_4, "Invalid handle %p [%s]",
       VAR_7, FUNC_6(VAR_7)));
  FUNC_8(VAR_3);
 }



 if (VAR_7->object == VAR_8) {
  FUNC_0((VAR_0,
      "Obj %p already installed in NameObj %p\n",
      VAR_8, VAR_7));

  FUNC_8(VAR_5);
 }



 if (!VAR_8) {
  VAR_10 = ((void*)0);
  VAR_12 = VAR_2;
 }





 else if ((FUNC_3(VAR_8) == VAR_1) &&
   ((struct acpi_namespace_node *)VAR_8)->object) {




  VAR_10 = ((struct acpi_namespace_node *)VAR_8)->object;
  VAR_12 = ((struct acpi_namespace_node *)VAR_8)->type;
 }





 else {
  VAR_10 = (union acpi_operand_object *)VAR_8;



  VAR_12 = VAR_9;
 }

 FUNC_0((VAR_0, "Installing %p into Node %p [%4.4s]\n",
     VAR_10, VAR_7, FUNC_7(VAR_7)));



 if (VAR_7->object) {
  FUNC_4(VAR_7);
 }

 if (VAR_10) {




  FUNC_5(VAR_10);





  VAR_11 = VAR_10;
  while (VAR_11->common.next_object) {
   VAR_11 = VAR_11->common.next_object;
  }



  VAR_11->common.next_object = VAR_7->object;
 }

 VAR_7->type = (u8) VAR_12;
 VAR_7->object = VAR_10;

 FUNC_8(VAR_5);
}
