
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union acpi_object {scalar_t__ type; } ;
typedef scalar_t__ u8 ;
struct acpi_object_list {int dummy; } ;
struct acpi_buffer {scalar_t__ length; int * pointer; } ;
typedef int acpi_string ;
typedef int acpi_status ;
typedef scalar_t__ acpi_object_type ;
typedef int acpi_handle ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int (*) (int ,int ,struct acpi_object_list*,struct acpi_buffer*,scalar_t__)) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int ,int ,struct acpi_object_list*,struct acpi_buffer*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;

acpi_status
FUNC_7(acpi_handle VAR_9,
      acpi_string VAR_10,
      struct acpi_object_list *VAR_11,
      struct acpi_buffer *VAR_12,
      acpi_object_type VAR_13)
{
 acpi_status VAR_14;
 u8 VAR_15 = VAR_7;

 FUNC_3(FUNC_7);



 if (!VAR_12) {
  FUNC_6(VAR_2);
 }

 if (VAR_12->length == VAR_0) {
  VAR_15 = VAR_8;
 }



 VAR_14 =
     FUNC_4(VAR_9, VAR_10, VAR_11,
     VAR_12);
 if (FUNC_1(VAR_14)) {
  FUNC_6(VAR_14);
 }



 if (VAR_13 == VAR_1) {
  FUNC_6(VAR_5);
 }

 if (VAR_12->length == 0) {



  FUNC_0((VAR_3, "No return value"));
  FUNC_6(VAR_4);
 }



 if (((union acpi_object *)VAR_12->pointer)->type == VAR_13) {
  FUNC_6(VAR_5);
 }



 FUNC_0((VAR_3,
      "Incorrect return type [%s] requested [%s]",
      FUNC_5(((union acpi_object *)VAR_12->
        pointer)->type),
      FUNC_5(VAR_13)));

 if (VAR_15) {



  FUNC_2(VAR_12->pointer);
  VAR_12->pointer = ((void*)0);
 }

 VAR_12->length = 0;
 FUNC_6(VAR_6);
}
