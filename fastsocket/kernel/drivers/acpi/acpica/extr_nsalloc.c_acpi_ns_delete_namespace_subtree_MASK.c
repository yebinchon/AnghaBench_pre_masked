
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct acpi_namespace_node {struct acpi_namespace_node* parent; scalar_t__ child; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_namespace_node*) ;
 int FUNC_2 (struct acpi_namespace_node*) ;
 struct acpi_namespace_node* FUNC_3 (struct acpi_namespace_node*,struct acpi_namespace_node*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_4(struct acpi_namespace_node *VAR_2)
{
 struct acpi_namespace_node *VAR_3 = ((void*)0);
 u32 VAR_4 = 1;

 FUNC_0(VAR_0);

 if (!VAR_2) {
  VAR_1;
 }





 while (VAR_4 > 0) {



  VAR_3 = FUNC_3(VAR_2, VAR_3);
  if (VAR_3) {



   FUNC_2(VAR_3);



   if (VAR_3->child) {




    VAR_4++;
    VAR_2 = VAR_3;
    VAR_3 = ((void*)0);
   }
  } else {




   VAR_4--;





   FUNC_1(VAR_2);



   VAR_3 = VAR_2;



   VAR_2 = VAR_2->parent;
  }
 }

 VAR_1;
}
