
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int uint32_t ;
struct ulp_bde64 {int dummy; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_rport_data {struct lpfc_nodelist* pnode; } ;
struct lpfc_nodelist {int nlp_flag; size_t nlp_rpi; } ;
struct TYPE_23__ {struct lpfc_nodelist* ndlp; } ;
struct TYPE_16__ {int Fctl; int Type; int Rctl; scalar_t__ Dfctl; } ;
struct TYPE_17__ {TYPE_10__ hcsw; } ;
struct TYPE_30__ {int bdeSize; int bdeFlags; int addrLow; int addrHigh; scalar_t__ ulpIoTag32; } ;
struct TYPE_19__ {TYPE_11__ w5; TYPE_9__ bdl; } ;
struct TYPE_18__ {TYPE_13__ genreq64; } ;
struct TYPE_20__ {int ulpBdeCount; int ulpLe; size_t ulpContext; int ulpTimeout; int ulpOwner; int ulpClass; TYPE_12__ un; int ulpCommand; } ;
struct lpfc_iocbq {TYPE_2__ context_un; struct lpfc_dmabuf* context3; struct lpfc_dmabuf* context2; struct lpfc_dmabuf* context1; int iocb_cmpl; int iocb_flag; int vport; TYPE_14__ iocb; } ;
struct TYPE_22__ {size_t* rpi_ids; } ;
struct lpfc_hba {scalar_t__ sli_rev; int fc_ratov; int cfg_poll; int HCregaddr; int pport; TYPE_1__ sli4_hba; } ;
struct TYPE_24__ {struct lpfc_dmabuf* rmp; struct lpfc_nodelist* ndlp; struct lpfc_iocbq* cmdiocbq; } ;
struct TYPE_25__ {TYPE_3__ iocb; } ;
struct lpfc_dmabuf {int phys; scalar_t__ virt; TYPE_4__ context_un; struct fc_bsg_job* set_job; int type; int list; } ;
struct TYPE_29__ {int payload_len; } ;
struct TYPE_21__ {int payload_len; } ;
struct fc_bsg_job {struct lpfc_dmabuf* dd_data; TYPE_7__* reply; TYPE_8__ reply_payload; TYPE_15__ request_payload; TYPE_6__* rport; TYPE_5__* shost; } ;
struct bsg_job_data {int phys; scalar_t__ virt; TYPE_4__ context_un; struct fc_bsg_job* set_job; int type; int list; } ;
struct TYPE_28__ {int result; scalar_t__ reply_payload_rcv_len; } ;
struct TYPE_27__ {struct lpfc_rport_data* dd_data; } ;
struct TYPE_26__ {scalar_t__ hostdata; } ;
typedef TYPE_14__ IOCB_t ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_2 (int,int ) ;
 struct lpfc_dmabuf* FUNC_3 (struct lpfc_hba*,int ,int,struct ulp_bde64*,int*) ;
 int FUNC_4 (struct lpfc_dmabuf*,TYPE_15__*,int ,int) ;
 int VAR_26 ;
 int FUNC_5 (struct lpfc_hba*,struct lpfc_dmabuf*) ;
 scalar_t__ FUNC_6 (struct lpfc_hba*,int ,int *) ;
 int FUNC_7 (struct lpfc_hba*,scalar_t__,int ) ;
 int FUNC_8 (struct lpfc_nodelist*) ;
 int FUNC_9 (struct lpfc_nodelist*) ;
 int FUNC_10 (struct lpfc_hba*,int ,int ,char*) ;
 scalar_t__ FUNC_11 (int ,int*) ;
 struct lpfc_iocbq* FUNC_12 (struct lpfc_hba*) ;
 int FUNC_13 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_14 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int,int ) ;

