
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {int * pages; } ;
struct ttm_dma_tt {int * dma_address; struct ttm_tt ttm; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct ttm_dma_tt *VAR_0)
{
 struct ttm_tt *VAR_1 = &VAR_0->ttm;

 FUNC_0(VAR_1->pages);
 VAR_1->pages = ((void*)0);
 FUNC_0(VAR_0->dma_address);
 VAR_0->dma_address = ((void*)0);
}
