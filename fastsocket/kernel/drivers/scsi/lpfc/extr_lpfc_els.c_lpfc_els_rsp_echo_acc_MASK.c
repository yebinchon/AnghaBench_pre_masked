
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_sli {int dummy; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_DID; } ;
struct TYPE_5__ {scalar_t__ acc_len; int ox_id; } ;
struct TYPE_6__ {TYPE_1__ rcvsli3; } ;
struct TYPE_7__ {int ulpContext; TYPE_2__ unsli3; } ;
struct lpfc_iocbq {int iocb_cmpl; scalar_t__ context2; TYPE_3__ iocb; int iotag; int retry; } ;
struct TYPE_8__ {int elsXmitACC; } ;
struct lpfc_hba {TYPE_4__ fc_stat; struct lpfc_sli sli; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 struct lpfc_iocbq* FUNC_2 (struct lpfc_vport*,int ,scalar_t__,int ,struct lpfc_nodelist*,int ,int ) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ,char*,int ,int ) ;
 int FUNC_4 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_5 (int *,int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct lpfc_vport *VAR_8, uint8_t *VAR_9,
        struct lpfc_iocbq *VAR_10, struct lpfc_nodelist *VAR_11)
{
 struct lpfc_hba *VAR_12 = VAR_8->phba;
 struct lpfc_iocbq *VAR_13;
 struct lpfc_sli *VAR_14;
 uint8_t *VAR_15;
 uint16_t VAR_16;
 int VAR_17;

 VAR_14 = &VAR_12->sli;
 VAR_16 = VAR_10->iocb.unsli3.rcvsli3.acc_len;




 if (VAR_16 > VAR_4)
  VAR_16 = VAR_4;
 VAR_13 = FUNC_2(VAR_8, 0, VAR_16, VAR_10->retry, VAR_11,
         VAR_11->nlp_DID, VAR_0);
 if (!VAR_13)
  return 1;

 VAR_13->iocb.ulpContext = VAR_10->iocb.ulpContext;
 VAR_13->iocb.unsli3.rcvsli3.ox_id = VAR_10->iocb.unsli3.rcvsli3.ox_id;


 FUNC_3(VAR_8, VAR_2, VAR_3,
    "2876 Xmit ECHO ACC response tag x%x xri x%x\n",
    VAR_13->iotag, VAR_13->iocb.ulpContext);
 VAR_15 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_13->context2)->virt);
 *((uint32_t *) (VAR_15)) = VAR_0;
 VAR_15 += sizeof(uint32_t);
 FUNC_5(VAR_15, VAR_9, VAR_16 - sizeof(uint32_t));

 FUNC_0(VAR_8, VAR_5,
  "Issue ACC ECHO:  did:x%x flg:x%x",
  VAR_11->nlp_DID, VAR_11->nlp_flag, 0);

 VAR_12->fc_stat.elsXmitACC++;
 VAR_13->iocb_cmpl = VAR_7;

 VAR_17 = FUNC_4(VAR_12, VAR_6, VAR_13, 0);
 if (VAR_17 == VAR_1) {
  FUNC_1(VAR_12, VAR_13);
  return 1;
 }
 return 0;
}
