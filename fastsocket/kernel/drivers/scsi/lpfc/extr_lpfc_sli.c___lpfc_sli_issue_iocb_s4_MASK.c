
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union lpfc_wqe {int dummy; } lpfc_wqe ;
typedef size_t uint32_t ;
struct lpfc_sli_ring {int txq; } ;
struct lpfc_sglq {scalar_t__ sli4_xritag; int sli4_lxritag; } ;
struct TYPE_5__ {scalar_t__ ulpCommand; } ;
struct lpfc_iocbq {scalar_t__ sli4_xritag; int iocb_flag; size_t fcp_wqidx; int sli4_lxritag; TYPE_2__ iocb; } ;
struct TYPE_6__ {int els_wq; int * fcp_wq; } ;
struct TYPE_4__ {struct lpfc_sli_ring* ring; } ;
struct lpfc_hba {TYPE_3__ sli4_hba; TYPE_1__ sli; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 struct lpfc_sglq* FUNC_0 (struct lpfc_hba*,int ) ;
 struct lpfc_sglq* FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_sli_ring*,struct lpfc_iocbq*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_sglq*) ;
 scalar_t__ FUNC_5 (struct lpfc_hba*,struct lpfc_iocbq*,union lpfc_wqe*) ;
 scalar_t__ FUNC_6 (int ,union lpfc_wqe*) ;
 int FUNC_7 (struct lpfc_hba*,struct lpfc_sli_ring*,struct lpfc_iocbq*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(struct lpfc_hba *VAR_9, uint32_t VAR_10,
    struct lpfc_iocbq *VAR_11, uint32_t VAR_12)
{
 struct lpfc_sglq *VAR_13;
 union lpfc_wqe VAR_14;
 struct lpfc_sli_ring *VAR_15 = &VAR_9->sli.ring[VAR_10];

 if (VAR_11->sli4_xritag == VAR_7) {
  if (VAR_11->iocb.ulpCommand == VAR_0 ||
      VAR_11->iocb.ulpCommand == VAR_1)
   VAR_13 = ((void*)0);
  else {
   if (!FUNC_3(&VAR_15->txq)) {
    if (!(VAR_12 & VAR_8)) {
     FUNC_2(VAR_9,
      VAR_15, VAR_11);
     return VAR_4;
    } else {
     return VAR_2;
    }
   } else {
    VAR_13 = FUNC_1(VAR_9, VAR_11);
    if (!VAR_13) {
     if (!(VAR_12 & VAR_8)) {
      FUNC_2(VAR_9,
        VAR_15,
        VAR_11);
      return VAR_4;
     } else
      return VAR_2;
    }
   }
  }
 } else if (VAR_11->iocb_flag & VAR_5) {

  VAR_13 = ((void*)0);
 } else {




  VAR_13 = FUNC_0(VAR_9, VAR_11->sli4_lxritag);
  if (!VAR_13)
   return VAR_3;
 }

 if (VAR_13) {
  VAR_11->sli4_lxritag = VAR_13->sli4_lxritag;
  VAR_11->sli4_xritag = VAR_13->sli4_xritag;
  if (VAR_7 == FUNC_4(VAR_9, VAR_11, VAR_13))
   return VAR_3;
 }

 if (FUNC_5(VAR_9, VAR_11, &VAR_14))
  return VAR_3;

 if ((VAR_11->iocb_flag & VAR_5) ||
  (VAR_11->iocb_flag & VAR_6)) {
  if (FUNC_8(!VAR_9->sli4_hba.fcp_wq))
   return VAR_3;
  if (FUNC_6(VAR_9->sli4_hba.fcp_wq[VAR_11->fcp_wqidx],
         &VAR_14))
   return VAR_3;
 } else {
  if (FUNC_8(!VAR_9->sli4_hba.els_wq))
   return VAR_3;
  if (FUNC_6(VAR_9->sli4_hba.els_wq, &VAR_14))
   return VAR_3;
 }
 FUNC_7(VAR_9, VAR_15, VAR_11);

 return 0;
}
