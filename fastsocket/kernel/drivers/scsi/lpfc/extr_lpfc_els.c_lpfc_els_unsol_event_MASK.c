
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lpfc_vport {int dummy; } ;
struct lpfc_sli_ring {int dummy; } ;
struct TYPE_11__ {int* ulpWord; TYPE_4__* cont64; } ;
struct TYPE_8__ {int vpi; } ;
struct TYPE_9__ {TYPE_2__ rcvsli3; } ;
struct TYPE_12__ {scalar_t__ ulpStatus; scalar_t__ ulpCommand; int ulpBdeCount; TYPE_5__ un; TYPE_3__ unsli3; } ;
struct lpfc_iocbq {struct lpfc_dmabuf* context2; struct lpfc_dmabuf* context3; int * context1; TYPE_6__ iocb; } ;
struct TYPE_7__ {int NoRcvBuf; } ;
struct lpfc_hba {int sli3_options; struct lpfc_vport* pport; TYPE_1__ fc_stat; } ;
struct lpfc_dmabuf {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_10__ {int addrLow; int addrHigh; } ;
typedef TYPE_6__ IOCB_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_sli_ring*,struct lpfc_vport*,struct lpfc_iocbq*) ;
 struct lpfc_vport* FUNC_2 (struct lpfc_hba*,int) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_dmabuf*) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_sli_ring*,int ) ;
 int FUNC_5 (struct lpfc_hba*,int ) ;
 struct lpfc_dmabuf* FUNC_6 (struct lpfc_hba*,struct lpfc_sli_ring*,int ) ;

void
FUNC_7(struct lpfc_hba *VAR_9, struct lpfc_sli_ring *VAR_10,
       struct lpfc_iocbq *VAR_11)
{
 struct lpfc_vport *VAR_12 = VAR_9->pport;
 IOCB_t *VAR_13 = &VAR_11->iocb;
 dma_addr_t VAR_14;
 struct lpfc_dmabuf *VAR_15 = VAR_11->context2;
 struct lpfc_dmabuf *VAR_16 = VAR_11->context3;

 VAR_11->context1 = ((void*)0);
 VAR_11->context2 = ((void*)0);
 VAR_11->context3 = ((void*)0);

 if (VAR_13->ulpStatus == VAR_5) {
  FUNC_5(VAR_9, VAR_6);
 } else if (VAR_13->ulpStatus == VAR_4 &&
     (VAR_13->un.ulpWord[4] & VAR_2) ==
     VAR_3) {
  VAR_9->fc_stat.NoRcvBuf++;

  if (!(VAR_9->sli3_options & VAR_7))
   FUNC_4(VAR_9, VAR_10, 0);
  return;
 }

 if ((VAR_9->sli3_options & VAR_8) &&
     (VAR_13->ulpCommand == VAR_0 ||
      VAR_13->ulpCommand == VAR_1)) {
  if (VAR_13->unsli3.rcvsli3.vpi == 0xffff)
   VAR_12 = VAR_9->pport;
  else
   VAR_12 = FUNC_2(VAR_9,
      VAR_13->unsli3.rcvsli3.vpi);
 }




 if (VAR_13->ulpBdeCount == 0)
  return;




 if (VAR_9->sli3_options & VAR_7) {
  VAR_11->context2 = VAR_15;
 } else {
  VAR_14 = FUNC_0(VAR_13->un.cont64[0].addrHigh,
     VAR_13->un.cont64[0].addrLow);
  VAR_11->context2 = FUNC_6(VAR_9, VAR_10,
            VAR_14);
 }

 FUNC_1(VAR_9, VAR_10, VAR_12, VAR_11);




 if (VAR_11->context2) {
  FUNC_3(VAR_9, (struct lpfc_dmabuf *)VAR_11->context2);
  VAR_11->context2 = ((void*)0);
 }


 if ((VAR_9->sli3_options & VAR_7) &&
     VAR_13->ulpBdeCount == 2) {
  VAR_11->context2 = VAR_16;
  FUNC_1(VAR_9, VAR_10, VAR_12, VAR_11);

  if (VAR_11->context2) {
   FUNC_3(VAR_9, VAR_11->context2);
   VAR_11->context2 = ((void*)0);
  }
 }
}
