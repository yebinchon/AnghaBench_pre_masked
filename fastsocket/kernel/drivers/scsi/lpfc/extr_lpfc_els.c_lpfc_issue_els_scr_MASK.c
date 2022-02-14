
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_sli {int dummy; } ;
struct lpfc_nodelist {int nlp_DID; } ;
struct lpfc_iocbq {int iocb_cmpl; scalar_t__ context2; int iocb; } ;
struct TYPE_3__ {int elsXmitSCR; } ;
struct lpfc_hba {TYPE_1__ fc_stat; int nlp_mem_pool; struct lpfc_sli sli; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct TYPE_4__ {int Function; } ;
typedef TYPE_2__ SCR ;
typedef int IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 struct lpfc_nodelist* FUNC_3 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_4 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 struct lpfc_nodelist* FUNC_5 (struct lpfc_vport*,int ) ;
 int FUNC_6 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_7 (struct lpfc_nodelist*) ;
 struct lpfc_iocbq* FUNC_8 (struct lpfc_vport*,int,int,int ,struct lpfc_nodelist*,int ,int ) ;
 scalar_t__ FUNC_9 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 struct lpfc_nodelist* FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,int ,int) ;

int
FUNC_12(struct lpfc_vport *VAR_8, uint32_t VAR_9, uint8_t VAR_10)
{
 struct lpfc_hba *VAR_11 = VAR_8->phba;
 IOCB_t *VAR_12;
 struct lpfc_iocbq *VAR_13;
 struct lpfc_sli *VAR_14;
 uint8_t *VAR_15;
 uint16_t VAR_16;
 struct lpfc_nodelist *VAR_17;

 VAR_14 = &VAR_11->sli;
 VAR_16 = (sizeof(uint32_t) + sizeof(SCR));

 VAR_17 = FUNC_5(VAR_8, VAR_9);
 if (!VAR_17) {
  VAR_17 = FUNC_10(VAR_11->nlp_mem_pool, VAR_1);
  if (!VAR_17)
   return 1;
  FUNC_6(VAR_8, VAR_17, VAR_9);
  FUNC_4(VAR_8, VAR_17);
 } else if (!FUNC_0(VAR_17)) {
  VAR_17 = FUNC_3(VAR_8, VAR_17, VAR_5);
  if (!VAR_17)
   return 1;
 }

 VAR_13 = FUNC_8(VAR_8, 1, VAR_16, VAR_10, VAR_17,
         VAR_17->nlp_DID, VAR_0);

 if (!VAR_13) {



  FUNC_7(VAR_17);
  return 1;
 }

 VAR_12 = &VAR_13->iocb;
 VAR_15 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_13->context2)->virt);

 *((uint32_t *) (VAR_15)) = VAR_0;
 VAR_15 += sizeof(uint32_t);


 FUNC_11(VAR_15, 0, sizeof(SCR));
 ((SCR *) VAR_15)->Function = VAR_6;

 FUNC_1(VAR_8, VAR_3,
  "Issue SCR:       did:x%x",
  VAR_17->nlp_DID, 0, 0);

 VAR_11->fc_stat.elsXmitSCR++;
 VAR_13->iocb_cmpl = VAR_7;
 if (FUNC_9(VAR_11, VAR_4, VAR_13, 0) ==
     VAR_2) {




  FUNC_7(VAR_17);
  FUNC_2(VAR_11, VAR_13);
  return 1;
 }



 FUNC_7(VAR_17);
 return 0;
}
