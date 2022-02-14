
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_pages; void* pages; } ;
struct ttm_dma_tt {TYPE_1__ ttm; void* dma_address; } ;


 void* FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct ttm_dma_tt *VAR_0)
{
 VAR_0->ttm.pages = FUNC_0(VAR_0->ttm.num_pages, sizeof(void*));
 VAR_0->dma_address = FUNC_0(VAR_0->ttm.num_pages,
         sizeof(*VAR_0->dma_address));
}
