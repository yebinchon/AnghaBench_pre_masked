
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_tt {scalar_t__ sg; } ;
struct ttm_mem_reg {struct nouveau_mem* mm_node; } ;
struct TYPE_2__ {int dma_address; } ;
struct nouveau_sgdma_be {TYPE_1__ ttm; } ;
struct nouveau_mem {int pages; scalar_t__ sg; } ;



__attribute__((used)) static int
FUNC_0(struct ttm_tt *VAR_0, struct ttm_mem_reg *VAR_1)
{
 struct nouveau_sgdma_be *VAR_2 = (struct nouveau_sgdma_be *)VAR_0;
 struct nouveau_mem *VAR_3 = VAR_1->mm_node;


 if (VAR_0->sg) {
  VAR_3->sg = VAR_0->sg;
 } else
  VAR_3->pages = VAR_2->ttm.dma_address;
 return 0;
}
