
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_namespace_node {struct acpi_namespace_node* parent; } ;
typedef int acpi_size ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct acpi_namespace_node*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct acpi_namespace_node* VAR_3 ;

acpi_size FUNC_3(struct acpi_namespace_node *VAR_4)
{
 acpi_size VAR_5;
 struct acpi_namespace_node *VAR_6;

 FUNC_1();





 VAR_5 = 0;
 VAR_6 = VAR_4;

 while (VAR_6 && (VAR_6 != VAR_3)) {
  if (FUNC_2(VAR_6) != VAR_0) {
   FUNC_0((VAR_2,
        "Invalid Namespace Node (%p) while traversing namespace",
        VAR_6));
   return 0;
  }
  VAR_5 += VAR_1;
  VAR_6 = VAR_6->parent;
 }

 if (!VAR_5) {
  VAR_5 = 1;
 }

 return (VAR_5 + 1);
}
