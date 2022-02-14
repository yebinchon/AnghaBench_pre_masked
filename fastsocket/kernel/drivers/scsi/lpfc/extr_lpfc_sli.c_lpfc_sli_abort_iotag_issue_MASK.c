
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lpfc_vport {int dummy; } ;
struct lpfc_sli_ring {int ringno; int ring_lock; } ;
struct TYPE_4__ {int abortContextTag; int abortIoTag; int abortType; } ;
struct TYPE_5__ {TYPE_1__ acxri; } ;
struct TYPE_6__ {scalar_t__ ulpCommand; int ulpLe; TYPE_2__ un; int ulpClass; int ulpIoTag; int ulpContext; } ;
struct lpfc_iocbq {int iocb_flag; int iotag; int iocb_cmpl; int fcp_wqidx; int sli4_xritag; TYPE_3__ iocb; struct lpfc_vport* vport; } ;
struct lpfc_hba {scalar_t__ sli_rev; scalar_t__ link_state; } ;
typedef TYPE_3__ IOCB_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 struct lpfc_iocbq* FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ,char*,int ,int ,int ) ;
 int VAR_10 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct lpfc_hba *VAR_11, struct lpfc_sli_ring *VAR_12,
      struct lpfc_iocbq *VAR_13)
{
 struct lpfc_vport *VAR_14 = VAR_13->vport;
 struct lpfc_iocbq *VAR_15;
 IOCB_t *VAR_16 = ((void*)0);
 IOCB_t *VAR_17 = ((void*)0);
 int VAR_18;
 unsigned long VAR_19;






 VAR_16 = &VAR_13->iocb;
 if (VAR_16->ulpCommand == VAR_1 ||
     VAR_16->ulpCommand == VAR_2 ||
     (VAR_13->iocb_flag & VAR_5) != 0)
  return 0;


 VAR_15 = FUNC_0(VAR_11);
 if (VAR_15 == ((void*)0))
  return 0;




 VAR_13->iocb_flag |= VAR_5;

 VAR_17 = &VAR_15->iocb;
 VAR_17->un.acxri.abortType = VAR_0;
 VAR_17->un.acxri.abortContextTag = VAR_16->ulpContext;
 if (VAR_11->sli_rev == VAR_8) {
  VAR_17->un.acxri.abortIoTag = VAR_13->sli4_xritag;
  VAR_17->un.acxri.abortContextTag = VAR_13->iotag;
 }
 else
  VAR_17->un.acxri.abortIoTag = VAR_16->ulpIoTag;
 VAR_17->ulpLe = 1;
 VAR_17->ulpClass = VAR_16->ulpClass;


 VAR_15->fcp_wqidx = VAR_13->fcp_wqidx;
 if (VAR_13->iocb_flag & VAR_6)
  VAR_15->iocb_flag |= VAR_9;

 if (VAR_11->link_state >= VAR_7)
  VAR_17->ulpCommand = VAR_1;
 else
  VAR_17->ulpCommand = VAR_2;

 VAR_15->iocb_cmpl = VAR_10;

 FUNC_3(VAR_14, VAR_3, VAR_4,
    "0339 Abort xri x%x, original iotag x%x, "
    "abort cmd iotag x%x\n",
    VAR_17->un.acxri.abortIoTag,
    VAR_17->un.acxri.abortContextTag,
    VAR_15->iotag);

 if (VAR_11->sli_rev == VAR_8) {

  FUNC_4(&VAR_12->ring_lock, VAR_19);
  VAR_18 = FUNC_1(VAR_11, VAR_12->ringno,
   VAR_15, 0);
  FUNC_5(&VAR_12->ring_lock, VAR_19);
 } else {
  VAR_18 = FUNC_1(VAR_11, VAR_12->ringno,
   VAR_15, 0);
 }

 if (VAR_18)
  FUNC_2(VAR_11, VAR_15);






 return VAR_18;
}
