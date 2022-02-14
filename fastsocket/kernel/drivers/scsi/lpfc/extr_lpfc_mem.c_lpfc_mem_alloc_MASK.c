
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_nodelist {int dummy; } ;
struct lpfc_node_rrq {int dummy; } ;
struct lpfc_dma_pool {TYPE_1__* elements; scalar_t__ current_count; scalar_t__ max_count; } ;
struct lpfc_hba {scalar_t__ sli_rev; int cfg_sg_dma_buf_size; int * lpfc_scsi_dma_buf_pool; int * lpfc_mbuf_pool; int * mbox_mem_pool; int * nlp_mem_pool; int * rrq_pool; int * lpfc_hrb_pool; int * lpfc_drb_pool; int * lpfc_hbq_pool; int pcidev; struct lpfc_dma_pool lpfc_mbuf_safety_pool; } ;
struct lpfc_dmabuf {int dummy; } ;
struct TYPE_3__ {int phys; int virt; } ;
typedef int LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 void* FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *) ;
 void* FUNC_5 (char*,int ,int,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;

int
FUNC_8(struct lpfc_hba *VAR_9, int VAR_10)
{
 struct lpfc_dma_pool *VAR_11 = &VAR_9->lpfc_mbuf_safety_pool;
 int VAR_12;

 if (VAR_9->sli_rev == VAR_7) {

  if (VAR_9->cfg_sg_dma_buf_size < VAR_8)
   VAR_12 = VAR_9->cfg_sg_dma_buf_size;
  else
   VAR_12 = VAR_8;

  VAR_9->lpfc_scsi_dma_buf_pool =
   FUNC_5("lpfc_scsi_dma_buf_pool",
    VAR_9->pcidev,
    VAR_9->cfg_sg_dma_buf_size,
    VAR_12,
    0);
 } else {
  VAR_9->lpfc_scsi_dma_buf_pool =
   FUNC_5("lpfc_scsi_dma_buf_pool",
    VAR_9->pcidev, VAR_9->cfg_sg_dma_buf_size,
    VAR_10, 0);
 }

 if (!VAR_9->lpfc_scsi_dma_buf_pool)
  goto fail;

 VAR_9->lpfc_mbuf_pool = FUNC_5("lpfc_mbuf_pool", VAR_9->pcidev,
       VAR_2,
       VAR_10, 0);
 if (!VAR_9->lpfc_mbuf_pool)
  goto fail_free_dma_buf_pool;

 VAR_11->elements = FUNC_1(sizeof(struct lpfc_dmabuf) *
      VAR_5, VAR_1);
 if (!VAR_11->elements)
  goto fail_free_lpfc_mbuf_pool;

 VAR_11->max_count = 0;
 VAR_11->current_count = 0;
 for ( VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_11->elements[VAR_12].virt = FUNC_4(VAR_9->lpfc_mbuf_pool,
           VAR_1, &VAR_11->elements[VAR_12].phys);
  if (!VAR_11->elements[VAR_12].virt)
   goto fail_free_mbuf_pool;
  VAR_11->max_count++;
  VAR_11->current_count++;
 }

 VAR_9->mbox_mem_pool = FUNC_2(VAR_6,
        sizeof(LPFC_MBOXQ_t));
 if (!VAR_9->mbox_mem_pool)
  goto fail_free_mbuf_pool;

 VAR_9->nlp_mem_pool = FUNC_2(VAR_6,
      sizeof(struct lpfc_nodelist));
 if (!VAR_9->nlp_mem_pool)
  goto fail_free_mbox_pool;

 if (VAR_9->sli_rev == VAR_7) {
  VAR_9->rrq_pool =
   FUNC_2(VAR_6,
      sizeof(struct lpfc_node_rrq));
  if (!VAR_9->rrq_pool)
   goto fail_free_nlp_mem_pool;
  VAR_9->lpfc_hrb_pool = FUNC_5("lpfc_hrb_pool",
           VAR_9->pcidev,
           VAR_4, VAR_10, 0);
  if (!VAR_9->lpfc_hrb_pool)
   goto fail_free_rrq_mem_pool;

  VAR_9->lpfc_drb_pool = FUNC_5("lpfc_drb_pool",
           VAR_9->pcidev,
           VAR_3, VAR_10, 0);
  if (!VAR_9->lpfc_drb_pool)
   goto fail_free_hrb_pool;
  VAR_9->lpfc_hbq_pool = ((void*)0);
 } else {
  VAR_9->lpfc_hbq_pool = FUNC_5("lpfc_hbq_pool",
   VAR_9->pcidev, VAR_2, VAR_10, 0);
  if (!VAR_9->lpfc_hbq_pool)
   goto fail_free_nlp_mem_pool;
  VAR_9->lpfc_hrb_pool = ((void*)0);
  VAR_9->lpfc_drb_pool = ((void*)0);
 }

 return 0;
 fail_free_hrb_pool:
 FUNC_6(VAR_9->lpfc_hrb_pool);
 VAR_9->lpfc_hrb_pool = ((void*)0);
 fail_free_rrq_mem_pool:
 FUNC_3(VAR_9->rrq_pool);
 VAR_9->rrq_pool = ((void*)0);
 fail_free_nlp_mem_pool:
 FUNC_3(VAR_9->nlp_mem_pool);
 VAR_9->nlp_mem_pool = ((void*)0);
 fail_free_mbox_pool:
 FUNC_3(VAR_9->mbox_mem_pool);
 VAR_9->mbox_mem_pool = ((void*)0);
 fail_free_mbuf_pool:
 while (VAR_12--)
  FUNC_7(VAR_9->lpfc_mbuf_pool, VAR_11->elements[VAR_12].virt,
       VAR_11->elements[VAR_12].phys);
 FUNC_0(VAR_11->elements);
 fail_free_lpfc_mbuf_pool:
 FUNC_6(VAR_9->lpfc_mbuf_pool);
 VAR_9->lpfc_mbuf_pool = ((void*)0);
 fail_free_dma_buf_pool:
 FUNC_6(VAR_9->lpfc_scsi_dma_buf_pool);
 VAR_9->lpfc_scsi_dma_buf_pool = ((void*)0);
 fail:
 return -VAR_0;
}
