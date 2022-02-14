
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_vport {int fc_nodename; int fc_portname; int fc_myDID; struct lpfc_hba* phba; } ;
struct lpfc_sli {int dummy; } ;
struct lpfc_nodelist {int nlp_DID; int nlp_nodename; int nlp_portname; } ;
struct lpfc_name {int dummy; } ;
struct lpfc_iocbq {int iocb_cmpl; scalar_t__ context2; int iocb; } ;
struct TYPE_4__ {int elsXmitFARPR; } ;
struct lpfc_hba {TYPE_1__ fc_stat; int nlp_mem_pool; struct lpfc_sli sli; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct TYPE_5__ {int Mflags; int OnodeName; int OportName; int RnodeName; int RportName; scalar_t__ Rflags; } ;
typedef int IOCB_t ;
typedef TYPE_2__ FARP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_8 ;
 void* FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 struct lpfc_nodelist* FUNC_4 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 struct lpfc_nodelist* FUNC_6 (struct lpfc_vport*,int ) ;
 int FUNC_7 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_8 (struct lpfc_nodelist*) ;
 struct lpfc_iocbq* FUNC_9 (struct lpfc_vport*,int,int,int ,struct lpfc_nodelist*,int ,int ) ;
 scalar_t__ FUNC_10 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_11 (int *,int *,int) ;
 struct lpfc_nodelist* FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int
FUNC_14(struct lpfc_vport *VAR_10, uint32_t VAR_11, uint8_t VAR_12)
{
 struct lpfc_hba *VAR_13 = VAR_10->phba;
 IOCB_t *VAR_14;
 struct lpfc_iocbq *VAR_15;
 struct lpfc_sli *VAR_16;
 FARP *VAR_17;
 uint8_t *VAR_18;
 uint32_t *VAR_19;
 uint16_t VAR_20;
 struct lpfc_nodelist *VAR_21;
 struct lpfc_nodelist *VAR_22;

 VAR_16 = &VAR_13->sli;
 VAR_20 = (sizeof(uint32_t) + sizeof(FARP));

 VAR_22 = FUNC_6(VAR_10, VAR_11);
 if (!VAR_22) {
  VAR_22 = FUNC_12(VAR_13->nlp_mem_pool, VAR_4);
  if (!VAR_22)
   return 1;
  FUNC_7(VAR_10, VAR_22, VAR_11);
  FUNC_5(VAR_10, VAR_22);
 } else if (!FUNC_0(VAR_22)) {
  VAR_22 = FUNC_4(VAR_10, VAR_22, VAR_8);
  if (!VAR_22)
   return 1;
 }

 VAR_15 = FUNC_9(VAR_10, 1, VAR_20, VAR_12, VAR_22,
         VAR_22->nlp_DID, VAR_1);
 if (!VAR_15) {



  FUNC_8(VAR_22);
  return 1;
 }

 VAR_14 = &VAR_15->iocb;
 VAR_18 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_15->context2)->virt);

 *((uint32_t *) (VAR_18)) = VAR_0;
 VAR_18 += sizeof(uint32_t);


 VAR_17 = (FARP *) (VAR_18);
 FUNC_13(VAR_17, 0, sizeof(FARP));
 VAR_19 = (uint32_t *) VAR_18;
 *VAR_19++ = FUNC_1(VAR_11);
 *VAR_19++ = FUNC_1(VAR_10->fc_myDID);
 VAR_17->Rflags = 0;
 VAR_17->Mflags = (VAR_3 | VAR_2);

 FUNC_11(&VAR_17->RportName, &VAR_10->fc_portname, sizeof(struct lpfc_name));
 FUNC_11(&VAR_17->RnodeName, &VAR_10->fc_nodename, sizeof(struct lpfc_name));
 VAR_21 = FUNC_6(VAR_10, VAR_11);
 if (VAR_21 && FUNC_0(VAR_21)) {
  FUNC_11(&VAR_17->OportName, &VAR_21->nlp_portname,
         sizeof(struct lpfc_name));
  FUNC_11(&VAR_17->OnodeName, &VAR_21->nlp_nodename,
         sizeof(struct lpfc_name));
 }

 FUNC_2(VAR_10, VAR_6,
  "Issue FARPR:     did:x%x",
  VAR_22->nlp_DID, 0, 0);

 VAR_13->fc_stat.elsXmitFARPR++;
 VAR_15->iocb_cmpl = VAR_9;
 if (FUNC_10(VAR_13, VAR_7, VAR_15, 0) ==
     VAR_5) {




  FUNC_8(VAR_22);
  FUNC_3(VAR_13, VAR_15);
  return 1;
 }



 FUNC_8(VAR_22);
 return 0;
}
