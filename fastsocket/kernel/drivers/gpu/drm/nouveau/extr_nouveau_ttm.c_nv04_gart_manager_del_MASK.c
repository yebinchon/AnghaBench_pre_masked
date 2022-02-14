
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_mem_type_manager {int dummy; } ;
struct ttm_mem_reg {struct nouveau_mem* mm_node; } ;
struct nouveau_mem {TYPE_1__* vma; } ;
struct TYPE_2__ {scalar_t__ node; } ;


 int FUNC_0 (struct nouveau_mem*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(struct ttm_mem_type_manager *VAR_0, struct ttm_mem_reg *VAR_1)
{
 struct nouveau_mem *VAR_2 = VAR_1->mm_node;
 if (VAR_2->vma[0].node)
  FUNC_1(&VAR_2->vma[0]);
 FUNC_0(VAR_1->mm_node);
 VAR_1->mm_node = ((void*)0);
}
