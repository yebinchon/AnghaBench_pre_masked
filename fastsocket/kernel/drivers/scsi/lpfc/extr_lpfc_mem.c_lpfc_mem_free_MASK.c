
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_dma_pool {int current_count; TYPE_1__* elements; } ;
struct lpfc_hba {int * lpfc_scsi_dma_buf_pool; int * lpfc_mbuf_pool; int * mbox_mem_pool; int * nlp_mem_pool; int * rrq_pool; int * lpfc_hbq_pool; int * lpfc_hrb_pool; int * lpfc_drb_pool; struct lpfc_dma_pool lpfc_mbuf_safety_pool; } ;
struct TYPE_2__ {int phys; int virt; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;

void
FUNC_5(struct lpfc_hba *VAR_0)
{
 int VAR_1;
 struct lpfc_dma_pool *VAR_2 = &VAR_0->lpfc_mbuf_safety_pool;


 FUNC_1(VAR_0);
 if (VAR_0->lpfc_drb_pool)
  FUNC_3(VAR_0->lpfc_drb_pool);
 VAR_0->lpfc_drb_pool = ((void*)0);
 if (VAR_0->lpfc_hrb_pool)
  FUNC_3(VAR_0->lpfc_hrb_pool);
 VAR_0->lpfc_hrb_pool = ((void*)0);

 if (VAR_0->lpfc_hbq_pool)
  FUNC_3(VAR_0->lpfc_hbq_pool);
 VAR_0->lpfc_hbq_pool = ((void*)0);

 if (VAR_0->rrq_pool)
  FUNC_2(VAR_0->rrq_pool);
 VAR_0->rrq_pool = ((void*)0);


 FUNC_2(VAR_0->nlp_mem_pool);
 VAR_0->nlp_mem_pool = ((void*)0);


 FUNC_2(VAR_0->mbox_mem_pool);
 VAR_0->mbox_mem_pool = ((void*)0);


 for (VAR_1 = 0; VAR_1 < VAR_2->current_count; VAR_1++)
  FUNC_4(VAR_0->lpfc_mbuf_pool, VAR_2->elements[VAR_1].virt,
         VAR_2->elements[VAR_1].phys);
 FUNC_0(VAR_2->elements);

 FUNC_3(VAR_0->lpfc_mbuf_pool);
 VAR_0->lpfc_mbuf_pool = ((void*)0);


 FUNC_3(VAR_0->lpfc_scsi_dma_buf_pool);
 VAR_0->lpfc_scsi_dma_buf_pool = ((void*)0);

 return;
}
