
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_17__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct ulp_bde64 {int dummy; } ;
struct menlo_response {int dummy; } ;
struct menlo_command {scalar_t__ cmd; int xri; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_26__ {int Fctl; int Type; int Rctl; scalar_t__ Dfctl; } ;
struct TYPE_27__ {TYPE_1__ hcsw; } ;
struct TYPE_21__ {int bdeSize; int bdeFlags; int addrLow; int addrHigh; scalar_t__ ulpIoTag32; } ;
struct TYPE_23__ {TYPE_2__ w5; TYPE_13__ bdl; } ;
struct TYPE_22__ {scalar_t__* ulpWord; TYPE_15__ genreq64; } ;
struct TYPE_24__ {int ulpBdeCount; int ulpLe; int ulpPU; int ulpContext; TYPE_14__ un; int ulpCommand; scalar_t__ ulpTimeout; int ulpOwner; int ulpClass; } ;
struct lpfc_iocbq {struct lpfc_dmabuf* context3; struct lpfc_dmabuf* context2; struct lpfc_dmabuf* context1; int iocb_cmpl; int vport; int iocb_flag; TYPE_16__ iocb; } ;
struct lpfc_hba {int menlo_flag; int pport; } ;
struct TYPE_28__ {struct lpfc_dmabuf* rmp; struct lpfc_iocbq* cmdiocbq; } ;
struct TYPE_29__ {TYPE_3__ menlo; } ;
struct lpfc_dmabuf {int phys; scalar_t__ virt; TYPE_4__ context_un; struct fc_bsg_job* set_job; int type; int list; } ;
struct fc_bsg_request {int dummy; } ;
struct TYPE_20__ {int payload_len; } ;
struct TYPE_25__ {int payload_len; } ;
struct fc_bsg_job {int request_len; int reply_len; struct lpfc_dmabuf* dd_data; TYPE_11__* reply; TYPE_12__ reply_payload; TYPE_17__ request_payload; TYPE_8__* request; TYPE_5__* shost; } ;
struct bsg_job_data {int phys; scalar_t__ virt; TYPE_4__ context_un; struct fc_bsg_job* set_job; int type; int list; } ;
struct TYPE_34__ {scalar_t__ vendor_rsp; } ;
struct TYPE_31__ {scalar_t__ vendor_cmd; } ;
struct TYPE_32__ {TYPE_6__ h_vendor; } ;
struct TYPE_33__ {TYPE_7__ rqst_data; } ;
struct TYPE_30__ {scalar_t__ hostdata; } ;
struct TYPE_18__ {TYPE_9__ vendor_reply; } ;
struct TYPE_19__ {int result; TYPE_10__ reply_data; scalar_t__ reply_payload_rcv_len; } ;
typedef TYPE_16__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_2 (int,int ) ;
 struct lpfc_dmabuf* FUNC_3 (struct lpfc_hba*,int ,int,struct ulp_bde64*,int*) ;
 int FUNC_4 (struct lpfc_dmabuf*,TYPE_17__*,int ,int) ;
 int VAR_26 ;
 int FUNC_5 (struct lpfc_hba*,struct lpfc_dmabuf*) ;
 scalar_t__ FUNC_6 (struct lpfc_hba*,int ,int *) ;
 int FUNC_7 (struct lpfc_hba*,scalar_t__,int ) ;
 int FUNC_8 (struct lpfc_hba*,int ,int ,char*) ;
 struct lpfc_iocbq* FUNC_9 (struct lpfc_hba*) ;
 int FUNC_10 (struct lpfc_hba*,int ,struct lpfc_iocbq*,scalar_t__) ;
 int FUNC_11 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(struct fc_bsg_job *VAR_27)
{
 struct lpfc_vport *VAR_28 = (struct lpfc_vport *)VAR_27->shost->hostdata;
 struct lpfc_hba *VAR_29 = VAR_28->phba;
 struct lpfc_iocbq *VAR_30;
 IOCB_t *VAR_31;
 int VAR_32 = 0;
 struct menlo_command *VAR_33;
 struct menlo_response *VAR_34;
 struct lpfc_dmabuf *VAR_35 = ((void*)0), *VAR_36 = ((void*)0), *VAR_37 = ((void*)0);
 int VAR_38;
 int VAR_39;
 struct bsg_job_data *VAR_40;
 struct ulp_bde64 *VAR_41 = ((void*)0);


 VAR_27->reply->reply_payload_rcv_len = 0;

 if (VAR_27->request_len <
     sizeof(struct fc_bsg_request) +
  sizeof(struct menlo_command)) {
  FUNC_8(VAR_29, VAR_11, VAR_13,
    "2784 Received MENLO_CMD request below "
    "minimum size\n");
  VAR_32 = -VAR_6;
  goto no_dd_data;
 }

 if (VAR_27->reply_len <
     sizeof(struct fc_bsg_request) + sizeof(struct menlo_response)) {
  FUNC_8(VAR_29, VAR_11, VAR_13,
    "2785 Received MENLO_CMD reply below "
    "minimum size\n");
  VAR_32 = -VAR_6;
  goto no_dd_data;
 }

 if (!(VAR_29->menlo_flag & VAR_9)) {
  FUNC_8(VAR_29, VAR_11, VAR_13,
    "2786 Adapter does not support menlo "
    "commands\n");
  VAR_32 = -VAR_5;
  goto no_dd_data;
 }

 VAR_33 = (struct menlo_command *)
  VAR_27->request->rqst_data.h_vendor.vendor_cmd;

 VAR_34 = (struct menlo_response *)
  VAR_27->reply->reply_data.vendor_reply.vendor_rsp;


 VAR_40 = FUNC_2(sizeof(struct bsg_job_data), VAR_8);
 if (!VAR_40) {
  FUNC_8(VAR_29, VAR_11, VAR_13,
    "2787 Failed allocation of dd_data\n");
  VAR_32 = -VAR_4;
  goto no_dd_data;
 }

 VAR_35 = FUNC_2(sizeof(struct lpfc_dmabuf), VAR_8);
 if (!VAR_35) {
  VAR_32 = -VAR_4;
  goto free_dd;
 }

 VAR_35->virt = FUNC_6(VAR_29, 0, &VAR_35->phys);
 if (!VAR_35->virt) {
  VAR_32 = -VAR_4;
  goto free_bmp;
 }

 FUNC_0(&VAR_35->list);

 VAR_41 = (struct ulp_bde64 *)VAR_35->virt;
 VAR_38 = VAR_14/sizeof(struct ulp_bde64);
 VAR_36 = FUNC_3(VAR_29, VAR_27->request_payload.payload_len,
         1, VAR_41, &VAR_38);
 if (!VAR_36) {
  VAR_32 = -VAR_4;
  goto free_bmp;
 }
 FUNC_4(VAR_36, &VAR_27->request_payload,
      VAR_27->request_payload.payload_len, 1);

 VAR_41 += VAR_38;
 VAR_39 = VAR_14/sizeof(struct ulp_bde64) - VAR_38;
 VAR_37 = FUNC_3(VAR_29, VAR_27->reply_payload.payload_len, 0,
         VAR_41, &VAR_39);
 if (!VAR_37) {
  VAR_32 = -VAR_4;
  goto free_cmp;
 }

 VAR_30 = FUNC_9(VAR_29);
 if (!VAR_30) {
  VAR_32 = -VAR_4;
  goto free_rmp;
 }

 VAR_31 = &VAR_30->iocb;
 VAR_31->un.genreq64.bdl.ulpIoTag32 = 0;
 VAR_31->un.genreq64.bdl.addrHigh = FUNC_12(VAR_35->phys);
 VAR_31->un.genreq64.bdl.addrLow = FUNC_13(VAR_35->phys);
 VAR_31->un.genreq64.bdl.bdeFlags = VAR_0;
 VAR_31->un.genreq64.bdl.bdeSize =
     (VAR_38 + VAR_39) * sizeof(struct ulp_bde64);
 VAR_31->un.genreq64.w5.hcsw.Fctl = (VAR_24 | VAR_12);
 VAR_31->un.genreq64.w5.hcsw.Dfctl = 0;
 VAR_31->un.genreq64.w5.hcsw.Rctl = VAR_7;
 VAR_31->un.genreq64.w5.hcsw.Type = VAR_22;
 VAR_31->ulpBdeCount = 1;
 VAR_31->ulpClass = VAR_1;
 VAR_31->ulpOwner = VAR_23;
 VAR_31->ulpLe = 1;
 VAR_30->iocb_flag |= VAR_17;
 VAR_30->vport = VAR_29->pport;

 VAR_31->ulpTimeout = VAR_21 - 5;
 VAR_30->iocb_cmpl = VAR_26;
 VAR_30->context1 = VAR_40;
 VAR_30->context2 = VAR_36;
 VAR_30->context3 = VAR_35;
 if (VAR_33->cmd == VAR_15) {
  VAR_31->ulpCommand = VAR_2;
  VAR_31->ulpPU = VAR_20;
  VAR_31->un.ulpWord[4] = VAR_19;
  VAR_31->ulpContext = VAR_18;
 } else {
  VAR_31->ulpCommand = VAR_3;
  VAR_31->ulpPU = 1;
  VAR_31->un.ulpWord[4] = 0;
  VAR_31->ulpContext = VAR_33->xri;
 }

 VAR_40->type = VAR_25;
 VAR_40->set_job = VAR_27;
 VAR_40->context_un.menlo.cmdiocbq = VAR_30;
 VAR_40->context_un.menlo.rmp = VAR_37;
 VAR_27->dd_data = VAR_40;

 VAR_32 = FUNC_10(VAR_29, VAR_16, VAR_30,
  VAR_21 - 5);
 if (VAR_32 == VAR_10)
  return 0;

 FUNC_11(VAR_29, VAR_30);

free_rmp:
 FUNC_5(VAR_29, VAR_37);
free_cmp:
 FUNC_5(VAR_29, VAR_36);
free_bmp:
 if (VAR_35->virt)
  FUNC_7(VAR_29, VAR_35->virt, VAR_35->phys);
 FUNC_1(VAR_35);
free_dd:
 FUNC_1(VAR_40);
no_dd_data:

 VAR_27->reply->result = VAR_32;
 VAR_27->dd_data = ((void*)0);
 return VAR_32;
}
