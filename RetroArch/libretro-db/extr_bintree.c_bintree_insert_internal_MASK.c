
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bintree_node {struct bintree_node* right; struct bintree_node* left; void* value; } ;
struct TYPE_3__ {int (* cmp ) (void*,void*,int ) ;int ctx; } ;
typedef TYPE_1__ bintree_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bintree_node*) ;
 void* FUNC_1 (struct bintree_node*) ;
 int FUNC_2 (void*,void*,int ) ;

__attribute__((used)) static int FUNC_3(bintree_t *VAR_1, struct bintree_node *VAR_2, void *VAR_3)
{
   int VAR_4 = 0;

   if (FUNC_0(VAR_2))
   {
      VAR_2->left = FUNC_1(VAR_2);
      VAR_2->right = FUNC_1(VAR_2);
      VAR_2->value = VAR_3;

      return 0;
   }

   VAR_4 = VAR_1->cmp(VAR_2->value, VAR_3, VAR_1->ctx);

   if (VAR_4 > 0)
      return FUNC_3(VAR_1, VAR_2->left, VAR_3);
   else if (VAR_4 < 0)
      return FUNC_3(VAR_1, VAR_2->right, VAR_3);
   return -VAR_0;
}
