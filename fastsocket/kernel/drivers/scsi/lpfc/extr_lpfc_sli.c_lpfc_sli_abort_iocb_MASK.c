
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_sli_ring {int ringno; } ;
struct TYPE_6__ {int abortIoTag; int abortContextTag; int abortType; } ;
struct TYPE_7__ {TYPE_2__ acxri; } ;
struct TYPE_8__ {int ulpLe; int ulpCommand; int ulpClass; int ulpIoTag; TYPE_3__ un; int ulpContext; } ;
struct lpfc_iocbq {int iocb_flag; int iocb_cmpl; TYPE_4__ iocb; int fcp_wqidx; int vport; int sli4_xritag; } ;
struct TYPE_5__ {int last_iotag; struct lpfc_iocbq** iocbq_lookup; } ;
struct lpfc_hba {scalar_t__ sli_rev; int pport; TYPE_1__ sli; } ;
typedef int lpfc_ctx_cmd ;
typedef TYPE_4__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct lpfc_hba*) ;
 int VAR_7 ;
 struct lpfc_iocbq* FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 scalar_t__ FUNC_4 (struct lpfc_iocbq*,struct lpfc_vport*,int ,int ,int ) ;

int
FUNC_5(struct lpfc_vport *VAR_8, struct lpfc_sli_ring *VAR_9,
      uint16_t VAR_10, uint64_t VAR_11, lpfc_ctx_cmd VAR_12)
{
 struct lpfc_hba *VAR_13 = VAR_8->phba;
 struct lpfc_iocbq *VAR_14;
 struct lpfc_iocbq *VAR_15;
 IOCB_t *VAR_16 = ((void*)0);
 int VAR_17 = 0, VAR_18 = 0;
 int VAR_19;

 for (VAR_19 = 1; VAR_19 <= VAR_13->sli.last_iotag; VAR_19++) {
  VAR_14 = VAR_13->sli.iocbq_lookup[VAR_19];

  if (FUNC_4(VAR_14, VAR_8, VAR_10, VAR_11,
            VAR_12) != 0)
   continue;


  VAR_15 = FUNC_1(VAR_13);
  if (VAR_15 == ((void*)0)) {
   VAR_17++;
   continue;
  }

  VAR_16 = &VAR_14->iocb;
  VAR_15->iocb.un.acxri.abortType = VAR_0;
  VAR_15->iocb.un.acxri.abortContextTag = VAR_16->ulpContext;
  if (VAR_13->sli_rev == VAR_5)
   VAR_15->iocb.un.acxri.abortIoTag = VAR_14->sli4_xritag;
  else
   VAR_15->iocb.un.acxri.abortIoTag = VAR_16->ulpIoTag;
  VAR_15->iocb.ulpLe = 1;
  VAR_15->iocb.ulpClass = VAR_16->ulpClass;
  VAR_15->vport = VAR_13->pport;


  VAR_15->fcp_wqidx = VAR_14->fcp_wqidx;
  if (VAR_14->iocb_flag & VAR_4)
   VAR_15->iocb_flag |= VAR_6;

  if (FUNC_0(VAR_13))
   VAR_15->iocb.ulpCommand = VAR_1;
  else
   VAR_15->iocb.ulpCommand = VAR_2;


  VAR_15->iocb_cmpl = VAR_7;
  VAR_18 = FUNC_2(VAR_13, VAR_9->ringno,
           VAR_15, 0);
  if (VAR_18 == VAR_3) {
   FUNC_3(VAR_13, VAR_15);
   VAR_17++;
   continue;
  }
 }

 return VAR_17;
}
