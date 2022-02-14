
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_vport {int fc_portname; int fc_myDID; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_DID; } ;
struct lpfc_name {int dummy; } ;
struct lpfc_iocbq {int iocb_cmpl; scalar_t__ context2; int iocb; } ;
struct TYPE_2__ {int elsXmitLOGO; } ;
struct lpfc_hba {TYPE_1__ fc_stat; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct Scsi_Host {int host_lock; } ;
typedef int IOCB_t ;


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
 struct lpfc_iocbq* FUNC_3 (struct lpfc_vport*,int,int,int ,struct lpfc_nodelist*,int ,int ) ;
 struct Scsi_Host* FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 scalar_t__ FUNC_6 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

int
FUNC_10(struct lpfc_vport *VAR_7, struct lpfc_nodelist *VAR_8,
      uint8_t VAR_9)
{
 struct Scsi_Host *VAR_10 = FUNC_4(VAR_7);
 struct lpfc_hba *VAR_11 = VAR_7->phba;
 IOCB_t *VAR_12;
 struct lpfc_iocbq *VAR_13;
 uint8_t *VAR_14;
 uint16_t VAR_15;
 int VAR_16;

 FUNC_8(VAR_10->host_lock);
 if (VAR_8->nlp_flag & VAR_5) {
  FUNC_9(VAR_10->host_lock);
  return 0;
 }
 FUNC_9(VAR_10->host_lock);

 VAR_15 = (2 * sizeof(uint32_t)) + sizeof(struct lpfc_name);
 VAR_13 = FUNC_3(VAR_7, 1, VAR_15, VAR_9, VAR_8,
         VAR_8->nlp_DID, VAR_0);
 if (!VAR_13)
  return 1;

 VAR_12 = &VAR_13->iocb;
 VAR_14 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_13->context2)->virt);
 *((uint32_t *) (VAR_14)) = VAR_0;
 VAR_14 += sizeof(uint32_t);


 *((uint32_t *) (VAR_14)) = FUNC_0(VAR_7->fc_myDID);
 VAR_14 += sizeof(uint32_t);
 FUNC_7(VAR_14, &VAR_7->fc_portname, sizeof(struct lpfc_name));

 FUNC_1(VAR_7, VAR_2,
  "Issue LOGO:      did:x%x",
  VAR_8->nlp_DID, 0, 0);
 FUNC_8(VAR_10->host_lock);
 VAR_8->nlp_flag |= VAR_4;
 FUNC_9(VAR_10->host_lock);
 if (FUNC_6(VAR_7, VAR_8)) {
  FUNC_2(VAR_11, VAR_13);
  return 0;
 }

 VAR_11->fc_stat.elsXmitLOGO++;
 VAR_13->iocb_cmpl = VAR_6;
 FUNC_8(VAR_10->host_lock);
 VAR_8->nlp_flag |= VAR_5;
 VAR_8->nlp_flag &= ~VAR_4;
 FUNC_9(VAR_10->host_lock);
 VAR_16 = FUNC_5(VAR_11, VAR_3, VAR_13, 0);

 if (VAR_16 == VAR_1) {
  FUNC_8(VAR_10->host_lock);
  VAR_8->nlp_flag &= ~VAR_5;
  FUNC_9(VAR_10->host_lock);
  FUNC_2(VAR_11, VAR_13);
  return 1;
 }
 return 0;
}
