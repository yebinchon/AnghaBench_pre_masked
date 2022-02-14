
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_dma_pool {size_t current_count; size_t max_count; TYPE_1__* elements; } ;
struct lpfc_hba {int lpfc_mbuf_pool; struct lpfc_dma_pool lpfc_mbuf_safety_pool; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int phys; void* virt; } ;


 int FUNC_0 (int ,void*,int ) ;

void
FUNC_1(struct lpfc_hba * VAR_0, void *VAR_1, dma_addr_t VAR_2)
{
 struct lpfc_dma_pool *VAR_3 = &VAR_0->lpfc_mbuf_safety_pool;

 if (VAR_3->current_count < VAR_3->max_count) {
  VAR_3->elements[VAR_3->current_count].virt = VAR_1;
  VAR_3->elements[VAR_3->current_count].phys = VAR_2;
  VAR_3->current_count++;
 } else {
  FUNC_0(VAR_0->lpfc_mbuf_pool, VAR_1, VAR_2);
 }
 return;
}
