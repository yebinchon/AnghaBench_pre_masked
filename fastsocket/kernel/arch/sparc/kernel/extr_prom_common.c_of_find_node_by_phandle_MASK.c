
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {scalar_t__ node; struct device_node* allnext; } ;
typedef scalar_t__ phandle ;


 struct device_node* VAR_0 ;

struct device_node *FUNC_0(phandle VAR_1)
{
 struct device_node *VAR_2;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->allnext)
  if (VAR_2->node == VAR_1)
   break;

 return VAR_2;
}
