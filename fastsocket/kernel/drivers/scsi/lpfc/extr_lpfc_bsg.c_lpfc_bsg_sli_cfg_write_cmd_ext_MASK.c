
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_15__ ;
typedef struct TYPE_25__ TYPE_14__ ;
typedef struct TYPE_24__ TYPE_13__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_33__ {int hbd_count; int * hbd; } ;
struct TYPE_32__ {TYPE_5__* mse; int sli_config_hdr; } ;
struct TYPE_34__ {TYPE_7__ sli_config_emb1_subsys; TYPE_6__ sli_config_emb0_subsys; } ;
struct lpfc_sli_config_mbox {TYPE_8__ un; } ;
struct TYPE_23__ {int nembType; int numBuf; int state; struct lpfc_dmabuf* mbx_dmabuf; int seqNum; int mbxTag; int mboxType; } ;
struct TYPE_30__ {int sli_intf; } ;
struct lpfc_hba {int mbox_mem_pool; TYPE_12__ mbox_ext_buf_ctx; int pport; TYPE_4__ sli4_hba; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct fc_bsg_job {int (* job_done ) (struct fc_bsg_job*) ;TYPE_13__* reply; struct bsg_job_data* dd_data; TYPE_3__* request; } ;
struct dfc_mbox_req {int extSeqNum; int extMboxTag; } ;
struct TYPE_21__ {TYPE_14__* mb; TYPE_15__* pmboxq; } ;
struct TYPE_22__ {TYPE_10__ mbox; } ;
struct bsg_job_data {TYPE_11__ context_un; struct fc_bsg_job* set_job; int type; } ;
typedef enum nemb_type { ____Placeholder_nemb_type } nemb_type ;
struct TYPE_25__ {int mbxOwner; } ;
struct TYPE_35__ {TYPE_14__ mb; } ;
struct TYPE_31__ {int buf_len; } ;
struct TYPE_27__ {scalar_t__ vendor_cmd; } ;
struct TYPE_28__ {TYPE_1__ h_vendor; } ;
struct TYPE_29__ {TYPE_2__ rqst_data; } ;
struct TYPE_26__ {struct bsg_job_data* context1; int mbox_cmpl; int vport; TYPE_9__ u; } ;
struct TYPE_24__ {scalar_t__ result; } ;
typedef TYPE_14__ MAILBOX_t ;
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
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_20 ;
 int FUNC_2 (struct bsg_job_data*) ;
 struct bsg_job_data* FUNC_3 (int,int ) ;
 int VAR_21 ;
 int FUNC_4 (struct lpfc_hba*,int,int ,struct lpfc_dmabuf*,struct lpfc_dmabuf*) ;
 int FUNC_5 (struct lpfc_hba*,int,int ,int ,int ,struct lpfc_dmabuf*,int) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_6 (struct lpfc_hba*,int ,int ,char*,int,...) ;
 int VAR_24 ;
 int FUNC_7 (struct lpfc_hba*,TYPE_15__*,int ) ;
 int VAR_25 ;
 int FUNC_8 (TYPE_14__*,int *,int) ;
 TYPE_15__* FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_15__*,int ) ;
 int FUNC_11 (TYPE_15__*,int ,int) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_12 (struct fc_bsg_job*) ;

__attribute__((used)) static int
FUNC_13(struct lpfc_hba *VAR_29, struct fc_bsg_job *VAR_30,
          enum nemb_type VAR_31,
          struct lpfc_dmabuf *VAR_32)
{
 struct dfc_mbox_req *VAR_33;
 struct lpfc_sli_config_mbox *VAR_34;
 uint32_t VAR_35;
 struct bsg_job_data *VAR_36 = ((void*)0);
 LPFC_MBOXQ_t *VAR_37 = ((void*)0);
 MAILBOX_t *VAR_38;
 uint8_t *VAR_39;
 int VAR_40 = VAR_18, VAR_41;

 VAR_33 =
    (struct dfc_mbox_req *)VAR_30->request->rqst_data.h_vendor.vendor_cmd;


 VAR_34 = (struct lpfc_sli_config_mbox *)VAR_32->virt;

