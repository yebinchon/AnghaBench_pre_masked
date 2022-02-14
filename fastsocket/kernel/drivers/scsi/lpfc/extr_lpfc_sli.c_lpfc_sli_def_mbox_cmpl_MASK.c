
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint16_t ;
struct lpfc_vport {int fc_flag; int vpi_state; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_hba {int mbox_mem_pool; TYPE_3__* pport; } ;
struct lpfc_dmabuf {int phys; int virt; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_12__ {int vpi; } ;
struct TYPE_13__ {TYPE_1__ varRegLogin; int * varWords; } ;
struct TYPE_15__ {scalar_t__ mbxCommand; scalar_t__ mbxStatus; TYPE_2__ un; } ;
struct TYPE_16__ {int mqe; TYPE_4__ mb; } ;
struct TYPE_17__ {void (* mbox_cmpl ) (struct lpfc_hba*,TYPE_6__*) ;TYPE_5__ u; int * context2; scalar_t__ context1; struct lpfc_vport* vport; } ;
struct TYPE_14__ {int load_flag; } ;
typedef TYPE_6__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ) ;
 int VAR_13 ;
 int FUNC_3 (struct lpfc_nodelist*) ;
 int FUNC_4 (struct lpfc_hba*,int ,int,char*) ;
 struct Scsi_Host* FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (struct lpfc_hba*,TYPE_6__*) ;
 int FUNC_7 (struct lpfc_hba*,TYPE_6__*,int ) ;
 int FUNC_8 (struct lpfc_hba*,int ,int ,TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

void
FUNC_12(struct lpfc_hba *VAR_14, LPFC_MBOXQ_t *VAR_15)
{
 struct lpfc_vport *VAR_16 = VAR_15->vport;
 struct lpfc_dmabuf *VAR_17;
 struct lpfc_nodelist *VAR_18;
 struct Scsi_Host *VAR_19;
 uint16_t VAR_20, VAR_21;
 int VAR_22;

 VAR_17 = (struct lpfc_dmabuf *) (VAR_15->context1);

 if (VAR_17) {
  FUNC_2(VAR_14, VAR_17->virt, VAR_17->phys);
  FUNC_1(VAR_17);
 }





 if (!(VAR_14->pport->load_flag & VAR_0) &&
     VAR_15->u.mb.mbxCommand == VAR_10 &&
     !VAR_15->u.mb.mbxStatus) {
  VAR_20 = VAR_15->u.mb.un.varWords[0];
  VAR_21 = VAR_15->u.mb.un.varRegLogin.vpi;
  FUNC_8(VAR_14, VAR_21, VAR_20, VAR_15);
  VAR_15->mbox_cmpl = FUNC_12;
  VAR_22 = FUNC_7(VAR_14, VAR_15, VAR_9);
  if (VAR_22 != VAR_8)
   return;
 }

 if ((VAR_15->u.mb.mbxCommand == VAR_11) &&
  !(VAR_14->pport->load_flag & VAR_0) &&
  !VAR_15->u.mb.mbxStatus) {
  VAR_19 = FUNC_5(VAR_16);
  FUNC_10(VAR_19->host_lock);
  VAR_16->vpi_state |= VAR_5;
  VAR_16->fc_flag &= ~VAR_1;
  FUNC_11(VAR_19->host_lock);
 }

 if (VAR_15->u.mb.mbxCommand == VAR_10) {
  VAR_18 = (struct lpfc_nodelist *)VAR_15->context2;
  FUNC_3(VAR_18);
  VAR_15->context2 = ((void*)0);
 }


 if ((VAR_15->u.mb.mbxCommand == VAR_7) &&
     (VAR_15->u.mb.mbxStatus == VAR_6))
  FUNC_4(VAR_14, VAR_2, VAR_3 | VAR_4,
    "2860 SLI authentication is required "
    "for INIT_LINK but has not done yet\n");

 if (FUNC_0(VAR_13, &VAR_15->u.mqe) == VAR_12)
  FUNC_6(VAR_14, VAR_15);
 else
  FUNC_9(VAR_15, VAR_14->mbox_mem_pool);
}
