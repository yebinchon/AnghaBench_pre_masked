
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_namespace_node {int dummy; } ;
typedef int * acpi_string ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct acpi_namespace_node* VAR_4 ;
 scalar_t__ FUNC_3 (struct acpi_namespace_node*) ;
 int FUNC_4 (struct acpi_namespace_node*,int *,int ,struct acpi_namespace_node**) ;
 struct acpi_namespace_node* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;

acpi_status
FUNC_7(acpi_handle VAR_5,
  acpi_string VAR_6, acpi_handle * VAR_7)
{
 acpi_status VAR_8;
 struct acpi_namespace_node *VAR_9 = ((void*)0);
 struct acpi_namespace_node *VAR_10 = ((void*)0);

 FUNC_0();



 if (!VAR_7 || !VAR_6) {
  return (VAR_2);
 }



 if (VAR_5) {
  VAR_10 = FUNC_5(VAR_5);
  if (!VAR_10) {
   return (VAR_2);
  }
 }
 if (FUNC_6(VAR_6[0])) {





  if (!FUNC_1(VAR_6, VAR_1)) {
   *VAR_7 =
       FUNC_3(VAR_4);
   return (VAR_3);
  }
 } else if (!VAR_10) {



  return (VAR_2);
 }



 VAR_8 =
     FUNC_4(VAR_10, VAR_6, VAR_0, &VAR_9);
 if (FUNC_2(VAR_8)) {
  *VAR_7 = FUNC_3(VAR_9);
 }

 return (VAR_8);
}
