
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_namespace_node {struct acpi_namespace_node* child; struct acpi_namespace_node* peer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct acpi_namespace_node*) ;
 int VAR_0 ;
 int FUNC_2 (struct acpi_namespace_node*) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_3(struct acpi_namespace_node *VAR_3)
{
 struct acpi_namespace_node *VAR_4;
 struct acpi_namespace_node *VAR_5;

 FUNC_1(VAR_1, VAR_3);

 if (!VAR_3) {
  VAR_2;
 }



 VAR_4 = VAR_3->child;
 while (VAR_4) {



  if (VAR_4->child) {
   FUNC_0((VAR_0, "Found a grandchild! P=%p C=%p",
        VAR_3, VAR_4));
  }





  VAR_5 = VAR_4;
  VAR_4 = VAR_4->peer;
  FUNC_2(VAR_5);
 };



 VAR_3->child = ((void*)0);
 VAR_2;
}
