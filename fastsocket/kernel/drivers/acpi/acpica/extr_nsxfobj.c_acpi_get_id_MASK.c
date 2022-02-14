
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_namespace_node {int owner_id; } ;
typedef int acpi_status ;
typedef int acpi_owner_id ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct acpi_namespace_node* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

acpi_status FUNC_4(acpi_handle VAR_2, acpi_owner_id * VAR_3)
{
 struct acpi_namespace_node *VAR_4;
 acpi_status VAR_5;



 if (!VAR_3) {
  return (VAR_1);
 }

 VAR_5 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_5)) {
  return (VAR_5);
 }



 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4) {
  (void)FUNC_3(VAR_0);
  return (VAR_1);
 }

 *VAR_3 = VAR_4->owner_id;

 VAR_5 = FUNC_3(VAR_0);
 return (VAR_5);
}
