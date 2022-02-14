
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_namespace_node {scalar_t__ type; } ;
struct acpi_buffer {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct acpi_namespace_node* FUNC_2 (int ) ;
 int FUNC_3 (struct acpi_buffer*) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;

__attribute__((used)) static acpi_status
FUNC_5(acpi_handle VAR_5,
       struct acpi_buffer *VAR_6,
       struct acpi_namespace_node **VAR_7)
{
 acpi_status VAR_8;
 struct acpi_namespace_node *VAR_9;

 FUNC_1(VAR_4);




 if (!VAR_5) {
  FUNC_4(VAR_1);
 }

 VAR_9 = FUNC_2(VAR_5);
 if (!VAR_9) {
  FUNC_4(VAR_1);
 }

 if (VAR_9->type != VAR_0) {
  FUNC_4(VAR_3);
 }
 VAR_8 = FUNC_3(VAR_6);
 if (FUNC_0(VAR_8)) {
  FUNC_4(VAR_8);
 }

 *VAR_7 = VAR_9;
 FUNC_4(VAR_2);
}
