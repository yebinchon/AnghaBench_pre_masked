
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_vport {scalar_t__ port_type; } ;
struct lpfc_sli_ring {int flag; } ;
struct lpfc_sli {size_t extra_ring; size_t fcp_ring; size_t next_ring; struct lpfc_sli_ring* ring; } ;
struct lpfc_hba {scalar_t__ link_state; scalar_t__ sli_rev; int mbox_mem_pool; struct lpfc_sli sli; } ;
struct TYPE_6__ {struct lpfc_vport* vport; int mbox_cmpl; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct lpfc_hba*,TYPE_1__*) ;
 int FUNC_1 (struct lpfc_vport*) ;
 int VAR_8 ;
 int FUNC_2 (struct lpfc_hba*,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

void
FUNC_5(struct lpfc_hba *VAR_9, struct lpfc_vport *VAR_10)
{
 LPFC_MBOXQ_t *VAR_11;
 struct lpfc_sli *VAR_12 = &VAR_9->sli;
 struct lpfc_sli_ring *VAR_13 = &VAR_12->ring[VAR_12->extra_ring];
 struct lpfc_sli_ring *VAR_14 = &VAR_12->ring[VAR_12->fcp_ring];
 struct lpfc_sli_ring *VAR_15 = &VAR_12->ring[VAR_12->next_ring];
 int VAR_16;





 if ((VAR_9->link_state >= VAR_1) ||
     (VAR_10->port_type != VAR_3) ||
  (VAR_9->sli_rev == VAR_4))
  return;


 if ((VAR_11 = FUNC_3(VAR_9->mbox_mem_pool, VAR_0)) != ((void*)0)) {
  VAR_9->link_state = VAR_1;
  FUNC_0(VAR_9, VAR_11);
  VAR_11->mbox_cmpl = VAR_8;
  VAR_11->vport = VAR_10;
  VAR_16 = FUNC_2(VAR_9, VAR_11, VAR_7);
  if (VAR_16 == VAR_6) {
   FUNC_4(VAR_11, VAR_9->mbox_mem_pool);
   FUNC_1(VAR_10);
   VAR_13->flag &= ~VAR_5;
   VAR_14->flag &= ~VAR_5;
   VAR_15->flag &= ~VAR_5;
   VAR_9->link_state = VAR_2;
  }
 }
}
