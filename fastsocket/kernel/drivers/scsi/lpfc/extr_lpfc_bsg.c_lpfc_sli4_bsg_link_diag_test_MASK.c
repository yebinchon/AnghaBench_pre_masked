
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
typedef struct TYPE_25__ TYPE_15__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


union lpfc_sli4_cfg_shdr {int response; } ;
typedef void* uint32_t ;
struct sli4_link_diag {int timeout; int error_action; int test_version; int loops; int test_id; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_sli4_cfg_mhdr {int dummy; } ;
struct lpfc_mbx_set_link_diag_state {int dummy; } ;
struct TYPE_31__ {int req; } ;
struct lpfc_mbx_run_link_diag_test {TYPE_6__ u; } ;
struct TYPE_29__ {int lnk_tp; int lnk_no; } ;
struct TYPE_30__ {TYPE_4__ lnk_info; int sli_intf; } ;
struct lpfc_hba {scalar_t__ sli_rev; int mbox_mem_pool; TYPE_5__ sli4_hba; } ;
struct fc_bsg_request {int dummy; } ;
struct fc_bsg_job {int request_len; int reply_len; int (* job_done ) (struct fc_bsg_job*) ;TYPE_14__* reply; TYPE_3__* request; struct Scsi_Host* shost; } ;
struct diag_status {int mbox_status; void* shdr_add_status; void* shdr_status; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_32__ {int cfg_shdr; } ;
struct TYPE_33__ {TYPE_7__ header; } ;
struct TYPE_34__ {TYPE_8__ sli4_config; struct lpfc_mbx_run_link_diag_test link_diag_test; } ;
struct TYPE_26__ {scalar_t__ vendor_cmd; } ;
struct TYPE_27__ {TYPE_1__ h_vendor; } ;
struct TYPE_28__ {TYPE_2__ rqst_data; } ;
struct TYPE_20__ {TYPE_9__ un; } ;
struct TYPE_21__ {TYPE_10__ mqe; } ;
struct TYPE_25__ {TYPE_11__ u; } ;
struct TYPE_22__ {scalar_t__ vendor_rsp; } ;
struct TYPE_23__ {TYPE_12__ vendor_reply; } ;
struct TYPE_24__ {int result; TYPE_13__ reply_data; } ;
typedef TYPE_15__ LPFC_MBOXQ_t ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (struct lpfc_hba*,int ,int ,char*,int,int,...) ;
 int FUNC_5 (struct lpfc_hba*,int) ;
 void* FUNC_6 (struct lpfc_hba*,TYPE_15__*,int ,int ,void*,int ) ;
 int VAR_21 ;
 int FUNC_7 (struct lpfc_hba*,TYPE_15__*,int ) ;
 TYPE_15__* FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_15__*,int ) ;
 int FUNC_10 (struct fc_bsg_job*) ;

__attribute__((used)) static int
FUNC_11(struct fc_bsg_job *VAR_22)
{
 struct Scsi_Host *VAR_23;
 struct lpfc_vport *VAR_24;
 struct lpfc_hba *VAR_25;
 LPFC_MBOXQ_t *VAR_26;
 struct sli4_link_diag *VAR_27;
 uint32_t VAR_28, VAR_29;
 uint32_t VAR_30;
 struct lpfc_mbx_run_link_diag_test *VAR_31;
 union lpfc_sli4_cfg_shdr *VAR_32;
 uint32_t VAR_33, VAR_34;
 struct diag_status *VAR_35;
 int VAR_36, VAR_37 = 0;

 VAR_23 = VAR_22->shost;
 if (!VAR_23) {
  VAR_37 = -VAR_1;
  goto job_error;
 }
 VAR_24 = (struct lpfc_vport *)VAR_22->shost->hostdata;
 if (!VAR_24) {
  VAR_37 = -VAR_1;
  goto job_error;
 }
 VAR_25 = VAR_24->phba;
 if (!VAR_25) {
  VAR_37 = -VAR_1;
  goto job_error;
 }

 if (VAR_25->sli_rev < VAR_11) {
  VAR_37 = -VAR_1;
  goto job_error;
 }
 if (FUNC_0(VAR_21, &VAR_25->sli4_hba.sli_intf) !=
     VAR_10) {
  VAR_37 = -VAR_1;
  goto job_error;
 }

 if (VAR_22->request_len < sizeof(struct fc_bsg_request) +
     sizeof(struct sli4_link_diag)) {
  FUNC_4(VAR_25, VAR_5, VAR_6,
    "3013 Received LINK DIAG TEST request "
    " size:%d below the minimum size:%d\n",
    VAR_22->request_len,
    (int)(sizeof(struct fc_bsg_request) +
    sizeof(struct sli4_link_diag)));
  VAR_37 = -VAR_0;
  goto job_error;
 }

 VAR_37 = FUNC_2(VAR_25);
 if (VAR_37)
  goto job_error;

 VAR_27 = (struct sli4_link_diag *)
    VAR_22->request->rqst_data.h_vendor.vendor_cmd;
 VAR_30 = VAR_27->timeout * 100;

 VAR_37 = FUNC_5(VAR_25, 1);

 if (VAR_37)
  goto job_error;

 VAR_26 = FUNC_8(VAR_25->mbox_mem_pool, VAR_3);
 if (!VAR_26) {
  VAR_37 = -VAR_2;
  goto link_diag_test_exit;
 }

 VAR_28 = (sizeof(struct lpfc_mbx_set_link_diag_state) -
     sizeof(struct lpfc_sli4_cfg_mhdr));
 VAR_29 = FUNC_6(VAR_25, VAR_26, VAR_8,
         VAR_7,
         VAR_28, VAR_9);
 if (VAR_29 != VAR_28) {
  VAR_37 = -VAR_2;
  goto link_diag_test_exit;
 }
 VAR_31 = &VAR_26->u.mqe.un.link_diag_test;
 FUNC_1(VAR_16, &VAR_31->u.req,
        VAR_25->sli4_hba.lnk_info.lnk_no);
 FUNC_1(VAR_17, &VAR_31->u.req,
        VAR_25->sli4_hba.lnk_info.lnk_tp);
 FUNC_1(VAR_19, &VAR_31->u.req,
        VAR_27->test_id);
 FUNC_1(VAR_18, &VAR_31->u.req,
        VAR_27->loops);
 FUNC_1(VAR_20, &VAR_31->u.req,
        VAR_27->test_version);
 FUNC_1(VAR_15, &VAR_31->u.req,
        VAR_27->error_action);

 VAR_36 = FUNC_7(VAR_25, VAR_26, VAR_12);

 VAR_32 = (union lpfc_sli4_cfg_shdr *)
  &VAR_26->u.mqe.un.sli4_config.header.cfg_shdr;
 VAR_33 = FUNC_0(VAR_14, &VAR_32->response);
 VAR_34 = FUNC_0(VAR_13, &VAR_32->response);
 if (VAR_33 || VAR_34 || VAR_36) {
  FUNC_4(VAR_25, VAR_4, VAR_6,
    "3010 Run link diag test mailbox failed with "
    "mbx_status x%x status x%x, add_status x%x\n",
    VAR_36, VAR_33, VAR_34);
 }

 VAR_35 = (struct diag_status *)
       VAR_22->reply->reply_data.vendor_reply.vendor_rsp;

 if (VAR_22->reply_len <
     sizeof(struct fc_bsg_request) + sizeof(struct diag_status)) {
  FUNC_4(VAR_25, VAR_5, VAR_6,
    "3012 Received Run link diag test reply "
    "below minimum size (%d): reply_len:%d\n",
    (int)(sizeof(struct fc_bsg_request) +
    sizeof(struct diag_status)),
    VAR_22->reply_len);
  VAR_37 = -VAR_0;
  goto job_error;
 }

 VAR_35->mbox_status = VAR_36;
 VAR_35->shdr_status = VAR_33;
 VAR_35->shdr_add_status = VAR_34;

link_diag_test_exit:
 VAR_37 = FUNC_5(VAR_25, 0);

 if (VAR_26)
  FUNC_9(VAR_26, VAR_25->mbox_mem_pool);

 FUNC_3(VAR_25);

job_error:

 VAR_22->reply->result = VAR_37;

 if (VAR_37 == 0)
  VAR_22->job_done(VAR_22);
 return VAR_37;
}
