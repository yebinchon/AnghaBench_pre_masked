
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct lpfc_sli_config_mbox {int dummy; } ;
struct TYPE_19__ {scalar_t__ seqNum; int nembType; scalar_t__ numBuf; int state; TYPE_13__* mbx_dmabuf; int ext_dmabuf_list; } ;
struct lpfc_hba {TYPE_5__ mbox_ext_buf_ctx; int pport; int mbox_mem_pool; } ;
struct lpfc_dmabuf {int list; scalar_t__ virt; } ;
struct TYPE_15__ {scalar_t__ payload_len; int sg_cnt; int sg_list; } ;
struct fc_bsg_job {int (* job_done ) (struct fc_bsg_job*) ;TYPE_6__* reply; struct bsg_job_data* dd_data; TYPE_1__ request_payload; } ;
struct TYPE_17__ {TYPE_7__* mb; TYPE_8__* pmboxq; } ;
struct TYPE_18__ {TYPE_3__ mbox; } ;
struct bsg_job_data {TYPE_4__ context_un; struct fc_bsg_job* set_job; int type; } ;
typedef enum nemb_type { ____Placeholder_nemb_type } nemb_type ;
struct TYPE_21__ {int mbxOwner; } ;
struct TYPE_16__ {TYPE_7__ mb; } ;
struct TYPE_22__ {struct bsg_job_data* context1; int mbox_cmpl; int vport; TYPE_2__ u; } ;
struct TYPE_20__ {scalar_t__ result; } ;
struct TYPE_14__ {scalar_t__ virt; } ;
typedef TYPE_7__ MAILBOX_t ;
typedef TYPE_8__ LPFC_MBOXQ_t ;


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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct bsg_job_data*) ;
 struct bsg_job_data* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_dmabuf*) ;
 int VAR_14 ;
 int FUNC_4 (struct lpfc_hba*,int,scalar_t__,TYPE_13__*,struct lpfc_dmabuf*) ;
 int FUNC_5 (struct lpfc_hba*,scalar_t__,int ,int ,int ,struct lpfc_dmabuf*,scalar_t__) ;
 int FUNC_6 (struct lpfc_hba*,int ,int ,char*,int,...) ;
 int FUNC_7 (struct lpfc_hba*,TYPE_8__*,int ) ;
 int VAR_15 ;
 int FUNC_8 (TYPE_7__*,int *,int) ;
 TYPE_8__* FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_8__*,int ,int) ;
 scalar_t__ VAR_16 ;
 int FUNC_11 (int ,int ,int *,scalar_t__) ;
 int VAR_17 ;
 int FUNC_12 (struct fc_bsg_job*) ;

__attribute__((used)) static int
FUNC_13(struct lpfc_hba *VAR_18, struct fc_bsg_job *VAR_19,
   struct lpfc_dmabuf *VAR_20)
{
 struct lpfc_sli_config_mbox *VAR_21;
 struct bsg_job_data *VAR_22 = ((void*)0);
 LPFC_MBOXQ_t *VAR_23 = ((void*)0);
 MAILBOX_t *VAR_24;
 enum nemb_type VAR_25;
 uint8_t *VAR_26;
 uint32_t VAR_27;
 uint32_t VAR_28;
 int VAR_29;

 VAR_28 = VAR_18->mbox_ext_buf_ctx.seqNum;
 VAR_18->mbox_ext_buf_ctx.seqNum++;
 VAR_25 = VAR_18->mbox_ext_buf_ctx.nembType;

 VAR_21 = (struct lpfc_sli_config_mbox *)
   VAR_18->mbox_ext_buf_ctx.mbx_dmabuf->virt;

 VAR_22 = FUNC_1(sizeof(struct bsg_job_data), VAR_2);
 if (!VAR_22) {
  VAR_29 = -VAR_0;
  goto job_error;
 }

 VAR_26 = (uint8_t *)VAR_20->virt;
 VAR_27 = VAR_19->request_payload.payload_len;
 FUNC_11(VAR_19->request_payload.sg_list,
     VAR_19->request_payload.sg_cnt,
     VAR_26, VAR_27);

 if (VAR_18->mbox_ext_buf_ctx.nembType == VAR_16) {
  FUNC_6(VAR_18, VAR_4, VAR_5,
    "2966 SLI_CONFIG (mse) ext-buffer wr set "
    "buffer[%d], size:%d\n",
    VAR_18->mbox_ext_buf_ctx.seqNum, VAR_27);

 } else {
  FUNC_6(VAR_18, VAR_4, VAR_5,
    "2967 SLI_CONFIG (hbd) ext-buffer wr set "
    "buffer[%d], size:%d\n",
    VAR_18->mbox_ext_buf_ctx.seqNum, VAR_27);

 }


 FUNC_4(VAR_18, VAR_25, VAR_28,
     VAR_18->mbox_ext_buf_ctx.mbx_dmabuf,
     VAR_20);
 FUNC_2(&VAR_20->list, &VAR_18->mbox_ext_buf_ctx.ext_dmabuf_list);


 FUNC_5(VAR_18, VAR_18->mbox_ext_buf_ctx.nembType,
     VAR_15, VAR_13, VAR_17,
     VAR_20, VAR_28);

 if (VAR_18->mbox_ext_buf_ctx.seqNum == VAR_18->mbox_ext_buf_ctx.numBuf) {
  FUNC_6(VAR_18, VAR_4, VAR_5,
    "2968 SLI_CONFIG ext-buffer wr all %d "
    "ebuffers received\n",
    VAR_18->mbox_ext_buf_ctx.numBuf);

  VAR_23 = FUNC_9(VAR_18->mbox_mem_pool, VAR_2);
  if (!VAR_23) {
   VAR_29 = -VAR_0;
   goto job_error;
  }
  FUNC_10(VAR_23, 0, sizeof(LPFC_MBOXQ_t));
  VAR_26 = (uint8_t *)VAR_18->mbox_ext_buf_ctx.mbx_dmabuf->virt;
  VAR_24 = &VAR_23->u.mb;
  FUNC_8(VAR_24, VAR_26, sizeof(*VAR_24));
  VAR_24->mbxOwner = VAR_10;
  VAR_23->vport = VAR_18->pport;


  VAR_23->mbox_cmpl = VAR_14;


  VAR_23->context1 = VAR_22;
  VAR_22->type = VAR_12;
  VAR_22->set_job = VAR_19;
  VAR_22->context_un.mbox.pmboxq = VAR_23;
  VAR_22->context_un.mbox.mb = (MAILBOX_t *)VAR_26;
  VAR_19->dd_data = VAR_22;


  VAR_18->mbox_ext_buf_ctx.state = VAR_6;

  VAR_29 = FUNC_7(VAR_18, VAR_23, VAR_8);
  if ((VAR_29 == VAR_9) || (VAR_29 == VAR_7)) {
   FUNC_6(VAR_18, VAR_4, VAR_5,
     "2969 Issued SLI_CONFIG ext-buffer "
     "maibox command, rc:x%x\n", VAR_29);
   return VAR_11;
  }
  FUNC_6(VAR_18, VAR_3, VAR_5,
    "2970 Failed to issue SLI_CONFIG ext-buffer "
    "maibox command, rc:x%x\n", VAR_29);
  VAR_29 = -VAR_1;
  goto job_error;
 }


 VAR_19->reply->result = 0;
 VAR_19->job_done(VAR_19);
 return VAR_11;

job_error:
 FUNC_3(VAR_18, VAR_20);
 FUNC_0(VAR_22);

 return VAR_29;
}
