
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct TYPE_6__ {int CmdRsp; } ;
struct TYPE_7__ {TYPE_1__ bits; } ;
struct lpfc_sli_ct_request {TYPE_2__ CommandResponse; } ;
struct lpfc_nodelist {int dummy; } ;
struct TYPE_9__ {struct lpfc_nodelist* ndlp; struct lpfc_iocbq* rsp_iocb; } ;
struct TYPE_8__ {int* ulpWord; } ;
struct TYPE_10__ {scalar_t__ ulpStatus; TYPE_3__ un; int ulpIoTag; int ulpContext; } ;
struct lpfc_iocbq {scalar_t__ retry; TYPE_4__ context_un; TYPE_5__ iocb; scalar_t__ context2; scalar_t__ context1; struct lpfc_vport* vport; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
typedef TYPE_5__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_2 (struct lpfc_vport*,int ,char*,scalar_t__,int,int) ;
 int FUNC_3 (struct lpfc_vport*) ;
 int FUNC_4 (struct lpfc_vport*,int,scalar_t__,int ) ;
 int FUNC_5 (struct lpfc_vport*,int ,int ,char*,int,...) ;

__attribute__((used)) static void
FUNC_6(struct lpfc_hba *VAR_9, struct lpfc_iocbq *VAR_10,
      struct lpfc_iocbq *VAR_11)
{
 struct lpfc_vport *VAR_12 = VAR_10->vport;
 struct lpfc_dmabuf *VAR_13;
 struct lpfc_dmabuf *VAR_14;
 IOCB_t *VAR_15;
 struct lpfc_sli_ct_request *VAR_16;
 struct lpfc_nodelist *VAR_17;
 int VAR_18, VAR_19;
 uint8_t VAR_20;
 uint32_t VAR_21;


 VAR_17 = VAR_10->context_un.ndlp;


 VAR_10->context_un.rsp_iocb = VAR_11;

 VAR_13 = (struct lpfc_dmabuf *) VAR_10->context1;
 VAR_14 = (struct lpfc_dmabuf *) VAR_10->context2;
 VAR_15 = &VAR_11->iocb;

 VAR_18 = FUNC_0(((struct lpfc_sli_ct_request *) VAR_13->virt)->
     CommandResponse.bits.CmdRsp);
 VAR_16 = (struct lpfc_sli_ct_request *) VAR_14->virt;

 VAR_21 = FUNC_3(VAR_12);


 FUNC_5(VAR_12, VAR_5, VAR_6,
    "0209 CT Request completes, latt %d, "
    "ulpStatus x%x CmdRsp x%x, Context x%x, Tag x%x\n",
    VAR_21, VAR_15->ulpStatus,
    VAR_16->CommandResponse.bits.CmdRsp,
    VAR_10->iocb.ulpContext, VAR_10->iocb.ulpIoTag);

 FUNC_2(VAR_12, VAR_7,
  "CT cmd cmpl:     status:x%x/x%x cmd:x%x",
  VAR_15->ulpStatus, VAR_15->un.ulpWord[4], VAR_18);

 if (VAR_15->ulpStatus) {
  FUNC_5(VAR_12, VAR_4, VAR_6,
     "0268 NS cmd %x Error (%d %d)\n",
     VAR_18, VAR_15->ulpStatus, VAR_15->un.ulpWord[4]);

  if ((VAR_15->ulpStatus == VAR_3) &&
   (((VAR_15->un.ulpWord[4] & VAR_0) ==
     VAR_2) ||
    ((VAR_15->un.ulpWord[4] & VAR_0) ==
     VAR_1)))
   goto out;

  VAR_20 = VAR_10->retry;
  if (VAR_20 >= VAR_8)
   goto out;

  VAR_20++;
  FUNC_5(VAR_12, VAR_5, VAR_6,
     "0250 Retrying NS cmd %x\n", VAR_18);
  VAR_19 = FUNC_4(VAR_12, VAR_18, VAR_20, 0);
  if (VAR_19 == 0)
   goto out;
 }

out:
 VAR_10->context_un.ndlp = VAR_17;
 FUNC_1(VAR_9, VAR_10);
 return;
}
