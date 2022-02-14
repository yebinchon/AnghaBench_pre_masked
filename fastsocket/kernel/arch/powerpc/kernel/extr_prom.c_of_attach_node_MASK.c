
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {TYPE_1__* parent; struct device_node* allnext; struct device_node* sibling; } ;
struct TYPE_2__ {struct device_node* child; } ;


 struct device_node* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct device_node *VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(&VAR_1, VAR_3);
 VAR_2->sibling = VAR_2->parent->child;
 VAR_2->allnext = VAR_0;
 VAR_2->parent->child = VAR_2;
 VAR_0 = VAR_2;
 FUNC_1(&VAR_1, VAR_3);
}
