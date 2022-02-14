
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
struct lpfc_vport {int fc_myDID; int fc_nodename; int fc_portname; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_DID; int nlp_rpi; int nlp_state; } ;
struct lpfc_name {int dummy; } ;
struct TYPE_6__ {int ox_id; } ;
struct TYPE_7__ {TYPE_1__ rcvsli3; } ;
struct TYPE_9__ {int ulpContext; TYPE_2__ unsli3; } ;
struct lpfc_iocbq {int iocb_cmpl; scalar_t__ context2; TYPE_4__ iocb; int iotag; int retry; } ;
struct TYPE_8__ {int elsXmitACC; } ;
struct lpfc_hba {TYPE_3__ fc_stat; int fc_pref_ALPA; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct TYPE_10__ {int DID; int nodeName; int portName; int hardAL_PA; } ;
typedef TYPE_4__ IOCB_t ;
typedef TYPE_5__ ADISC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 struct lpfc_iocbq* FUNC_3 (struct lpfc_vport*,int ,int,int ,struct lpfc_nodelist*,int ,int ) ;
 int FUNC_4 (struct lpfc_vport*,int ,int ,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_6 (int *,int *,int) ;

int
FUNC_7(struct lpfc_vport *VAR_7, struct lpfc_iocbq *VAR_8,
         struct lpfc_nodelist *VAR_9)
{
 struct lpfc_hba *VAR_10 = VAR_7->phba;
 ADISC *VAR_11;
 IOCB_t *VAR_12, *VAR_13;
 struct lpfc_iocbq *VAR_14;
 uint8_t *VAR_15;
 uint16_t VAR_16;
 int VAR_17;

 VAR_16 = sizeof(uint32_t) + sizeof(ADISC);
 VAR_14 = FUNC_3(VAR_7, 0, VAR_16, VAR_8->retry, VAR_9,
         VAR_9->nlp_DID, VAR_0);
 if (!VAR_14)
  return 1;

 VAR_12 = &VAR_14->iocb;
 VAR_13 = &VAR_8->iocb;
 VAR_12->ulpContext = VAR_13->ulpContext;
 VAR_12->unsli3.rcvsli3.ox_id = VAR_13->unsli3.rcvsli3.ox_id;


 FUNC_4(VAR_7, VAR_2, VAR_3,
    "0130 Xmit ADISC ACC response iotag x%x xri: "
    "x%x, did x%x, nlp_flag x%x, nlp_state x%x rpi x%x\n",
    VAR_14->iotag, VAR_14->iocb.ulpContext,
    VAR_9->nlp_DID, VAR_9->nlp_flag, VAR_9->nlp_state,
    VAR_9->nlp_rpi);
 VAR_15 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_14->context2)->virt);

 *((uint32_t *) (VAR_15)) = VAR_0;
 VAR_15 += sizeof(uint32_t);

 VAR_11 = (ADISC *) (VAR_15);
 VAR_11->hardAL_PA = VAR_10->fc_pref_ALPA;
 FUNC_6(&VAR_11->portName, &VAR_7->fc_portname, sizeof(struct lpfc_name));
 FUNC_6(&VAR_11->nodeName, &VAR_7->fc_nodename, sizeof(struct lpfc_name));
 VAR_11->DID = FUNC_0(VAR_7->fc_myDID);

 FUNC_1(VAR_7, VAR_4,
  "Issue ACC ADISC: did:x%x flg:x%x",
  VAR_9->nlp_DID, VAR_9->nlp_flag, 0);

 VAR_10->fc_stat.elsXmitACC++;
 VAR_14->iocb_cmpl = VAR_6;
 VAR_17 = FUNC_5(VAR_10, VAR_5, VAR_14, 0);
 if (VAR_17 == VAR_1) {
  FUNC_2(VAR_10, VAR_14);
  return 1;
 }
 return 0;
}
