
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_namespace_node {struct acpi_namespace_node* peer; struct acpi_namespace_node* child; } ;


 int FUNC_0 () ;

struct acpi_namespace_node *FUNC_1(struct acpi_namespace_node
        *VAR_0,
        struct acpi_namespace_node
        *VAR_1)
{
 FUNC_0();

 if (!VAR_1) {



  return VAR_0->child;
 }



 return VAR_1->peer;
}
