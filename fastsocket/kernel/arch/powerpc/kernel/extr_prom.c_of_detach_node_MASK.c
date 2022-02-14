
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {struct device_node* sibling; struct device_node* child; struct device_node* parent; struct device_node* allnext; } ;


 int VAR_0 ;
 struct device_node* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device_node*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct device_node *VAR_3)
{
 struct device_node *VAR_4;
 unsigned long VAR_5;

 FUNC_1(&VAR_2, VAR_5);

 VAR_4 = VAR_3->parent;
 if (!VAR_4)
  goto out_unlock;

 if (VAR_1 == VAR_3)
  VAR_1 = VAR_3->allnext;
 else {
  struct device_node *VAR_6;
  for (VAR_6 = VAR_1;
       VAR_6->allnext != VAR_3;
       VAR_6 = VAR_6->allnext)
   ;
  VAR_6->allnext = VAR_3->allnext;
 }

 if (VAR_4->child == VAR_3)
  VAR_4->child = VAR_3->sibling;
 else {
  struct device_node *VAR_7;
  for (VAR_7 = VAR_3->parent->child;
       VAR_7->sibling != VAR_3;
       VAR_7 = VAR_7->sibling)
   ;
  VAR_7->sibling = VAR_3->sibling;
 }

 FUNC_0(VAR_3, VAR_0);

out_unlock:
 FUNC_2(&VAR_2, VAR_5);
}
