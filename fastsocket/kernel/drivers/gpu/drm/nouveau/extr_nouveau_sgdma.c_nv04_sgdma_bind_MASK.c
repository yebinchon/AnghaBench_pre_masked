
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ttm_tt {scalar_t__ sg; } ;
struct ttm_mem_reg {int num_pages; struct nouveau_mem* mm_node; } ;
struct TYPE_2__ {int dma_address; } ;
struct nouveau_sgdma_be {struct nouveau_mem* node; TYPE_1__ ttm; } ;
struct nouveau_mem {int * vma; int pages; scalar_t__ sg; } ;


 int FUNC_0 (int *,int ,int,struct nouveau_mem*) ;
 int FUNC_1 (int *,int ,int,struct nouveau_mem*) ;

__attribute__((used)) static int
FUNC_2(struct ttm_tt *VAR_0, struct ttm_mem_reg *VAR_1)
{
 struct nouveau_sgdma_be *VAR_2 = (struct nouveau_sgdma_be *)VAR_0;
 struct nouveau_mem *VAR_3 = VAR_1->mm_node;
 u64 VAR_4 = VAR_1->num_pages << 12;

 if (VAR_0->sg) {
  VAR_3->sg = VAR_0->sg;
  FUNC_1(&VAR_3->vma[0], 0, VAR_4, VAR_3);
 } else {
  VAR_3->pages = VAR_2->ttm.dma_address;
  FUNC_0(&VAR_3->vma[0], 0, VAR_4, VAR_3);
 }

 VAR_2->node = VAR_3;
 return 0;
}
