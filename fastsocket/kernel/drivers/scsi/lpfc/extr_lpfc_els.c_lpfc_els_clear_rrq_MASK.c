
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct lpfc_vport {scalar_t__ fc_myDID; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_DID; int nlp_flag; } ;
struct lpfc_node_rrq {int dummy; } ;
struct TYPE_2__ {int ulpContext; } ;
struct lpfc_iocbq {TYPE_1__ iocb; int iotag; scalar_t__ context2; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct RRQ {scalar_t__ rrq_exchg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,struct RRQ*) ;
 int FUNC_2 (struct lpfc_hba*,scalar_t__,struct lpfc_node_rrq*) ;
 int FUNC_3 (struct lpfc_vport*,int ,char*,int ,int ,scalar_t__) ;
 struct lpfc_node_rrq* FUNC_4 (struct lpfc_vport*,scalar_t__,int ) ;
 int FUNC_5 (struct lpfc_vport*,int ,int ,char*,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_6(struct lpfc_vport *VAR_6,
      struct lpfc_iocbq *VAR_7, struct lpfc_nodelist *VAR_8)
{
 struct lpfc_hba *VAR_9 = VAR_6->phba;
 uint8_t *VAR_10;
 struct RRQ *VAR_11;
 uint16_t VAR_12;
 uint16_t VAR_13;
 struct lpfc_node_rrq *VAR_14;


 VAR_10 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_7->context2)->virt);
 VAR_10 += sizeof(uint32_t);
 VAR_11 = (struct RRQ *)VAR_10;
 VAR_11->rrq_exchg = FUNC_0(VAR_11->rrq_exchg);
 VAR_12 = FUNC_1(VAR_5, VAR_11);

 FUNC_5(VAR_6, VAR_0, VAR_1,
   "2883 Clear RRQ for SID:x%x OXID:x%x RXID:x%x"
   " x%x x%x\n",
   FUNC_0(FUNC_1(VAR_3, VAR_11)),
   FUNC_1(VAR_4, VAR_11),
   VAR_12,
   VAR_7->iotag, VAR_7->iocb.ulpContext);

 FUNC_3(VAR_6, VAR_2,
  "Clear RRQ:  did:x%x flg:x%x exchg:x%.08x",
  VAR_8->nlp_DID, VAR_8->nlp_flag, VAR_11->rrq_exchg);
 if (VAR_6->fc_myDID == FUNC_0(FUNC_1(VAR_3, VAR_11)))
  VAR_13 = FUNC_1(VAR_4, VAR_11);
 else
  VAR_13 = VAR_12;
 VAR_14 = FUNC_4(VAR_6, VAR_13, VAR_8->nlp_DID);
 if (VAR_14)
  FUNC_2(VAR_9, VAR_13, VAR_14);
 return;
}
