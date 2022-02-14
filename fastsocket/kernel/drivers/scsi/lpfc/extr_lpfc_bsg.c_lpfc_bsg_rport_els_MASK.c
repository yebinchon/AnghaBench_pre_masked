
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_rport_data {struct lpfc_nodelist* pnode; } ;
struct TYPE_15__ {int * rmp; struct lpfc_nodelist* ndlp; struct lpfc_iocbq* cmdiocbq; } ;
struct TYPE_16__ {TYPE_11__ iocb; } ;
struct lpfc_nodelist {size_t nlp_rpi; TYPE_12__ context_un; struct fc_bsg_job* set_job; int type; int nlp_DID; } ;
struct TYPE_14__ {struct lpfc_nodelist* ndlp; } ;
struct TYPE_26__ {size_t ulpContext; } ;
struct lpfc_iocbq {struct lpfc_nodelist* context1; int iocb_cmpl; TYPE_10__ context_un; int iocb_flag; TYPE_9__ iocb; scalar_t__ context2; } ;
struct TYPE_25__ {size_t* rpi_ids; } ;
struct lpfc_hba {scalar_t__ sli_rev; int cfg_poll; int HCregaddr; TYPE_8__ sli4_hba; } ;
struct lpfc_dmabuf {int virt; } ;
struct TYPE_24__ {scalar_t__ payload_len; int sg_cnt; int sg_list; } ;
struct TYPE_23__ {int payload_len; } ;
struct fc_bsg_job {struct lpfc_nodelist* dd_data; TYPE_13__* reply; TYPE_7__ request_payload; TYPE_6__ reply_payload; TYPE_5__* request; TYPE_2__* rport; TYPE_1__* shost; } ;
struct bsg_job_data {size_t nlp_rpi; TYPE_12__ context_un; struct fc_bsg_job* set_job; int type; int nlp_DID; } ;
struct TYPE_20__ {int els_code; } ;
struct TYPE_21__ {TYPE_3__ r_els; } ;
struct TYPE_22__ {TYPE_4__ rqst_data; } ;
struct TYPE_19__ {struct lpfc_rport_data* dd_data; } ;
struct TYPE_18__ {scalar_t__ hostdata; } ;
struct TYPE_17__ {int result; scalar_t__ reply_payload_rcv_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 struct lpfc_nodelist* FUNC_1 (int,int ) ;
 int VAR_18 ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_3 (struct lpfc_nodelist*) ;
 int FUNC_4 (struct lpfc_nodelist*) ;
 struct lpfc_iocbq* FUNC_5 (struct lpfc_vport*,int,int,int ,struct lpfc_nodelist*,int ,int) ;
 int FUNC_6 (struct lpfc_hba*,int ,int ,char*) ;
 scalar_t__ FUNC_7 (int ,int*) ;
 int FUNC_8 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int) ;
 int FUNC_11 (int,int ) ;

__attribute__((used)) static int
FUNC_12(struct fc_bsg_job *VAR_19)
{
 struct lpfc_vport *VAR_20 = (struct lpfc_vport *)VAR_19->shost->hostdata;
 struct lpfc_hba *VAR_21 = VAR_20->phba;
 struct lpfc_rport_data *VAR_22 = VAR_19->rport->dd_data;
 struct lpfc_nodelist *VAR_23 = VAR_22->pnode;
 uint32_t VAR_24;
 uint32_t VAR_25;
 uint32_t VAR_26;
 struct lpfc_iocbq *VAR_27;
 uint16_t VAR_28 = 0;
 struct bsg_job_data *VAR_29;
 uint32_t VAR_30;
 int VAR_31 = 0;


 VAR_19->reply->reply_payload_rcv_len = 0;





 if (VAR_19->request_payload.payload_len > VAR_6) {
  VAR_31 = -VAR_2;
  goto no_dd_data;
 }


 VAR_29 = FUNC_1(sizeof(struct bsg_job_data), VAR_7);
 if (!VAR_29) {
  FUNC_6(VAR_21, VAR_11, VAR_12,
    "2735 Failed allocation of dd_data\n");
  VAR_31 = -VAR_5;
  goto no_dd_data;
 }

 VAR_24 = VAR_19->request->rqst_data.r_els.els_code;
 VAR_25 = VAR_19->request_payload.payload_len;
 VAR_26 = VAR_19->reply_payload.payload_len;

 if (!FUNC_3(VAR_23)) {
  VAR_31 = -VAR_4;
  goto free_dd_data;
 }







 VAR_27 = FUNC_5(VAR_20, 1, VAR_25, 0, VAR_23,
          VAR_23->nlp_DID, VAR_24);
 if (!VAR_27) {
  VAR_31 = -VAR_3;
  goto release_ndlp;
 }

 VAR_28 = VAR_23->nlp_rpi;



 FUNC_10(VAR_19->request_payload.sg_list,
     VAR_19->request_payload.sg_cnt,
     ((struct lpfc_dmabuf *)VAR_27->context2)->virt,
     VAR_25);

 if (VAR_21->sli_rev == VAR_16)
  VAR_27->iocb.ulpContext = VAR_21->sli4_hba.rpi_ids[VAR_28];
 else
  VAR_27->iocb.ulpContext = VAR_28;
 VAR_27->iocb_flag |= VAR_15;
 VAR_27->context1 = VAR_29;
 VAR_27->context_un.ndlp = VAR_23;
 VAR_27->iocb_cmpl = VAR_18;
 VAR_29->type = VAR_17;
 VAR_29->set_job = VAR_19;
 VAR_29->context_un.iocb.cmdiocbq = VAR_27;
 VAR_29->context_un.iocb.ndlp = VAR_23;
 VAR_29->context_un.iocb.rmp = ((void*)0);
 VAR_19->dd_data = VAR_29;

 if (VAR_21->cfg_poll & VAR_0) {
  if (FUNC_7(VAR_21->HCregaddr, &VAR_30)) {
   VAR_31 = -VAR_3;
   goto linkdown_err;
  }
  VAR_30 |= (VAR_8 << VAR_14);
  FUNC_11(VAR_30, VAR_21->HCregaddr);
  FUNC_9(VAR_21->HCregaddr);
 }

 VAR_31 = FUNC_8(VAR_21, VAR_13, VAR_27, 0);

 if (VAR_31 == VAR_10)
  return 0;
 else if (VAR_31 == VAR_9)
  VAR_31 = -VAR_1;
 else
  VAR_31 = -VAR_3;

linkdown_err:

 VAR_27->context1 = VAR_23;
 FUNC_2(VAR_21, VAR_27);

release_ndlp:
 FUNC_4(VAR_23);

free_dd_data:
 FUNC_0(VAR_29);

no_dd_data:

 VAR_19->reply->result = VAR_31;
 VAR_19->dd_data = ((void*)0);
 return VAR_31;
}
