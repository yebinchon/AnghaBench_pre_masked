
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_74__ TYPE_9__ ;
typedef struct TYPE_73__ TYPE_8__ ;
typedef struct TYPE_72__ TYPE_7__ ;
typedef struct TYPE_71__ TYPE_6__ ;
typedef struct TYPE_70__ TYPE_5__ ;
typedef struct TYPE_69__ TYPE_4__ ;
typedef struct TYPE_68__ TYPE_3__ ;
typedef struct TYPE_67__ TYPE_33__ ;
typedef struct TYPE_66__ TYPE_31__ ;
typedef struct TYPE_65__ TYPE_30__ ;
typedef struct TYPE_64__ TYPE_2__ ;
typedef struct TYPE_63__ TYPE_29__ ;
typedef struct TYPE_62__ TYPE_28__ ;
typedef struct TYPE_61__ TYPE_27__ ;
typedef struct TYPE_60__ TYPE_26__ ;
typedef struct TYPE_59__ TYPE_25__ ;
typedef struct TYPE_58__ TYPE_24__ ;
typedef struct TYPE_57__ TYPE_23__ ;
typedef struct TYPE_56__ TYPE_22__ ;
typedef struct TYPE_55__ TYPE_21__ ;
typedef struct TYPE_54__ TYPE_20__ ;
typedef struct TYPE_53__ TYPE_1__ ;
typedef struct TYPE_52__ TYPE_19__ ;
typedef struct TYPE_51__ TYPE_18__ ;
typedef struct TYPE_50__ TYPE_17__ ;
typedef struct TYPE_49__ TYPE_16__ ;
typedef struct TYPE_48__ TYPE_15__ ;
typedef struct TYPE_47__ TYPE_14__ ;
typedef struct TYPE_46__ TYPE_13__ ;
typedef struct TYPE_45__ TYPE_12__ ;
typedef struct TYPE_44__ TYPE_11__ ;
typedef struct TYPE_43__ TYPE_10__ ;


