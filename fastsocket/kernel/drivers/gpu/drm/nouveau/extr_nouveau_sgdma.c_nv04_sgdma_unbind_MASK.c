
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_tt {int dummy; } ;
struct nouveau_sgdma_be {TYPE_1__* node; } ;
struct TYPE_2__ {int * vma; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(struct ttm_tt *VAR_0)
{
 struct nouveau_sgdma_be *VAR_1 = (struct nouveau_sgdma_be *)VAR_0;
 FUNC_0(&VAR_1->node->vma[0]);
 return 0;
}
