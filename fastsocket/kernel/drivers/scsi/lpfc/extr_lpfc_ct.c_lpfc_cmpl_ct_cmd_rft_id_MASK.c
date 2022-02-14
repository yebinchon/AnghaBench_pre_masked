
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lpfc_vport {int ct_flags; } ;
struct TYPE_4__ {scalar_t__ CmdRsp; } ;
struct TYPE_5__ {TYPE_1__ bits; } ;
struct lpfc_sli_ct_request {TYPE_2__ CommandResponse; } ;
struct TYPE_6__ {scalar_t__ ulpStatus; } ;
struct lpfc_iocbq {scalar_t__ context2; struct lpfc_vport* vport; TYPE_3__ iocb; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
typedef TYPE_3__ IOCB_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;

__attribute__((used)) static void
FUNC_2(struct lpfc_hba *VAR_3, struct lpfc_iocbq *VAR_4,
   struct lpfc_iocbq *VAR_5)
{
 IOCB_t *VAR_6 = &VAR_5->iocb;
 struct lpfc_vport *VAR_7 = VAR_4->vport;

 if (VAR_6->ulpStatus == VAR_1) {
  struct lpfc_dmabuf *VAR_8;
  struct lpfc_sli_ct_request *VAR_9;

  VAR_8 = (struct lpfc_dmabuf *) VAR_4->context2;
  VAR_9 = (struct lpfc_sli_ct_request *) VAR_8->virt;
  if (VAR_9->CommandResponse.bits.CmdRsp ==
      FUNC_0(VAR_2))
   VAR_7->ct_flags |= VAR_0;
 }
 FUNC_1(VAR_3, VAR_4, VAR_5);
 return;
}