struct TYPE_50__ {scalar_t__ co; } ;
struct TYPE_49__ {scalar_t__ type; } ;
struct TYPE_46__ {scalar_t__ bdeSize; } ;
struct TYPE_47__ {TYPE_13__ f; } ;
struct TYPE_48__ {TYPE_14__ tus; } ;
struct READ_EVENT_LOG_VAR {TYPE_15__ rcv_bde64; } ;
struct TYPE_72__ {scalar_t__ bdeSize; } ;
struct TYPE_73__ {TYPE_7__ f; } ;
struct TYPE_74__ {TYPE_8__ tus; void* addrLow; void* addrHigh; } ;
struct TYPE_71__ {void* addrLow; void* addrHigh; } ;
struct TYPE_43__ {TYPE_9__ xmit_bde64; TYPE_6__ rcv_bde64; } ;
struct TYPE_44__ {TYPE_10__ s2; } ;
struct TYPE_45__ {TYPE_11__ un; } ;
struct TYPE_58__ {scalar_t__* varWords; TYPE_17__ varUpdateCfg; TYPE_16__ varDmp; struct READ_EVENT_LOG_VAR varRdEventLog; TYPE_12__ varBIUdiag; } ;
struct TYPE_66__ {scalar_t__ mbxCommand; TYPE_24__ un; int mbxOwner; } ;
typedef TYPE_31__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_51__ {int bdeSize; } ;
struct TYPE_52__ {TYPE_18__ f; } ;
struct ulp_bde64 {void* addrLow; void* addrHigh; TYPE_19__ tus; } ;
struct mbox_header {int dummy; } ;
struct lpfc_vport {int fc_flag; } ;
struct TYPE_57__ {struct READ_EVENT_LOG_VAR cfg_mhdr; } ;
struct lpfc_mbx_sli4_config {TYPE_23__ header; } ;
struct lpfc_mbx_nembed_cmd {TYPE_25__* sge; } ;
struct TYPE_62__ {int sli_flag; } ;
struct lpfc_hba {scalar_t__ sli_rev; int mbox_mem_pool; TYPE_28__ sli; TYPE_5__* pport; } ;
struct lpfc_dmabuf {scalar_t__ phys; scalar_t__ virt; } ;
struct TYPE_65__ {int payload_len; int sg_cnt; int sg_list; } ;
struct TYPE_69__ {int payload_len; int sg_cnt; int sg_list; } ;
struct fc_bsg_job {TYPE_30__ reply_payload; TYPE_29__* reply; struct bsg_job_data* dd_data; TYPE_4__ request_payload; TYPE_3__* request; } ;
struct dfc_mbox_req {int inExtWLen; int outExtWLen; int mbOffset; } ;
struct TYPE_60__ {int inExtWLen; int outExtWLen; int mbOffset; TYPE_31__* ext; TYPE_31__* mb; TYPE_33__* pmboxq; struct lpfc_dmabuf* dmabuffers; } ;
struct TYPE_61__ {TYPE_26__ mbox; } ;
struct bsg_job_data {TYPE_27__ context_un; struct fc_bsg_job* set_job; int type; } ;
struct TYPE_70__ {scalar_t__ stopped; } ;
struct TYPE_53__ {scalar_t__ vendor_cmd; } ;
struct TYPE_64__ {TYPE_1__ h_vendor; } ;
struct TYPE_68__ {TYPE_2__ rqst_data; } ;
struct TYPE_54__ {struct lpfc_mbx_sli4_config sli4_config; } ;
struct TYPE_55__ {TYPE_20__ un; } ;
struct TYPE_56__ {TYPE_21__ mqe; TYPE_31__ mb; } ;
struct TYPE_67__ {int in_ext_byte_len; int out_ext_byte_len; struct bsg_job_data* context1; int mbox_cmpl; TYPE_22__ u; int mbox_offset_word; TYPE_31__* context2; struct lpfc_vport* vport; } ;
struct TYPE_63__ {int reply_payload_rcv_len; } ;
struct TYPE_59__ {scalar_t__ length; void* pa_lo; void* pa_hi; } ;
typedef TYPE_31__ MAILBOX_t ;
typedef TYPE_33__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ FUNC_0 (int ,struct READ_EVENT_LOG_VAR*) ;
 int FUNC_1 (struct bsg_job_data*) ;
 struct bsg_job_data* FUNC_2 (int,int ) ;
 int FUNC_3 (struct lpfc_hba*,TYPE_31__*,struct lpfc_vport*) ;
 struct lpfc_dmabuf* FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*,struct lpfc_dmabuf*) ;
 int FUNC_6 (struct lpfc_hba*,struct fc_bsg_job*,struct lpfc_dmabuf*) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_7 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_8 (struct lpfc_hba*,TYPE_33__*,int ) ;
 int FUNC_9 (TYPE_31__*,TYPE_31__*,int) ;
 TYPE_33__* FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_33__*,int ) ;
 int FUNC_12 (TYPE_33__*,int ,int) ;
 void* FUNC_13 (scalar_t__) ;
 void* FUNC_14 (scalar_t__) ;
 int FUNC_15 (int ,int ,TYPE_31__*,scalar_t__) ;
 int FUNC_16 (int ,int ,TYPE_31__*,scalar_t__) ;

__attribute__((used)) static uint32_t
FUNC_17(struct lpfc_hba *VAR_34, struct fc_bsg_job *VAR_35,
 struct lpfc_vport *VAR_36)
{
 LPFC_MBOXQ_t *VAR_37 = ((void*)0);
 MAILBOX_t *VAR_38;

 uint8_t *VAR_39 = ((void*)0);
 struct bsg_job_data *VAR_40 = ((void*)0);
 struct lpfc_dmabuf *VAR_41 = ((void*)0);
 struct dfc_mbox_req *VAR_42;
 struct READ_EVENT_LOG_VAR *VAR_43;
 uint32_t VAR_44, VAR_45, VAR_46;
 struct lpfc_mbx_sli4_config *VAR_47;
 struct lpfc_mbx_nembed_cmd *VAR_48;
 struct mbox_header *VAR_49;
 struct ulp_bde64 *VAR_50;
 uint8_t *VAR_51 = ((void*)0);
 int VAR_52 = 0;
 uint8_t *VAR_53;
 uint32_t VAR_54;


 VAR_35->reply->reply_payload_rcv_len = 0;


 if (VAR_35->reply_payload.payload_len > VAR_0 ||
     VAR_35->request_payload.payload_len > VAR_0) {
  VAR_52 = -VAR_5;
  goto job_done;
 }





  if (VAR_34->sli.sli_flag & VAR_12) {
  VAR_52 = -VAR_2;
  goto job_done;
 }

 VAR_42 =
     (struct dfc_mbox_req *)VAR_35->request->rqst_data.h_vendor.vendor_cmd;


 if ((VAR_42->inExtWLen > VAR_0/sizeof(uint32_t)) ||
     (VAR_42->outExtWLen > VAR_0/sizeof(uint32_t))) {
  VAR_52 = -VAR_5;
  goto job_done;
 }

