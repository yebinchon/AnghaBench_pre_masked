
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_namespace_node {scalar_t__ type; struct acpi_namespace_node* peer; } ;
typedef scalar_t__ acpi_object_type ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 struct acpi_namespace_node* FUNC_1 (struct acpi_namespace_node*,struct acpi_namespace_node*) ;

struct acpi_namespace_node *FUNC_2(acpi_object_type VAR_1,
       struct
       acpi_namespace_node
       *VAR_2,
       struct
       acpi_namespace_node
       *VAR_3)
{
 struct acpi_namespace_node *VAR_4 = ((void*)0);

 FUNC_0();

 VAR_4 = FUNC_1(VAR_2, VAR_3);




 if (VAR_1 == VAR_0) {



  return (VAR_4);
 }



 while (VAR_4) {



  if (VAR_4->type == VAR_1) {
   return (VAR_4);
  }



  VAR_4 = VAR_4->peer;
 }



 return (((void*)0));
}
