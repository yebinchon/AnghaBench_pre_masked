
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_namespace_node {struct acpi_namespace_node* peer; struct acpi_namespace_node* child; struct acpi_namespace_node* parent; } ;


 int FUNC_0 (int ,struct acpi_namespace_node*) ;
 int FUNC_1 (struct acpi_namespace_node*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct acpi_namespace_node *VAR_2)
{
 struct acpi_namespace_node *VAR_3;
 struct acpi_namespace_node *VAR_4;
 struct acpi_namespace_node *VAR_5;

 FUNC_0(VAR_0, VAR_2);

 VAR_3 = VAR_2->parent;

 VAR_4 = ((void*)0);
 VAR_5 = VAR_3->child;



 while (VAR_5 != VAR_2) {
  VAR_4 = VAR_5;
  VAR_5 = VAR_5->peer;
 }

 if (VAR_4) {



  VAR_4->peer = VAR_2->peer;
 } else {




  VAR_3->child = VAR_2->peer;
 }



 FUNC_1(VAR_2);
 VAR_1;
}
