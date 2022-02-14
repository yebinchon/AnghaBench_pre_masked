
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* ctx; int cmp; int root; } ;
typedef TYPE_1__ bintree_t ;
typedef int bintree_cmp_func ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int,int) ;

bintree_t *FUNC_2(bintree_cmp_func VAR_0, void *VAR_1)
{
   bintree_t *VAR_2 = (bintree_t*)FUNC_1(1, sizeof(*VAR_2));

   if (!VAR_2)
      return ((void*)0);

   VAR_2->root = FUNC_0(((void*)0));
   VAR_2->cmp = VAR_0;
   VAR_2->ctx = VAR_1;

   return VAR_2;
}
