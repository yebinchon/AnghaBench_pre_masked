
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_namespace_node {int dummy; } ;
struct acpi_buffer {scalar_t__ pointer; int length; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct acpi_namespace_node*,struct acpi_buffer*) ;
 int FUNC_3 (char*,...) ;

void
FUNC_4(struct acpi_namespace_node *VAR_1,
       const char *VAR_2)
{
 struct acpi_buffer VAR_3;
 acpi_status VAR_4;

 if (!VAR_1) {
  FUNC_3("[NULL NAME]");
  return;
 }



 VAR_3.length = VAR_0;

 VAR_4 = FUNC_2(VAR_1, &VAR_3);
 if (FUNC_1(VAR_4)) {
  if (VAR_2) {
   FUNC_3("%s ", VAR_2);
  }

  FUNC_3("[%s] (Node %p)", (char *)VAR_3.pointer, VAR_1);
  FUNC_0(VAR_3.pointer);
 }
}
