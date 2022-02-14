
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;
typedef int acpi_adr_space_type ;
typedef int acpi_adr_space_setup ;
typedef int acpi_adr_space_handler ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int (*) (int ,int ,int ,int ,void*)) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct acpi_namespace_node*,int ) ;
 int FUNC_3 (struct acpi_namespace_node*,int ,int ,int ,void*) ;
 struct acpi_namespace_node* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

acpi_status
FUNC_8(acpi_handle VAR_2,
       acpi_adr_space_type VAR_3,
       acpi_adr_space_handler VAR_4,
       acpi_adr_space_setup VAR_5, void *VAR_6)
{
 struct acpi_namespace_node *VAR_7;
 acpi_status VAR_8;

 FUNC_1(FUNC_8);



 if (!VAR_2) {
  FUNC_7(VAR_1);
 }

 VAR_8 = FUNC_5(VAR_0);
 if (FUNC_0(VAR_8)) {
  FUNC_7(VAR_8);
 }



 VAR_7 = FUNC_4(VAR_2);
 if (!VAR_7) {
  VAR_8 = VAR_1;
  goto unlock_and_exit;
 }



 VAR_8 =
     FUNC_3(VAR_7, VAR_3, VAR_4, VAR_5,
       VAR_6);
 if (FUNC_0(VAR_8)) {
  goto unlock_and_exit;
 }



 VAR_8 = FUNC_2(VAR_7, VAR_3);

      unlock_and_exit:
 (void)FUNC_6(VAR_0);
 FUNC_7(VAR_8);
}
