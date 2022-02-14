
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union sli4_qe {int dummy; } sli4_qe ;
typedef int uint32_t ;
struct lpfc_queue {int page_count; int entry_size; int entry_count; int entry_repost; struct lpfc_hba* phba; TYPE_4__* qe; int page_list; int child_list; int list; } ;
struct TYPE_5__ {int if_page_sz; int supported; } ;
struct TYPE_6__ {TYPE_1__ pc_sli4_params; } ;
struct lpfc_hba {TYPE_3__* pcidev; TYPE_2__ sli4_hba; } ;
struct lpfc_dmabuf {void* virt; int buffer_tag; int list; int phys; } ;
struct TYPE_8__ {void* address; } ;
struct TYPE_7__ {int dev; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (int *,int,int *,int ) ;
 int FUNC_3 (struct lpfc_dmabuf*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct lpfc_queue*) ;
 int FUNC_7 (void*,int ,int) ;

struct lpfc_queue *
FUNC_8(struct lpfc_hba *VAR_3, uint32_t VAR_4,
        uint32_t VAR_5)
{
 struct lpfc_queue *VAR_6;
 struct lpfc_dmabuf *VAR_7;
 int VAR_8, VAR_9;
 void *VAR_10;
 uint32_t VAR_11 = VAR_3->sli4_hba.pc_sli4_params.if_page_sz;

 if (!VAR_3->sli4_hba.pc_sli4_params.supported)
  VAR_11 = VAR_2;

 VAR_6 = FUNC_4(sizeof(struct lpfc_queue) +
   (sizeof(union sli4_qe) * VAR_5), VAR_0);
 if (!VAR_6)
  return ((void*)0);
 VAR_6->page_count = (FUNC_0(VAR_4 * VAR_5,
   VAR_11))/VAR_11;
 FUNC_1(&VAR_6->list);
 FUNC_1(&VAR_6->page_list);
 FUNC_1(&VAR_6->child_list);
 for (VAR_8 = 0, VAR_9 = 0; VAR_8 < VAR_6->page_count; VAR_8++) {
  VAR_7 = FUNC_4(sizeof(struct lpfc_dmabuf), VAR_0);
  if (!VAR_7)
   goto out_fail;
  VAR_7->virt = FUNC_2(&VAR_3->pcidev->dev,
        VAR_11, &VAR_7->phys,
        VAR_0);
  if (!VAR_7->virt) {
   FUNC_3(VAR_7);
   goto out_fail;
  }
  FUNC_7(VAR_7->virt, 0, VAR_11);
  VAR_7->buffer_tag = VAR_8;
  FUNC_5(&VAR_7->list, &VAR_6->page_list);

  VAR_10 = VAR_7->virt;
  for (; VAR_9 < VAR_5 &&
       VAR_10 < (VAR_11 + VAR_7->virt);
       VAR_9++, VAR_10 += VAR_4) {
   VAR_6->qe[VAR_9].address = VAR_10;
  }
 }
 VAR_6->entry_size = VAR_4;
 VAR_6->entry_count = VAR_5;






 VAR_6->entry_repost = (VAR_5 >> 3);
 if (VAR_6->entry_repost < VAR_1)
  VAR_6->entry_repost = VAR_1;
 VAR_6->phba = VAR_3;

 return VAR_6;
out_fail:
 FUNC_6(VAR_6);
 return ((void*)0);
}
