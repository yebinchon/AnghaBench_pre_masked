
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {struct device_node* parent; } ;


 int VAR_0 ;
 int* FUNC_0 (struct device_node*,char*,int *) ;

int FUNC_1(struct device_node *VAR_1)
{
 const int *VAR_2;

 do {
  if (VAR_1->parent)
   VAR_1 = VAR_1->parent;
  VAR_2 = FUNC_0(VAR_1, "#size-cells", ((void*)0));
  if (VAR_2)
   return *VAR_2;
 } while (VAR_1->parent);

 return VAR_0;
}
