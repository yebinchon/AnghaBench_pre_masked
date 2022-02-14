
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_sli {int dummy; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_DID; int nlp_rpi; int nlp_state; } ;
struct TYPE_6__ {int ox_id; } ;
struct TYPE_7__ {TYPE_1__ rcvsli3; } ;
struct TYPE_10__ {int ulpContext; TYPE_2__ unsli3; } ;
struct TYPE_8__ {int * mbox; } ;
struct lpfc_iocbq {int iocb_cmpl; TYPE_5__ iocb; int iotag; TYPE_3__ context_un; scalar_t__ context2; int retry; } ;
struct TYPE_9__ {int elsXmitLSRJT; } ;
struct lpfc_hba {TYPE_4__ fc_stat; struct lpfc_sli sli; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
typedef int LPFC_MBOXQ_t ;
typedef TYPE_5__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 struct lpfc_iocbq* FUNC_2 (struct lpfc_vport*,int ,int,int ,struct lpfc_nodelist*,int ,int ) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ,char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;

int
FUNC_5(struct lpfc_vport *VAR_7, uint32_t VAR_8,
      struct lpfc_iocbq *VAR_9, struct lpfc_nodelist *VAR_10,
      LPFC_MBOXQ_t *VAR_11)
{
 struct lpfc_hba *VAR_12 = VAR_7->phba;
 IOCB_t *VAR_13;
 IOCB_t *VAR_14;
 struct lpfc_iocbq *VAR_15;
 struct lpfc_sli *VAR_16;
 uint8_t *VAR_17;
 uint16_t VAR_18;
 int VAR_19;

 VAR_16 = &VAR_12->sli;
 VAR_18 = 2 * sizeof(uint32_t);
 VAR_15 = FUNC_2(VAR_7, 0, VAR_18, VAR_9->retry, VAR_10,
         VAR_10->nlp_DID, VAR_0);
 if (!VAR_15)
  return 1;

 VAR_13 = &VAR_15->iocb;
 VAR_14 = &VAR_9->iocb;
 VAR_13->ulpContext = VAR_14->ulpContext;
 VAR_13->unsli3.rcvsli3.ox_id = VAR_14->unsli3.rcvsli3.ox_id;
 VAR_17 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_15->context2)->virt);

 *((uint32_t *) (VAR_17)) = VAR_0;
 VAR_17 += sizeof(uint32_t);
 *((uint32_t *) (VAR_17)) = VAR_8;

 if (VAR_11)
  VAR_15->context_un.mbox = VAR_11;


 FUNC_3(VAR_7, VAR_2, VAR_3,
    "0129 Xmit ELS RJT x%x response tag x%x "
    "xri x%x, did x%x, nlp_flag x%x, nlp_state x%x, "
    "rpi x%x\n",
    VAR_8, VAR_15->iotag,
    VAR_15->iocb.ulpContext, VAR_10->nlp_DID,
    VAR_10->nlp_flag, VAR_10->nlp_state, VAR_10->nlp_rpi);
 FUNC_0(VAR_7, VAR_4,
  "Issue LS_RJT:    did:x%x flg:x%x err:x%x",
  VAR_10->nlp_DID, VAR_10->nlp_flag, VAR_8);

 VAR_12->fc_stat.elsXmitLSRJT++;
 VAR_15->iocb_cmpl = VAR_6;
 VAR_19 = FUNC_4(VAR_12, VAR_5, VAR_15, 0);

 if (VAR_19 == VAR_1) {
  FUNC_1(VAR_12, VAR_15);
  return 1;
 }
 return 0;
}
