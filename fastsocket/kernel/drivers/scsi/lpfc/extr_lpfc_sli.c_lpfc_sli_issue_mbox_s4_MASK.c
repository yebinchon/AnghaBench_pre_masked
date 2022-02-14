
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int uint32_t ;
struct TYPE_16__ {int mbox_busy; } ;
struct lpfc_sli {int sli_flag; TYPE_2__ slistat; } ;
struct TYPE_15__ {int intr_enable; } ;
struct lpfc_hba {TYPE_5__* pport; int hbalock; TYPE_1__ sli4_hba; struct lpfc_sli sli; } ;
struct TYPE_14__ {int mbxCommand; } ;
struct TYPE_18__ {int mqe; TYPE_13__ mb; } ;
struct TYPE_20__ {TYPE_4__ u; TYPE_3__* vport; int mcqe; } ;
struct TYPE_19__ {int port_state; } ;
struct TYPE_17__ {int vpi; } ;
typedef TYPE_6__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct lpfc_hba*,TYPE_13__*) ;
 int FUNC_2 (struct lpfc_hba*,TYPE_6__*) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_hba*,TYPE_6__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (struct lpfc_hba*,int ,int,char*,int,int ,int ,int ,int ,int ,...) ;
 int FUNC_6 (struct lpfc_hba*) ;
 int FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (struct lpfc_hba*,TYPE_6__*) ;
 int FUNC_9 (struct lpfc_hba*,TYPE_6__*) ;
 int FUNC_10 (struct lpfc_hba*,TYPE_6__*) ;
 int FUNC_11 (struct lpfc_hba*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int
FUNC_15(struct lpfc_hba *VAR_15, LPFC_MBOXQ_t *VAR_16,
         uint32_t VAR_17)
{
 struct lpfc_sli *VAR_18 = &VAR_15->sli;
 unsigned long VAR_19;
 int VAR_20;


 FUNC_1(VAR_15, &VAR_16->u.mb);

 VAR_20 = FUNC_3(VAR_15);
 if (FUNC_14(VAR_20)) {
  FUNC_5(VAR_15, VAR_1, VAR_4 | VAR_5,
    "(%d):2544 Mailbox command x%x (x%x/x%x) "
    "cannot issue Data: x%x x%x\n",
    VAR_16->vport ? VAR_16->vport->vpi : 0,
    VAR_16->u.mb.mbxCommand,
    FUNC_10(VAR_15, VAR_16),
    FUNC_9(VAR_15, VAR_16),
    VAR_18->sli_flag, VAR_17);
  goto out_not_finished;
 }


 if (!VAR_15->sli4_hba.intr_enable) {
  if (VAR_17 == VAR_9)
   VAR_20 = FUNC_8(VAR_15, VAR_16);
  else
   VAR_20 = -VAR_0;
  if (VAR_20 != VAR_10)
   FUNC_5(VAR_15, VAR_3, VAR_4 | VAR_5,
     "(%d):2541 Mailbox command x%x "
     "(x%x/x%x) failure: "
     "mqe_sta: x%x mcqe_sta: x%x/x%x "
     "Data: x%x x%x\n,",
     VAR_16->vport ? VAR_16->vport->vpi : 0,
     VAR_16->u.mb.mbxCommand,
     FUNC_10(VAR_15,
         VAR_16),
     FUNC_9(VAR_15,
         VAR_16),
     FUNC_0(VAR_14, &VAR_16->u.mqe),
     FUNC_0(VAR_12, &VAR_16->mcqe),
     FUNC_0(VAR_11,
            &VAR_16->mcqe),
     VAR_18->sli_flag, VAR_17);
  return VAR_20;
 } else if (VAR_17 == VAR_9) {
  FUNC_5(VAR_15, VAR_3, VAR_4 | VAR_5,
    "(%d):2542 Try to issue mailbox command "
    "x%x (x%x/x%x) synchronously ahead of async"
    "mailbox command queue: x%x x%x\n",
    VAR_16->vport ? VAR_16->vport->vpi : 0,
    VAR_16->u.mb.mbxCommand,
    FUNC_10(VAR_15, VAR_16),
    FUNC_9(VAR_15, VAR_16),
    VAR_18->sli_flag, VAR_17);

  VAR_20 = FUNC_6(VAR_15);
  if (!VAR_20) {

   VAR_20 = FUNC_8(VAR_15, VAR_16);
   if (VAR_20 != VAR_10)
    FUNC_5(VAR_15, VAR_3,
     VAR_4 | VAR_5,
     "(%d):2597 Sync Mailbox command "
     "x%x (x%x/x%x) failure: "
     "mqe_sta: x%x mcqe_sta: x%x/x%x "
     "Data: x%x x%x\n,",
     VAR_16->vport ? VAR_16->vport->vpi : 0,
     VAR_16->u.mb.mbxCommand,
     FUNC_10(VAR_15,
         VAR_16),
     FUNC_9(VAR_15,
         VAR_16),
     FUNC_0(VAR_14, &VAR_16->u.mqe),
     FUNC_0(VAR_12, &VAR_16->mcqe),
     FUNC_0(VAR_11,
            &VAR_16->mcqe),
     VAR_18->sli_flag, VAR_17);

   FUNC_7(VAR_15);
  }
  return VAR_20;
 }


 VAR_20 = FUNC_2(VAR_15, VAR_16);
 if (VAR_20) {
  FUNC_5(VAR_15, VAR_1, VAR_4 | VAR_5,
    "(%d):2543 Mailbox command x%x (x%x/x%x) "
    "cannot issue Data: x%x x%x\n",
    VAR_16->vport ? VAR_16->vport->vpi : 0,
    VAR_16->u.mb.mbxCommand,
    FUNC_10(VAR_15, VAR_16),
    FUNC_9(VAR_15, VAR_16),
    VAR_18->sli_flag, VAR_17);
  goto out_not_finished;
 }


 VAR_18->slistat.mbox_busy++;
 FUNC_12(&VAR_15->hbalock, VAR_19);
 FUNC_4(VAR_15, VAR_16);
 FUNC_13(&VAR_15->hbalock, VAR_19);
 FUNC_5(VAR_15, VAR_2, VAR_4 | VAR_5,
   "(%d):0354 Mbox cmd issue - Enqueue Data: "
   "x%x (x%x/x%x) x%x x%x x%x\n",
   VAR_16->vport ? VAR_16->vport->vpi : 0xffffff,
   FUNC_0(VAR_13, &VAR_16->u.mqe),
   FUNC_10(VAR_15, VAR_16),
   FUNC_9(VAR_15, VAR_16),
   VAR_15->pport->port_state,
   VAR_18->sli_flag, VAR_8);

 FUNC_11(VAR_15);

 return VAR_6;

out_not_finished:
 return VAR_7;
}
