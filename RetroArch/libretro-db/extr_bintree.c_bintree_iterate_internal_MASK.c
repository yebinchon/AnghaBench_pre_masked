
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bintree_node {struct bintree_node* right; int value; struct bintree_node* left; } ;
typedef int (* bintree_iter_cb ) (int ,void*) ;


 scalar_t__ FUNC_0 (struct bintree_node*) ;

__attribute__((used)) static int FUNC_1(struct bintree_node *VAR_0,
      bintree_iter_cb VAR_1, void *VAR_2)
{
   int VAR_3;

   if (FUNC_0(VAR_0))
      return 0;

   if ((VAR_3 = FUNC_1(VAR_0->left, VAR_1, VAR_2)) != 0)
      return VAR_3;
   if ((VAR_3 = VAR_1(VAR_0->value, VAR_2)) != 0)
      return VAR_3;
   if ((VAR_3 = FUNC_1(VAR_0->right, VAR_1, VAR_2)) != 0)
      return VAR_3;

   return 0;
}
