
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {scalar_t__ linux_phandle; struct device_node* allnext; } ;
typedef scalar_t__ phandle ;


 struct device_node* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct device_node *FUNC_3(phandle VAR_2)
{
 struct device_node *VAR_3;

 FUNC_1(&VAR_1);
 for (VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_3->allnext)
  if (VAR_3->linux_phandle == VAR_2)
   break;
 FUNC_0(VAR_3);
 FUNC_2(&VAR_1);
 return VAR_3;
}