 VAR_41 = FUNC_4(VAR_34);
 if (!VAR_41 || !VAR_41->virt) {
  VAR_52 = -VAR_4;
  goto job_done;
 }


 VAR_39 = (uint8_t *)VAR_41->virt;
 VAR_54 = VAR_35->request_payload.payload_len;
 FUNC_16(VAR_35->request_payload.sg_list,
     VAR_35->request_payload.sg_cnt, VAR_39, VAR_54);


 if (VAR_34->sli_rev == VAR_14) {
  VAR_52 = FUNC_6(VAR_34, VAR_35, VAR_41);
  if (VAR_52 == VAR_29)
   goto job_cont;
  if (VAR_52)
   goto job_done;

 }

 VAR_52 = FUNC_3(VAR_34, (MAILBOX_t *)VAR_39, VAR_36);
 if (VAR_52 != 0)
  goto job_done;


 VAR_40 = FUNC_2(sizeof(struct bsg_job_data), VAR_8);
 if (!VAR_40) {
  FUNC_7(VAR_34, VAR_9, VAR_10,
    "2727 Failed allocation of dd_data\n");
  VAR_52 = -VAR_4;
  goto job_done;
 }

 VAR_37 = FUNC_10(VAR_34->mbox_mem_pool, VAR_8);
 if (!VAR_37) {
  VAR_52 = -VAR_4;
  goto job_done;
 }
 FUNC_12(VAR_37, 0, sizeof(LPFC_MBOXQ_t));

 VAR_38 = &VAR_37->u.mb;
 FUNC_9(VAR_38, VAR_39, sizeof(*VAR_38));
 VAR_38->mbxOwner = VAR_28;
 VAR_37->vport = VAR_36;




 if (VAR_34->pport->stopped &&
     VAR_38->mbxCommand != VAR_16 &&
     VAR_38->mbxCommand != VAR_20 &&
     VAR_38->mbxCommand != VAR_26 &&
     VAR_38->mbxCommand != VAR_27)
  FUNC_7(VAR_34, VAR_9, VAR_11,
    "2797 mbox: Issued mailbox cmd "
    "0x%x while in stopped state.\n",
    VAR_38->mbxCommand);


 if (VAR_42->inExtWLen || VAR_42->outExtWLen) {
  VAR_53 = VAR_39;
  VAR_51 = VAR_53 + sizeof(MAILBOX_t);
  VAR_37->context2 = VAR_51;
  VAR_37->in_ext_byte_len =
   VAR_42->inExtWLen * sizeof(uint32_t);
  VAR_37->out_ext_byte_len =
   VAR_42->outExtWLen * sizeof(uint32_t);
  VAR_37->mbox_offset_word = VAR_42->mbOffset;
 }





