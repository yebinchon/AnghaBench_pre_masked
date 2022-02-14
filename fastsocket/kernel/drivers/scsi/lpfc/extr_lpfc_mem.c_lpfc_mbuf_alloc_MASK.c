
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_dma_pool {size_t current_count; TYPE_1__* elements; } ;
struct lpfc_hba {int hbalock; int lpfc_mbuf_pool; struct lpfc_dma_pool lpfc_mbuf_safety_pool; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int phys; void* virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void *
FUNC_3(struct lpfc_hba *VAR_2, int VAR_3, dma_addr_t *VAR_4)
{
 struct lpfc_dma_pool *VAR_5 = &VAR_2->lpfc_mbuf_safety_pool;
 unsigned long VAR_6;
 void *VAR_7;

 VAR_7 = FUNC_0(VAR_2->lpfc_mbuf_pool, VAR_0, VAR_4);

 FUNC_1(&VAR_2->hbalock, VAR_6);
 if (!VAR_7 && (VAR_3 & VAR_1) && VAR_5->current_count) {
  VAR_5->current_count--;
  VAR_7 = VAR_5->elements[VAR_5->current_count].virt;
  *VAR_4 = VAR_5->elements[VAR_5->current_count].phys;
 }
 FUNC_2(&VAR_2->hbalock, VAR_6);
 return VAR_7;
}
