
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int vpi; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_mqe {int dummy; } ;
typedef struct lpfc_mqe lpfc_mcqe ;
struct TYPE_16__ {int mbx_wq; } ;
struct TYPE_15__ {TYPE_7__* mbox_active; int sli_flag; int mbox_tmo; } ;
struct lpfc_hba {TYPE_5__ sli4_hba; int hbalock; TYPE_4__ sli; int work_ha; TYPE_3__* pport; int last_completion_time; TYPE_6__* mbox; } ;
struct lpfc_dmabuf {int dummy; } ;
struct TYPE_12__ {struct lpfc_mqe mqe; } ;
struct TYPE_18__ {int mbox_flag; struct lpfc_vport* vport; struct lpfc_nodelist* context2; struct lpfc_dmabuf* context1; scalar_t__ mbox_cmpl; TYPE_1__ u; } ;
struct TYPE_13__ {int * varWords; } ;
struct TYPE_17__ {TYPE_2__ un; } ;
struct TYPE_14__ {int work_port_lock; int work_port_events; } ;
typedef TYPE_6__ MAILBOX_t ;
typedef TYPE_7__ LPFC_MBOXQ_t ;


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
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct lpfc_hba*,TYPE_7__*) ;
 scalar_t__ FUNC_1 (int ,struct lpfc_mqe*) ;
 int FUNC_2 (int ,struct lpfc_mqe*,int) ;
 int FUNC_3 (int *) ;
 int VAR_14 ;
 int FUNC_4 (struct lpfc_vport*,int ,char*,int,int ,int ) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (struct lpfc_hba*,int ,int,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct lpfc_hba*,TYPE_7__*,int ) ;
 int FUNC_8 (TYPE_6__*,struct lpfc_mqe*,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_9 (struct lpfc_hba*,int ,int ,TYPE_7__*) ;
 int FUNC_10 (struct lpfc_hba*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static bool
FUNC_14(struct lpfc_hba *VAR_20, struct lpfc_mcqe *VAR_21)
{
 uint32_t VAR_22;
 MAILBOX_t *VAR_23, *VAR_24;
 struct lpfc_mqe *VAR_25;
 struct lpfc_vport *VAR_26;
 struct lpfc_nodelist *VAR_27;
 struct lpfc_dmabuf *VAR_28;
 unsigned long VAR_29;
 LPFC_MBOXQ_t *VAR_30;
 bool VAR_31 = 0;
 int VAR_32;


 if (!FUNC_1(VAR_18, VAR_21))
  goto out_no_mqe_complete;


 FUNC_11(&VAR_20->hbalock, VAR_29);
 VAR_30 = VAR_20->sli.mbox_active;
 if (FUNC_13(!VAR_30)) {
  FUNC_5(VAR_20, VAR_1, VAR_2,
    "1832 No pending MBOX command to handle\n");
  FUNC_12(&VAR_20->hbalock, VAR_29);
  goto out_no_mqe_complete;
 }
 FUNC_12(&VAR_20->hbalock, VAR_29);
 VAR_25 = &VAR_30->u.mqe;
 VAR_24 = (MAILBOX_t *)&VAR_30->u.mqe;
 VAR_23 = VAR_20->mbox;
 VAR_26 = VAR_30->vport;


 VAR_20->last_completion_time = VAR_14;
 FUNC_3(&VAR_20->sli.mbox_tmo);


 if (VAR_30->mbox_cmpl && VAR_23)
  FUNC_8(VAR_23, VAR_25, sizeof(struct lpfc_mqe));





 VAR_22 = FUNC_1(VAR_16, VAR_21);
 if (VAR_22 != VAR_12) {
  if (FUNC_1(VAR_17, VAR_25) == VAR_11)
   FUNC_2(VAR_17, VAR_25,
          (VAR_5 | VAR_22));
 }
 if (VAR_30->mbox_flag & VAR_6) {
  VAR_30->mbox_flag &= ~VAR_6;
  FUNC_4(VAR_26, VAR_4,
          "MBOX dflt rpi: status:x%x rpi:x%x",
          VAR_22,
          VAR_24->un.varWords[0], 0);
  if (VAR_22 == VAR_12) {
   VAR_28 = (struct lpfc_dmabuf *)(VAR_30->context1);
   VAR_27 = (struct lpfc_nodelist *)VAR_30->context2;



   FUNC_9(VAR_20, VAR_26->vpi,
      VAR_24->un.varWords[0], VAR_30);
   VAR_30->mbox_cmpl = VAR_15;
   VAR_30->context1 = VAR_28;
   VAR_30->context2 = VAR_27;
   VAR_30->vport = VAR_26;
   VAR_32 = FUNC_7(VAR_20, VAR_30, VAR_10);
   if (VAR_32 != VAR_8)
    FUNC_5(VAR_20, VAR_1, VAR_2 |
      VAR_3, "0385 rc should "
      "have been MBX_BUSY\n");
   if (VAR_32 != VAR_9)
    goto send_current_mbox;
  }
 }
 FUNC_11(&VAR_20->pport->work_port_lock, VAR_29);
 VAR_20->pport->work_port_events &= ~VAR_13;
 FUNC_12(&VAR_20->pport->work_port_lock, VAR_29);


 FUNC_11(&VAR_20->hbalock, VAR_29);
 FUNC_0(VAR_20, VAR_30);
 VAR_20->work_ha |= VAR_0;
 FUNC_12(&VAR_20->hbalock, VAR_29);
 VAR_31 = 1;

send_current_mbox:
 FUNC_11(&VAR_20->hbalock, VAR_29);

 VAR_20->sli.sli_flag &= ~VAR_7;

 VAR_20->sli.mbox_active = ((void*)0);
 FUNC_12(&VAR_20->hbalock, VAR_29);

 FUNC_10(VAR_20);
out_no_mqe_complete:
 if (FUNC_1(VAR_19, VAR_21))
  FUNC_6(VAR_20->sli4_hba.mbx_wq);
 return VAR_31;
}
