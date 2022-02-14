
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bintree_node {struct bintree_node* right; struct bintree_node* left; int * value; } ;


 int * VAR_0 ;
 int FUNC_0 (struct bintree_node*) ;

__attribute__((used)) static void FUNC_1(struct bintree_node *VAR_1)
{
   if (!VAR_1)
      return;

   if (VAR_1->value == VAR_0)
   {
      FUNC_0(VAR_1);
      return;
   }

   VAR_1->value = ((void*)0);
   FUNC_1(VAR_1->left);
   FUNC_1(VAR_1->right);
   FUNC_0(VAR_1);
}
