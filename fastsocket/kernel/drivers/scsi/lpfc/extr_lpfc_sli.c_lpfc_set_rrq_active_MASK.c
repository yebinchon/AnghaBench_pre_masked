
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_5__ {int xri_bitmap; } ;
struct lpfc_nodelist {int nlp_DID; TYPE_3__* vport; TYPE_2__ active_rrqs; } ;
struct lpfc_node_rrq {int list; void* rxid; TYPE_3__* vport; int nlp_DID; struct lpfc_nodelist* ndlp; scalar_t__ rrq_stop_time; void* xritag; void* send_rrq; } ;
struct lpfc_hba {int cfg_enable_rrq; int fc_ratov; int hbalock; int hba_flag; int active_rrq_list; int rrq_pool; TYPE_1__* pport; } ;
struct TYPE_6__ {int load_flag; } ;
struct TYPE_4__ {int load_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*,void*,void*,int ,void*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 struct lpfc_node_rrq* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (void*,int ) ;

int
FUNC_10(struct lpfc_hba *VAR_7, struct lpfc_nodelist *VAR_8,
      uint16_t VAR_9, uint16_t VAR_10, uint16_t VAR_11)
{
 unsigned long VAR_12;
 struct lpfc_node_rrq *VAR_13;
 int VAR_14;

 if (!VAR_8)
  return -VAR_0;

 if (!VAR_7->cfg_enable_rrq)
  return -VAR_0;

 FUNC_7(&VAR_7->hbalock, VAR_12);
 if (VAR_7->pport->load_flag & VAR_1) {
  VAR_7->hba_flag &= ~VAR_3;
  goto out;
 }




 if (FUNC_0(VAR_8))
  goto out;

 if (VAR_8->vport && (VAR_8->vport->load_flag & VAR_1))
  goto out;

 if (FUNC_9(VAR_9, VAR_8->active_rrqs.xri_bitmap))
  goto out;

 FUNC_8(&VAR_7->hbalock, VAR_12);
 VAR_13 = FUNC_5(VAR_7->rrq_pool, VAR_2);
 if (!VAR_13) {
  FUNC_3(VAR_7, VAR_4, VAR_5,
    "3155 Unable to allocate RRQ xri:0x%x rxid:0x%x"
    " DID:0x%x Send:%d\n",
    VAR_9, VAR_10, VAR_8->nlp_DID, VAR_11);
  return -VAR_0;
 }
 if (VAR_7->cfg_enable_rrq == 1)
  VAR_13->send_rrq = VAR_11;
 else
  VAR_13->send_rrq = 0;
 VAR_13->xritag = VAR_9;
 VAR_13->rrq_stop_time = VAR_6 +
    FUNC_6(1000 * (VAR_7->fc_ratov + 1));
 VAR_13->ndlp = VAR_8;
 VAR_13->nlp_DID = VAR_8->nlp_DID;
 VAR_13->vport = VAR_8->vport;
 VAR_13->rxid = VAR_10;
 FUNC_7(&VAR_7->hbalock, VAR_12);
 VAR_14 = FUNC_2(&VAR_7->active_rrq_list);
 FUNC_1(&VAR_13->list, &VAR_7->active_rrq_list);
 VAR_7->hba_flag |= VAR_3;
 if (VAR_14)
  FUNC_4(VAR_7);
 FUNC_8(&VAR_7->hbalock, VAR_12);
 return 0;
out:
 FUNC_8(&VAR_7->hbalock, VAR_12);
 FUNC_3(VAR_7, VAR_4, VAR_5,
   "2921 Can't set rrq active xri:0x%x rxid:0x%x"
   " DID:0x%x Send:%d\n",
   VAR_9, VAR_10, VAR_8->nlp_DID, VAR_11);
 return -VAR_0;
}
