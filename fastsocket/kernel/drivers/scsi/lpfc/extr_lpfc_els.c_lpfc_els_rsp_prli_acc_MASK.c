
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_sli {int dummy; } ;
struct lpfc_nodelist {int nlp_type; int nlp_flag; int nlp_DID; int nlp_rpi; int nlp_state; } ;
struct TYPE_8__ {int ox_id; } ;
struct TYPE_9__ {TYPE_1__ rcvsli3; } ;
struct TYPE_14__ {int ulpContext; TYPE_2__ unsli3; } ;
struct lpfc_iocbq {int iocb_cmpl; scalar_t__ context2; TYPE_7__ iocb; int iotag; int retry; } ;
struct TYPE_11__ {int elsXmitACC; } ;
struct TYPE_10__ {int feaLevelHigh; } ;
struct TYPE_12__ {TYPE_3__ rev; } ;
struct lpfc_hba {TYPE_4__ fc_stat; TYPE_5__ vpd; struct lpfc_sli sli; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
typedef TYPE_5__ lpfc_vpd_t ;
struct TYPE_13__ {int ConfmComplAllowed; int Retry; int TaskRetryIdReq; int estabImagePair; int readXferRdyDis; int initiatorFunc; int prliType; int acceptRspCode; } ;
typedef TYPE_6__ PRLI ;
typedef TYPE_7__ IOCB_t ;


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
 int VAR_11 ;
 int FUNC_0 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 struct lpfc_iocbq* FUNC_2 (struct lpfc_vport*,int ,int,int ,struct lpfc_nodelist*,int ,int) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_5 (int *,int ,int) ;

int
FUNC_6(struct lpfc_vport *VAR_12, struct lpfc_iocbq *VAR_13,
        struct lpfc_nodelist *VAR_14)
{
 struct lpfc_hba *VAR_15 = VAR_12->phba;
 PRLI *VAR_16;
 lpfc_vpd_t *VAR_17;
 IOCB_t *VAR_18;
 IOCB_t *VAR_19;
 struct lpfc_iocbq *VAR_20;
 struct lpfc_sli *VAR_21;
 uint8_t *VAR_22;
 uint16_t VAR_23;
 int VAR_24;

 VAR_21 = &VAR_15->sli;

 VAR_23 = sizeof(uint32_t) + sizeof(PRLI);
 VAR_20 = FUNC_2(VAR_12, 0, VAR_23, VAR_13->retry, VAR_14,
  VAR_14->nlp_DID, (VAR_0 | (VAR_1 & ~VAR_2)));
 if (!VAR_20)
  return 1;

 VAR_18 = &VAR_20->iocb;
 VAR_19 = &VAR_13->iocb;
 VAR_18->ulpContext = VAR_19->ulpContext;
 VAR_18->unsli3.rcvsli3.ox_id = VAR_19->unsli3.rcvsli3.ox_id;


 FUNC_3(VAR_12, VAR_4, VAR_5,
    "0131 Xmit PRLI ACC response tag x%x xri x%x, "
    "did x%x, nlp_flag x%x, nlp_state x%x, rpi x%x\n",
    VAR_20->iotag, VAR_20->iocb.ulpContext,
    VAR_14->nlp_DID, VAR_14->nlp_flag, VAR_14->nlp_state,
    VAR_14->nlp_rpi);
 VAR_22 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_20->context2)->virt);

 *((uint32_t *) (VAR_22)) = (VAR_0 | (VAR_1 & ~VAR_2));
 VAR_22 += sizeof(uint32_t);


 FUNC_5(VAR_22, 0, sizeof(PRLI));

 VAR_16 = (PRLI *) VAR_22;
 VAR_17 = &VAR_15->vpd;




 if ((VAR_14->nlp_type & VAR_8) &&
     (VAR_17->rev.feaLevelHigh >= 0x02)) {
  VAR_16->ConfmComplAllowed = 1;
  VAR_16->Retry = 1;
  VAR_16->TaskRetryIdReq = 1;
 }

 VAR_16->acceptRspCode = VAR_10;
 VAR_16->estabImagePair = 1;
 VAR_16->readXferRdyDis = 1;
 VAR_16->ConfmComplAllowed = 1;

 VAR_16->prliType = VAR_9;
 VAR_16->initiatorFunc = 1;

 FUNC_0(VAR_12, VAR_6,
  "Issue ACC PRLI:  did:x%x flg:x%x",
  VAR_14->nlp_DID, VAR_14->nlp_flag, 0);

 VAR_15->fc_stat.elsXmitACC++;
 VAR_20->iocb_cmpl = VAR_11;

 VAR_24 = FUNC_4(VAR_15, VAR_7, VAR_20, 0);
 if (VAR_24 == VAR_3) {
  FUNC_1(VAR_15, VAR_20);
  return 1;
 }
 return 0;
}