 if (VAR_31 == VAR_26) {
  VAR_35 = FUNC_1(VAR_22,
   &VAR_34->un.sli_config_emb0_subsys.sli_config_hdr);
  if (VAR_35 > VAR_11) {
   FUNC_6(VAR_29, VAR_6, VAR_8,
     "2953 Failed SLI_CONFIG(mse) wr, "
     "ext_buf_cnt(%d) out of range(%d)\n",
     VAR_35,
     VAR_11);
   return -VAR_4;
  }
  FUNC_6(VAR_29, VAR_7, VAR_8,
    "2949 Handled SLI_CONFIG(mse) wr, "
    "ext_buf_cnt:%d\n", VAR_35);
 } else {

  if (FUNC_0(VAR_24, &VAR_29->sli4_hba.sli_intf) !=
      VAR_12)
   return -VAR_0;

  VAR_35 = VAR_34->un.sli_config_emb1_subsys.hbd_count;
  if (VAR_35 > VAR_10) {
   FUNC_6(VAR_29, VAR_6, VAR_8,
     "2954 Failed SLI_CONFIG(hbd) wr, "
     "ext_buf_cnt(%d) out of range(%d)\n",
     VAR_35,
     VAR_10);
   return -VAR_4;
  }
  FUNC_6(VAR_29, VAR_7, VAR_8,
    "2950 Handled SLI_CONFIG(hbd) wr, "
    "ext_buf_cnt:%d\n", VAR_35);
 }


 FUNC_5(VAR_29, VAR_31, VAR_25, VAR_20,
     VAR_28, VAR_32, VAR_35);

 if (VAR_35 == 0)
  return -VAR_2;


 FUNC_4(VAR_29, VAR_31, 0, VAR_32, VAR_32);


 FUNC_5(VAR_29, VAR_31, VAR_25, VAR_20,
     VAR_27, VAR_32, VAR_35);


 for (VAR_41 = 1; VAR_41 < VAR_35; VAR_41++) {
  if (VAR_31 == VAR_26)
   FUNC_6(VAR_29, VAR_7, VAR_8,
    "2951 SLI_CONFIG(mse), buf[%d]-length:%d\n",
    VAR_41, VAR_34->un.sli_config_emb0_subsys.
    mse[VAR_41].buf_len);
  else
   FUNC_6(VAR_29, VAR_7, VAR_8,
    "2952 SLI_CONFIG(hbd), buf[%d]-length:%d\n",
    VAR_41, FUNC_1(VAR_23,
    &VAR_34->un.sli_config_emb1_subsys.
    hbd[VAR_41]));
 }


 VAR_29->mbox_ext_buf_ctx.nembType = VAR_31;
 VAR_29->mbox_ext_buf_ctx.mboxType = VAR_25;
 VAR_29->mbox_ext_buf_ctx.numBuf = VAR_35;
 VAR_29->mbox_ext_buf_ctx.mbxTag = VAR_33->extMboxTag;
 VAR_29->mbox_ext_buf_ctx.seqNum = VAR_33->extSeqNum;
 VAR_29->mbox_ext_buf_ctx.mbx_dmabuf = VAR_32;

 if (VAR_35 == 1) {

  VAR_36 = FUNC_3(sizeof(struct bsg_job_data), VAR_5);
  if (!VAR_36) {
   VAR_40 = -VAR_1;
   goto job_error;
  }


  VAR_37 = FUNC_9(VAR_29->mbox_mem_pool, VAR_5);
  if (!VAR_37) {
   VAR_40 = -VAR_1;
   goto job_error;
  }
  FUNC_11(VAR_37, 0, sizeof(LPFC_MBOXQ_t));
  VAR_38 = &VAR_37->u.mb;
  VAR_39 = (uint8_t *)VAR_32->virt;
  FUNC_8(VAR_38, VAR_39, sizeof(*VAR_38));
  VAR_38->mbxOwner = VAR_16;
  VAR_37->vport = VAR_29->pport;


  VAR_37->mbox_cmpl = VAR_21;


  VAR_37->context1 = VAR_36;
  VAR_36->type = VAR_19;
  VAR_36->set_job = VAR_30;
  VAR_36->context_un.mbox.pmboxq = VAR_37;
  VAR_36->context_un.mbox.mb = (MAILBOX_t *)VAR_39;
  VAR_30->dd_data = VAR_36;



  VAR_29->mbox_ext_buf_ctx.state = VAR_9;
  VAR_40 = FUNC_7(VAR_29, VAR_37, VAR_14);
  if ((VAR_40 == VAR_15) || (VAR_40 == VAR_13)) {
   FUNC_6(VAR_29, VAR_7, VAR_8,
     "2955 Issued SLI_CONFIG ext-buffer "
     "maibox command, rc:x%x\n", VAR_40);
   return VAR_17;
  }
  FUNC_6(VAR_29, VAR_6, VAR_8,
    "2956 Failed to issue SLI_CONFIG ext-buffer "
    "maibox command, rc:x%x\n", VAR_40);
  VAR_40 = -VAR_3;
  goto job_error;
 }



 VAR_30->reply->result = 0;
 VAR_30->job_done(VAR_30);
 return VAR_17;

job_error:
 if (VAR_37)
  FUNC_10(VAR_37, VAR_29->mbox_mem_pool);
 FUNC_2(VAR_36);

 return VAR_40;
}
