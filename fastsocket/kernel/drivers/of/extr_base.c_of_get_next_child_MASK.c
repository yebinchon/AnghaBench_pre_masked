
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {struct device_node* sibling; struct device_node* child; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct device_node *FUNC_4(const struct device_node *VAR_1,
 struct device_node *VAR_2)
{
 struct device_node *VAR_3;

 FUNC_2(&VAR_0);
 VAR_3 = VAR_2 ? VAR_2->sibling : VAR_1->child;
 for (; VAR_3; VAR_3 = VAR_3->sibling)
  if (FUNC_0(VAR_3))
   break;
 FUNC_1(VAR_2);
 FUNC_3(&VAR_0);
 return VAR_3;
}
