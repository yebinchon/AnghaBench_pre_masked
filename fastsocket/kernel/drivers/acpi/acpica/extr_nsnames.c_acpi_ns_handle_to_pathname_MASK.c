
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_namespace_node {int dummy; } ;
struct acpi_buffer {scalar_t__ pointer; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_size ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct acpi_namespace_node*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct acpi_namespace_node*) ;
 struct acpi_namespace_node* FUNC_5 (int ) ;
 int FUNC_6 (struct acpi_buffer*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;

acpi_status
FUNC_8(acpi_handle VAR_4,
      struct acpi_buffer * VAR_5)
{
 acpi_status VAR_6;
 struct acpi_namespace_node *VAR_7;
 acpi_size VAR_8;

 FUNC_2(VAR_3, VAR_4);

 VAR_7 = FUNC_5(VAR_4);
 if (!VAR_7) {
  FUNC_7(VAR_1);
 }



 VAR_8 = FUNC_4(VAR_7);
 if (!VAR_8) {
  FUNC_7(VAR_1);
 }



 VAR_6 = FUNC_6(VAR_5, VAR_8);
 if (FUNC_1(VAR_6)) {
  FUNC_7(VAR_6);
 }



 VAR_6 =
     FUNC_3(VAR_7, VAR_8, VAR_5->pointer);
 if (FUNC_1(VAR_6)) {
  FUNC_7(VAR_6);
 }

 FUNC_0((VAR_0, "%s [%X]\n",
     (char *)VAR_5->pointer, (u32) VAR_8));
 FUNC_7(VAR_2);
}
