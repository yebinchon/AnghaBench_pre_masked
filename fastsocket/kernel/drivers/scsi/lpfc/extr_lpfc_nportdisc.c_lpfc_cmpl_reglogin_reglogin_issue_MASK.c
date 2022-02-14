
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {TYPE_3__* phba; int port_state; } ;
struct lpfc_nodelist {int nlp_type; int nlp_state; void* nlp_prev_state; int nlp_flag; int nlp_rpi; int nlp_last_elscmd; int nlp_delayfunc; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_8__ {int rpi; int vpi; } ;
struct TYPE_10__ {int * varWords; TYPE_2__ varRegLogin; } ;
struct TYPE_11__ {scalar_t__ mbxStatus; TYPE_4__ un; } ;
struct TYPE_7__ {TYPE_5__ mb; } ;
struct TYPE_12__ {TYPE_1__ u; } ;
struct TYPE_9__ {scalar_t__ sli_rev; } ;
typedef TYPE_5__ MAILBOX_t ;
typedef TYPE_6__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ,char*,int ,scalar_t__,int ,int ,int ) ;
 struct Scsi_Host* FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static uint32_t
FUNC_9(struct lpfc_vport *VAR_13,
      struct lpfc_nodelist *VAR_14,
      void *VAR_15,
      uint32_t VAR_16)
{
 struct Scsi_Host *VAR_17 = FUNC_4(VAR_13);
 LPFC_MBOXQ_t *VAR_18 = (LPFC_MBOXQ_t *) VAR_15;
 MAILBOX_t *VAR_19 = &VAR_18->u.mb;
 uint32_t VAR_20 = VAR_19->un.varWords[1];

 if (VAR_19->mbxStatus) {

  FUNC_3(VAR_13, VAR_1, VAR_2,
    "0246 RegLogin failed Data: x%x x%x x%x x%x "
     "x%x\n",
     VAR_20, VAR_19->mbxStatus, VAR_13->port_state,
     VAR_19->un.varRegLogin.vpi,
     VAR_19->un.varRegLogin.rpi);




  if (VAR_19->mbxStatus == VAR_4) {
   VAR_14->nlp_prev_state = VAR_10;
   FUNC_2(VAR_13, VAR_14, VAR_8);
   return VAR_14->nlp_state;
  }


  FUNC_5(&VAR_14->nlp_delayfunc,
     VAR_12 + FUNC_6(1000 * 1));
  FUNC_7(VAR_17->host_lock);
  VAR_14->nlp_flag |= VAR_5;
  FUNC_8(VAR_17->host_lock);
  VAR_14->nlp_last_elscmd = VAR_0;

  FUNC_0(VAR_13, VAR_14, 0);
  VAR_14->nlp_prev_state = VAR_10;
  FUNC_2(VAR_13, VAR_14, VAR_8);
  return VAR_14->nlp_state;
 }


 if (VAR_13->phba->sli_rev < VAR_3)
  VAR_14->nlp_rpi = VAR_19->un.varWords[0];

 VAR_14->nlp_flag |= VAR_7;


 if (!(VAR_14->nlp_type & VAR_6)) {
  VAR_14->nlp_prev_state = VAR_10;
  FUNC_2(VAR_13, VAR_14, VAR_9);
  FUNC_1(VAR_13, VAR_14, 0);
 } else {
  VAR_14->nlp_prev_state = VAR_10;
  FUNC_2(VAR_13, VAR_14, VAR_11);
 }
 return VAR_14->nlp_state;
}
