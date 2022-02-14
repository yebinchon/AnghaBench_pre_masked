
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int u32 ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int nlp_type; int nlp_flag; int nlp_DID; int nlp_fcp_info; struct fc_rport* rport; } ;
struct lpfc_iocbq {scalar_t__ context2; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct fc_rport {int dummy; } ;
struct TYPE_2__ {scalar_t__ prliType; scalar_t__ Retry; scalar_t__ targetFunc; scalar_t__ initiatorFunc; } ;
typedef TYPE_1__ PRLI ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct fc_rport*,int ) ;
 int FUNC_1 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct lpfc_vport *VAR_8, struct lpfc_nodelist *VAR_9,
       struct lpfc_iocbq *VAR_10)
{
 struct lpfc_dmabuf *VAR_11;
 uint32_t *VAR_12;
 PRLI *VAR_13;
 struct fc_rport *VAR_14 = VAR_9->rport;
 u32 VAR_15;

 VAR_11 = (struct lpfc_dmabuf *) VAR_10->context2;
 VAR_12 = (uint32_t *) VAR_11->virt;
 VAR_13 = (PRLI *) ((uint8_t *) VAR_12 + sizeof (uint32_t));

 VAR_9->nlp_type &= ~(VAR_6 | VAR_5);
 VAR_9->nlp_fcp_info &= ~VAR_4;
 if (VAR_13->prliType == VAR_7) {
  if (VAR_13->initiatorFunc)
   VAR_9->nlp_type |= VAR_5;
  if (VAR_13->targetFunc)
   VAR_9->nlp_type |= VAR_6;
  if (VAR_13->Retry)
   VAR_9->nlp_fcp_info |= VAR_4;
 }
 if (VAR_14) {

  VAR_15 = VAR_2;
  if (VAR_9->nlp_type & VAR_5)
   VAR_15 |= VAR_0;
  if (VAR_9->nlp_type & VAR_6)
   VAR_15 |= VAR_1;

  FUNC_1(VAR_8, VAR_3,
   "rport rolechg:   role:x%x did:x%x flg:x%x",
   VAR_15, VAR_9->nlp_DID, VAR_9->nlp_flag);

  FUNC_0(VAR_14, VAR_15);
 }
}
