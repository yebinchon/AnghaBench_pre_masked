
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bintree_node {struct bintree_node* parent; int value; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static struct bintree_node *FUNC_1(struct bintree_node *VAR_1)
{
   struct bintree_node *VAR_2 = (struct bintree_node *)
      FUNC_0(1, sizeof(struct bintree_node));

   if (!VAR_2)
      return ((void*)0);

   VAR_2->value = VAR_0;
   VAR_2->parent = VAR_1;

   return VAR_2;
}
