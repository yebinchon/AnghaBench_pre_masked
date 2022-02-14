
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {struct device_node* allnext; } ;


 struct device_node* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct device_node *FUNC_4(struct device_node *VAR_2)
{
 struct device_node *VAR_3;

 FUNC_2(&VAR_1);
 VAR_3 = VAR_2 ? VAR_2->allnext : VAR_0;
 for (; VAR_3 != 0; VAR_3 = VAR_3->allnext)
  if (FUNC_0(VAR_3))
   break;
 FUNC_1(VAR_2);
 FUNC_3(&VAR_1);
 return VAR_3;
}
