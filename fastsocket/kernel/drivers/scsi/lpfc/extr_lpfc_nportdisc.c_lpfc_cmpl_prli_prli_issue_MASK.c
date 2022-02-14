
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {scalar_t__ port_type; scalar_t__ cfg_restrict_login; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_type; int nlp_state; void* nlp_prev_state; int nlp_flag; int nlp_fcp_info; } ;
struct TYPE_6__ {scalar_t__ ulpStatus; } ;
struct TYPE_4__ {struct lpfc_iocbq* rsp_iocb; } ;
struct lpfc_iocbq {TYPE_3__ iocb; TYPE_1__ context_un; } ;
struct lpfc_hba {int dummy; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_5__ {scalar_t__ acceptRspCode; scalar_t__ prliType; scalar_t__ Retry; scalar_t__ targetFunc; scalar_t__ initiatorFunc; } ;
typedef TYPE_2__ PRLI ;
typedef TYPE_3__ IOCB_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct Scsi_Host* FUNC_3 (struct lpfc_vport*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static uint32_t
FUNC_6(struct lpfc_vport *VAR_11, struct lpfc_nodelist *VAR_12,
     void *VAR_13, uint32_t VAR_14)
{
 struct Scsi_Host *VAR_15 = FUNC_3(VAR_11);
 struct lpfc_iocbq *VAR_16, *VAR_17;
 struct lpfc_hba *VAR_18 = VAR_11->phba;
 IOCB_t *VAR_19;
 PRLI *VAR_20;

 VAR_16 = (struct lpfc_iocbq *) VAR_13;
 VAR_17 = VAR_16->context_un.rsp_iocb;
 VAR_20 = (PRLI *)FUNC_0(VAR_18, VAR_16, VAR_17);

 VAR_19 = &VAR_17->iocb;
 if (VAR_19->ulpStatus) {
  if ((VAR_11->port_type == VAR_0) &&
      VAR_11->cfg_restrict_login) {
   goto out;
  }
  VAR_12->nlp_prev_state = VAR_6;
  FUNC_2(VAR_11, VAR_12, VAR_7);
  return VAR_12->nlp_state;
 }


 VAR_12->nlp_type &= ~(VAR_3 | VAR_2);
 VAR_12->nlp_fcp_info &= ~VAR_1;
 if ((VAR_20->acceptRspCode == VAR_10) &&
     (VAR_20->prliType == VAR_9)) {
  if (VAR_20->initiatorFunc)
   VAR_12->nlp_type |= VAR_2;
  if (VAR_20->targetFunc)
   VAR_12->nlp_type |= VAR_3;
  if (VAR_20->Retry)
   VAR_12->nlp_fcp_info |= VAR_1;
 }
 if (!(VAR_12->nlp_type & VAR_3) &&
     (VAR_11->port_type == VAR_0) &&
      VAR_11->cfg_restrict_login) {
out:
  FUNC_4(VAR_15->host_lock);
  VAR_12->nlp_flag |= VAR_8;
  FUNC_5(VAR_15->host_lock);
  FUNC_1(VAR_11, VAR_12, 0);

  VAR_12->nlp_prev_state = VAR_6;
  FUNC_2(VAR_11, VAR_12, VAR_5);
  return VAR_12->nlp_state;
 }

 VAR_12->nlp_prev_state = VAR_6;
 if (VAR_12->nlp_type & VAR_3)
  FUNC_2(VAR_11, VAR_12, VAR_4);
 else
  FUNC_2(VAR_11, VAR_12, VAR_7);
 return VAR_12->nlp_state;
}