__attribute__((used)) static int
FUNC_19(struct fc_bsg_job *VAR_27)
{
 struct lpfc_vport *VAR_28 = (struct lpfc_vport *)VAR_27->shost->hostdata;
 struct lpfc_hba *VAR_29 = VAR_28->phba;
 struct lpfc_rport_data *VAR_30 = VAR_27->rport->dd_data;
 struct lpfc_nodelist *VAR_31 = VAR_30->pnode;
 struct ulp_bde64 *VAR_32 = ((void*)0);
 uint32_t VAR_33;
 struct lpfc_iocbq *VAR_34 = ((void*)0);
 IOCB_t *VAR_35;
 struct lpfc_dmabuf *VAR_36 = ((void*)0), *VAR_37 = ((void*)0), *VAR_38 = ((void*)0);
 int VAR_39;
 int VAR_40;
 struct bsg_job_data *VAR_41;
 uint32_t VAR_42;
 int VAR_43 = 0;
 int VAR_44;


 VAR_27->reply->reply_payload_rcv_len = 0;


 VAR_41 = FUNC_2(sizeof(struct bsg_job_data), VAR_10);
 if (!VAR_41) {
  FUNC_10(VAR_29, VAR_14, VAR_16,
    "2733 Failed allocation of dd_data\n");
  VAR_43 = -VAR_7;
  goto no_dd_data;
 }

 if (!FUNC_8(VAR_31)) {
  VAR_43 = -VAR_6;
  goto no_ndlp;
 }

 if (VAR_31->nlp_flag & VAR_22) {
  VAR_43 = -VAR_6;
  goto free_ndlp;
 }

 VAR_34 = FUNC_12(VAR_29);
 if (!VAR_34) {
  VAR_43 = -VAR_7;
  goto free_ndlp;
 }

 VAR_35 = &VAR_34->iocb;

 VAR_36 = FUNC_2(sizeof(struct lpfc_dmabuf), VAR_10);
 if (!VAR_36) {
  VAR_43 = -VAR_7;
  goto free_cmdiocbq;
 }
 VAR_36->virt = FUNC_6(VAR_29, 0, &VAR_36->phys);
 if (!VAR_36->virt) {
  VAR_43 = -VAR_7;
  goto free_bmp;
 }

 FUNC_0(&VAR_36->list);

 VAR_32 = (struct ulp_bde64 *) VAR_36->virt;
 VAR_39 = VAR_17/sizeof(struct ulp_bde64);
 VAR_37 = FUNC_3(VAR_29, VAR_27->request_payload.payload_len,
         1, VAR_32, &VAR_39);
 if (!VAR_37) {
  VAR_43 = -VAR_7;
  goto free_bmp;
 }
 FUNC_4(VAR_37, &VAR_27->request_payload,
      VAR_27->request_payload.payload_len, 1);

 VAR_32 += VAR_39;
 VAR_40 = VAR_17/sizeof(struct ulp_bde64) - VAR_39;
 VAR_38 = FUNC_3(VAR_29, VAR_27->reply_payload.payload_len, 0,
         VAR_32, &VAR_40);
 if (!VAR_38) {
  VAR_43 = -VAR_7;
  goto free_cmp;
 }

 VAR_35->un.genreq64.bdl.ulpIoTag32 = 0;
 VAR_35->un.genreq64.bdl.addrHigh = FUNC_15(VAR_36->phys);
 VAR_35->un.genreq64.bdl.addrLow = FUNC_16(VAR_36->phys);
 VAR_35->un.genreq64.bdl.bdeFlags = VAR_0;
 VAR_35->un.genreq64.bdl.bdeSize =
  (VAR_39 + VAR_40) * sizeof(struct ulp_bde64);
 VAR_35->ulpCommand = VAR_2;
 VAR_35->un.genreq64.w5.hcsw.Fctl = (VAR_24 | VAR_15);
 VAR_35->un.genreq64.w5.hcsw.Dfctl = 0;
 VAR_35->un.genreq64.w5.hcsw.Rctl = VAR_8;
 VAR_35->un.genreq64.w5.hcsw.Type = VAR_9;
 VAR_35->ulpBdeCount = 1;
 VAR_35->ulpLe = 1;
 VAR_35->ulpClass = VAR_1;
 VAR_35->ulpContext = VAR_31->nlp_rpi;
 if (VAR_29->sli_rev == VAR_21)
  VAR_35->ulpContext = VAR_29->sli4_hba.rpi_ids[VAR_31->nlp_rpi];
 VAR_35->ulpOwner = VAR_23;
 VAR_34->vport = VAR_29->pport;
 VAR_34->context3 = VAR_36;
 VAR_34->iocb_flag |= VAR_20;
 VAR_33 = VAR_29->fc_ratov * 2;
 VAR_35->ulpTimeout = VAR_33;

 VAR_34->iocb_cmpl = VAR_26;
 VAR_34->context1 = VAR_41;
 VAR_34->context2 = VAR_37;
 VAR_34->context3 = VAR_36;
 VAR_34->context_un.ndlp = VAR_31;
 VAR_41->type = VAR_25;
 VAR_41->set_job = VAR_27;
 VAR_41->context_un.iocb.cmdiocbq = VAR_34;
 VAR_41->context_un.iocb.ndlp = VAR_31;
 VAR_41->context_un.iocb.rmp = VAR_38;
 VAR_27->dd_data = VAR_41;

 if (VAR_29->cfg_poll & VAR_3) {
  if (FUNC_11(VAR_29->HCregaddr, &VAR_42)) {
   VAR_43 = -VAR_5 ;
   goto free_rmp;
  }
  VAR_42 |= (VAR_11 << VAR_19);
  FUNC_18(VAR_42, VAR_29->HCregaddr);
  FUNC_17(VAR_29->HCregaddr);
 }

 VAR_44 = FUNC_13(VAR_29, VAR_18, VAR_34, 0);
 if (VAR_44 == VAR_13)
  return 0;
 else if (VAR_44 == VAR_12)
  VAR_43 = -VAR_4;
 else
  VAR_43 = -VAR_5;



free_rmp:
 FUNC_5(VAR_29, VAR_38);
free_cmp:
 FUNC_5(VAR_29, VAR_37);
free_bmp:
 if (VAR_36->virt)
  FUNC_7(VAR_29, VAR_36->virt, VAR_36->phys);
 FUNC_1(VAR_36);
free_cmdiocbq:
 FUNC_14(VAR_29, VAR_34);
free_ndlp:
 FUNC_9(VAR_31);
no_ndlp:
 FUNC_1(VAR_41);
no_dd_data:

 VAR_27->reply->result = VAR_43;
 VAR_27->dd_data = ((void*)0);
 return VAR_43;
}