 if (VAR_38->mbxCommand == VAR_21) {
  VAR_44 = VAR_38->un.varWords[1];
  VAR_45 = VAR_38->un.varWords[4];



  if ((VAR_44 > VAR_45) ||
   (VAR_44 > VAR_0 - sizeof(MAILBOX_t))) {
   VAR_52 = -VAR_5;
   goto job_done;
  }
  VAR_38->un.varBIUdiag.un.s2.xmit_bde64.addrHigh =
   FUNC_13(VAR_41->phys + sizeof(MAILBOX_t));
  VAR_38->un.varBIUdiag.un.s2.xmit_bde64.addrLow =
   FUNC_14(VAR_41->phys + sizeof(MAILBOX_t));

  VAR_38->un.varBIUdiag.un.s2.rcv_bde64.addrHigh =
   FUNC_13(VAR_41->phys + sizeof(MAILBOX_t)
     + VAR_38->un.varBIUdiag.un.s2.xmit_bde64.tus.f.bdeSize);
  VAR_38->un.varBIUdiag.un.s2.rcv_bde64.addrLow =
   FUNC_14(VAR_41->phys + sizeof(MAILBOX_t)
     + VAR_38->un.varBIUdiag.un.s2.xmit_bde64.tus.f.bdeSize);
 } else if (VAR_38->mbxCommand == VAR_19) {
  VAR_43 = &VAR_38->un.varRdEventLog;
  VAR_45 = VAR_43->rcv_bde64.tus.f.bdeSize;
  VAR_46 = FUNC_0(VAR_32, VAR_43);




  if (VAR_45 > VAR_0 - sizeof(MAILBOX_t)) {
   VAR_52 = -VAR_5;
   goto job_done;
  }


  if (VAR_46 == 0) {
   VAR_38->un.varWords[3] = FUNC_14(VAR_41->phys
       + sizeof(MAILBOX_t));
   VAR_38->un.varWords[4] = FUNC_13(VAR_41->phys
       + sizeof(MAILBOX_t));
  }
 } else if (VAR_34->sli_rev == VAR_14) {




  if ((VAR_38->mbxCommand == VAR_16) &&
   (VAR_38->un.varDmp.type != VAR_1)) {



   VAR_45 = VAR_38->un.varWords[2];



   if (VAR_45 == 0) {
    VAR_52 = -VAR_5;
    goto job_done;
   }
   VAR_38->un.varWords[3] = FUNC_14(VAR_41->phys
      + sizeof(MAILBOX_t));
   VAR_38->un.varWords[4] = FUNC_13(VAR_41->phys
      + sizeof(MAILBOX_t));
  } else if ((VAR_38->mbxCommand == VAR_25) &&
   VAR_38->un.varUpdateCfg.co) {
   VAR_50 = (struct ulp_bde64 *)&VAR_38->un.varWords[4];


   if (VAR_50->tus.f.bdeSize >
       VAR_0 - sizeof(MAILBOX_t)) {
    VAR_52 = -VAR_5;
    goto job_done;
   }
   VAR_50->addrHigh = FUNC_13(VAR_41->phys
      + sizeof(MAILBOX_t));
   VAR_50->addrLow = FUNC_14(VAR_41->phys
      + sizeof(MAILBOX_t));
  } else if (VAR_38->mbxCommand == VAR_22) {

   VAR_47 = &VAR_37->u.mqe.un.sli4_config;
   if (!FUNC_0(VAR_33,
       &VAR_47->header.cfg_mhdr)) {



    VAR_49 = (struct mbox_header *)
      &VAR_38->un.varWords[0];
    VAR_48 = (struct lpfc_mbx_nembed_cmd *)
      &VAR_38->un.varWords[0];
    VAR_45 = VAR_48->sge[0].length;




    if ((VAR_45 == 0) ||
        (VAR_45 >
         VAR_0 - sizeof(MAILBOX_t))) {
     VAR_52 = -VAR_5;
     goto job_done;
    }

    VAR_48->sge[0].pa_hi =
      FUNC_13(VAR_41->phys
         + sizeof(MAILBOX_t));
    VAR_48->sge[0].pa_lo =
      FUNC_14(VAR_41->phys
         + sizeof(MAILBOX_t));
   }
  }
 }

 VAR_40->context_un.mbox.dmabuffers = VAR_41;


 VAR_37->mbox_cmpl = VAR_31;


 VAR_37->context1 = VAR_40;
 VAR_40->type = VAR_30;
 VAR_40->set_job = VAR_35;
 VAR_40->context_un.mbox.pmboxq = VAR_37;
 VAR_40->context_un.mbox.mb = (MAILBOX_t *)VAR_39;
 VAR_40->context_un.mbox.ext = VAR_51;
 VAR_40->context_un.mbox.mbOffset = VAR_42->mbOffset;
 VAR_40->context_un.mbox.inExtWLen = VAR_42->inExtWLen;
 VAR_40->context_un.mbox.outExtWLen = VAR_42->outExtWLen;
 VAR_35->dd_data = VAR_40;

 if ((VAR_36->fc_flag & VAR_7) ||
     (!(VAR_34->sli.sli_flag & VAR_13))) {
  VAR_52 = FUNC_8(VAR_34, VAR_37, VAR_18);
  if (VAR_52 != VAR_23) {
   VAR_52 = (VAR_52 == VAR_24) ? -VAR_6 : -VAR_3;
   goto job_done;
  }


  FUNC_9(VAR_39, VAR_38, sizeof(*VAR_38));
  VAR_35->reply->reply_payload_rcv_len =
   FUNC_15(VAR_35->reply_payload.sg_list,
         VAR_35->reply_payload.sg_cnt,
         VAR_39, VAR_54);

  VAR_52 = 0;
  goto job_done;
 }

 VAR_52 = FUNC_8(VAR_34, VAR_37, VAR_17);
 if ((VAR_52 == VAR_23) || (VAR_52 == VAR_15))
  return 1;

job_done:

 if (VAR_37)
  FUNC_11(VAR_37, VAR_34->mbox_mem_pool);
 FUNC_5(VAR_34, VAR_41);
 FUNC_1(VAR_40);

job_cont:
 return VAR_52;
}
