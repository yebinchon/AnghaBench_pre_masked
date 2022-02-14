
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
typedef int uint16_t ;
struct lpfc_vport {int fc_prli_sent; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_DID; } ;
struct lpfc_iocbq {int iocb_cmpl; scalar_t__ context2; int iocb; } ;
struct TYPE_7__ {int elsXmitPRLI; } ;
struct TYPE_5__ {int feaLevelHigh; } ;
struct TYPE_6__ {TYPE_1__ rev; } ;
struct lpfc_hba {TYPE_3__ fc_stat; TYPE_2__ vpd; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_8__ {int ConfmComplAllowed; int Retry; int TaskRetryIdReq; int estabImagePair; int readXferRdyDis; int initiatorFunc; int prliType; } ;
typedef TYPE_4__ PRLI ;
typedef int IOCB_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 struct lpfc_iocbq* FUNC_2 (struct lpfc_vport*,int,int,int ,struct lpfc_nodelist*,int ,int ) ;
 struct Scsi_Host* FUNC_3 (struct lpfc_vport*) ;
 scalar_t__ FUNC_4 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

int
FUNC_8(struct lpfc_vport *VAR_7, struct lpfc_nodelist *VAR_8,
      uint8_t VAR_9)
{
 struct Scsi_Host *VAR_10 = FUNC_3(VAR_7);
 struct lpfc_hba *VAR_11 = VAR_7->phba;
 PRLI *VAR_12;
 IOCB_t *VAR_13;
 struct lpfc_iocbq *VAR_14;
 uint8_t *VAR_15;
 uint16_t VAR_16;

 VAR_16 = (sizeof(uint32_t) + sizeof(PRLI));
 VAR_14 = FUNC_2(VAR_7, 1, VAR_16, VAR_9, VAR_8,
         VAR_8->nlp_DID, VAR_0);
 if (!VAR_14)
  return 1;

 VAR_13 = &VAR_14->iocb;
 VAR_15 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_14->context2)->virt);


 FUNC_5(VAR_15, 0, (sizeof(PRLI) + sizeof(uint32_t)));
 *((uint32_t *) (VAR_15)) = VAR_0;
 VAR_15 += sizeof(uint32_t);


 VAR_12 = (PRLI *) VAR_15;




 if (VAR_11->vpd.rev.feaLevelHigh >= 0x02) {
  VAR_12->ConfmComplAllowed = 1;
  VAR_12->Retry = 1;
  VAR_12->TaskRetryIdReq = 1;
 }
 VAR_12->estabImagePair = 1;
 VAR_12->readXferRdyDis = 1;


 VAR_12->prliType = VAR_5;
 VAR_12->initiatorFunc = 1;

 FUNC_0(VAR_7, VAR_2,
  "Issue PRLI:      did:x%x",
  VAR_8->nlp_DID, 0, 0);

 VAR_11->fc_stat.elsXmitPRLI++;
 VAR_14->iocb_cmpl = VAR_6;
 FUNC_6(VAR_10->host_lock);
 VAR_8->nlp_flag |= VAR_4;
 FUNC_7(VAR_10->host_lock);
 if (FUNC_4(VAR_11, VAR_3, VAR_14, 0) ==
     VAR_1) {
  FUNC_6(VAR_10->host_lock);
  VAR_8->nlp_flag &= ~VAR_4;
  FUNC_7(VAR_10->host_lock);
  FUNC_1(VAR_11, VAR_14);
  return 1;
 }
 VAR_7->fc_prli_sent++;
 return 0;
}
