
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct serv_parm {int dummy; } ;
struct lpfc_vport {int fc_flag; int fc_sparam; struct lpfc_hba* phba; } ;
struct lpfc_sli {int dummy; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_rpi; int nlp_state; int nlp_DID; } ;
struct TYPE_10__ {int ox_id; } ;
struct TYPE_11__ {TYPE_2__ rcvsli3; } ;
struct TYPE_15__ {int ulpContext; TYPE_3__ unsli3; } ;
struct TYPE_9__ {int * mbox; } ;
struct lpfc_iocbq {int iocb_cmpl; TYPE_7__ iocb; int iotag; scalar_t__ context2; int retry; TYPE_1__ context_un; } ;
struct TYPE_14__ {int elsXmitACC; } ;
struct lpfc_hba {TYPE_6__ fc_stat; struct lpfc_sli sli; } ;
struct lpfc_dmabuf {int * virt; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_12__ {int acceptRspCode; } ;
struct TYPE_13__ {TYPE_4__ prlo; } ;
struct TYPE_16__ {TYPE_5__ un; } ;
typedef int PRLO ;
typedef int LPFC_MBOXQ_t ;
typedef TYPE_7__ IOCB_t ;
typedef TYPE_8__ ELS_PKT ;





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
 int FUNC_0 (struct lpfc_vport*,int ,char*,int ,int,int ) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 struct lpfc_iocbq* FUNC_2 (struct lpfc_vport*,int ,int,int ,struct lpfc_nodelist*,int ,int const) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ,char*,int ,int ,int ,int,int ,int ,int ) ;
 struct Scsi_Host* FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int
FUNC_9(struct lpfc_vport *VAR_10, uint32_t VAR_11,
   struct lpfc_iocbq *VAR_12, struct lpfc_nodelist *VAR_13,
   LPFC_MBOXQ_t *VAR_14)
{
 struct Scsi_Host *VAR_15 = FUNC_4(VAR_10);
 struct lpfc_hba *VAR_16 = VAR_10->phba;
 IOCB_t *VAR_17;
 IOCB_t *VAR_18;
 struct lpfc_iocbq *VAR_19;
 struct lpfc_sli *VAR_20;
 uint8_t *VAR_21;
 uint16_t VAR_22;
 int VAR_23;
 ELS_PKT *VAR_24;

 VAR_20 = &VAR_16->sli;
 VAR_18 = &VAR_12->iocb;

 switch (VAR_11) {
 case 130:
  VAR_22 = sizeof(uint32_t);
  VAR_19 = FUNC_2(VAR_10, 0, VAR_22, VAR_12->retry,
          VAR_13, VAR_13->nlp_DID, 130);
  if (!VAR_19) {
   FUNC_7(VAR_15->host_lock);
   VAR_13->nlp_flag &= ~VAR_6;
   FUNC_8(VAR_15->host_lock);
   return 1;
  }

  VAR_17 = &VAR_19->iocb;
  VAR_17->ulpContext = VAR_18->ulpContext;
  VAR_17->unsli3.rcvsli3.ox_id = VAR_18->unsli3.rcvsli3.ox_id;
  VAR_21 = (((struct lpfc_dmabuf *) VAR_19->context2)->virt);
  *((uint32_t *) (VAR_21)) = 130;
  VAR_21 += sizeof(uint32_t);

  FUNC_0(VAR_10, VAR_4,
   "Issue ACC:       did:x%x flg:x%x",
   VAR_13->nlp_DID, VAR_13->nlp_flag, 0);
  break;
 case 129:
  VAR_22 = (sizeof(struct serv_parm) + sizeof(uint32_t));
  VAR_19 = FUNC_2(VAR_10, 0, VAR_22, VAR_12->retry,
          VAR_13, VAR_13->nlp_DID, 130);
  if (!VAR_19)
   return 1;

  VAR_17 = &VAR_19->iocb;
  VAR_17->ulpContext = VAR_18->ulpContext;
  VAR_17->unsli3.rcvsli3.ox_id = VAR_18->unsli3.rcvsli3.ox_id;
  VAR_21 = (((struct lpfc_dmabuf *) VAR_19->context2)->virt);

  if (VAR_14)
   VAR_19->context_un.mbox = VAR_14;

  *((uint32_t *) (VAR_21)) = 130;
  VAR_21 += sizeof(uint32_t);
  FUNC_6(VAR_21, &VAR_10->fc_sparam, sizeof(struct serv_parm));

  FUNC_0(VAR_10, VAR_4,
   "Issue ACC PLOGI: did:x%x flg:x%x",
   VAR_13->nlp_DID, VAR_13->nlp_flag, 0);
  break;
 case 128:
  VAR_22 = sizeof(uint32_t) + sizeof(PRLO);
  VAR_19 = FUNC_2(VAR_10, 0, VAR_22, VAR_12->retry,
          VAR_13, VAR_13->nlp_DID, 128);
  if (!VAR_19)
   return 1;

  VAR_17 = &VAR_19->iocb;
  VAR_17->ulpContext = VAR_18->ulpContext;
  VAR_17->unsli3.rcvsli3.ox_id = VAR_18->unsli3.rcvsli3.ox_id;
  VAR_21 = (((struct lpfc_dmabuf *) VAR_19->context2)->virt);

  FUNC_6(VAR_21, ((struct lpfc_dmabuf *) VAR_12->context2)->virt,
         sizeof(uint32_t) + sizeof(PRLO));
  *((uint32_t *) (VAR_21)) = VAR_0;
  VAR_24 = (ELS_PKT *) VAR_21;
  VAR_24->un.prlo.acceptRspCode = VAR_7;

  FUNC_0(VAR_10, VAR_4,
   "Issue ACC PRLO:  did:x%x flg:x%x",
   VAR_13->nlp_DID, VAR_13->nlp_flag, 0);
  break;
 default:
  return 1;
 }

 FUNC_3(VAR_10, VAR_2, VAR_3,
    "0128 Xmit ELS ACC response tag x%x, XRI: x%x, "
    "DID: x%x, nlp_flag: x%x nlp_state: x%x RPI: x%x "
    "fc_flag x%x\n",
    VAR_19->iotag, VAR_19->iocb.ulpContext,
    VAR_13->nlp_DID, VAR_13->nlp_flag, VAR_13->nlp_state,
    VAR_13->nlp_rpi, VAR_10->fc_flag);
 if (VAR_13->nlp_flag & VAR_6) {
  FUNC_7(VAR_15->host_lock);
  VAR_13->nlp_flag &= ~VAR_6;
  FUNC_8(VAR_15->host_lock);
  VAR_19->iocb_cmpl = VAR_8;
 } else {
  VAR_19->iocb_cmpl = VAR_9;
 }

 VAR_16->fc_stat.elsXmitACC++;
 VAR_23 = FUNC_5(VAR_16, VAR_5, VAR_19, 0);
 if (VAR_23 == VAR_1) {
  FUNC_1(VAR_16, VAR_19);
  return 1;
 }
 return 0;
}
