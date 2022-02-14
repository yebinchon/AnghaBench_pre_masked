
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct lpfc_vport {int dummy; } ;
struct TYPE_5__ {int CmdRsp; } ;
struct TYPE_6__ {TYPE_1__ bits; } ;
struct lpfc_sli_ct_request {TYPE_2__ CommandResponse; } ;
struct lpfc_nodelist {int dummy; } ;
struct TYPE_7__ {int * ulpWord; } ;
struct TYPE_8__ {TYPE_3__ un; scalar_t__ ulpStatus; } ;
struct lpfc_iocbq {TYPE_4__ iocb; struct lpfc_vport* vport; struct lpfc_dmabuf* context2; struct lpfc_dmabuf* context1; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {struct lpfc_sli_ct_request* virt; } ;
typedef TYPE_4__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_4 ;




 int FUNC_1 (int) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_3 (struct lpfc_vport*,int ,char*,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_nodelist*,int const) ;
 struct lpfc_nodelist* FUNC_6 (struct lpfc_vport*,int ) ;
 int FUNC_7 (struct lpfc_vport*,int ,int ,char*,int,...) ;

__attribute__((used)) static void
FUNC_8(struct lpfc_hba *VAR_5, struct lpfc_iocbq *VAR_6,
        struct lpfc_iocbq * VAR_7)
{
 struct lpfc_dmabuf *VAR_8 = VAR_6->context1;
 struct lpfc_dmabuf *VAR_9 = VAR_6->context2;
 struct lpfc_sli_ct_request *VAR_10 = VAR_9->virt;
 struct lpfc_sli_ct_request *VAR_11 = VAR_8->virt;
 struct lpfc_nodelist *VAR_12;
 uint16_t VAR_13 = VAR_11->CommandResponse.bits.CmdRsp;
 uint16_t VAR_14 = VAR_10->CommandResponse.bits.CmdRsp;
 struct lpfc_vport *VAR_15 = VAR_6->vport;
 IOCB_t *VAR_16 = &VAR_7->iocb;
 uint32_t VAR_17;

 VAR_17 = FUNC_4(VAR_15);

 FUNC_3(VAR_15, VAR_3,
  "FDMI cmpl:       status:x%x/x%x latt:%d",
  VAR_16->ulpStatus, VAR_16->un.ulpWord[4], VAR_17);

 if (VAR_17 || VAR_16->ulpStatus) {
  FUNC_7(VAR_15, VAR_1, VAR_2,
     "0229 FDMI cmd %04x failed, latt = %d "
     "ulpStatus: x%x, rid x%x\n",
     FUNC_1(VAR_13), VAR_17, VAR_16->ulpStatus,
     VAR_16->un.ulpWord[4]);
  FUNC_2(VAR_5, VAR_6);
  return;
 }

 VAR_12 = FUNC_6(VAR_15, VAR_0);
 if (!VAR_12 || !FUNC_0(VAR_12))
  goto fail_out;

 if (VAR_14 == FUNC_1(VAR_4)) {

  FUNC_7(VAR_15, VAR_1, VAR_2,
     "0220 FDMI rsp failed Data: x%x\n",
     FUNC_1(VAR_13));
 }

 switch (FUNC_1(VAR_13)) {
 case 129:
  FUNC_5(VAR_15, VAR_12, 128);
  break;

 case 128:
  break;

 case 131:
  FUNC_5(VAR_15, VAR_12, 130);
  break;

 case 130:
  FUNC_5(VAR_15, VAR_12, 129);
  break;
 }

fail_out:
 FUNC_2(VAR_5, VAR_6);
 return;
}
