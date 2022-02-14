
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct lpfc_vport {scalar_t__ fc_ns_retry; int load_flag; int fc_flag; scalar_t__ num_disc_nodes; scalar_t__ port_state; } ;
struct TYPE_12__ {scalar_t__ CmdRsp; } ;
struct TYPE_13__ {TYPE_4__ bits; } ;
struct lpfc_sli_ct_request {scalar_t__ ReasonCode; scalar_t__ Explanation; TYPE_5__ CommandResponse; } ;
struct lpfc_nodelist {int dummy; } ;
struct TYPE_14__ {struct lpfc_nodelist* ndlp; struct lpfc_iocbq* rsp_iocb; } ;
struct TYPE_9__ {scalar_t__ bdeSize; } ;
struct TYPE_10__ {TYPE_1__ bdl; } ;
struct TYPE_11__ {scalar_t__* ulpWord; TYPE_2__ genreq64; } ;
struct TYPE_15__ {scalar_t__ ulpStatus; TYPE_3__ un; } ;
struct lpfc_iocbq {TYPE_6__ context_un; TYPE_7__ iocb; scalar_t__ context3; scalar_t__ context2; struct lpfc_vport* vport; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct Scsi_Host {int host_lock; } ;
typedef TYPE_7__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_2 (struct lpfc_vport*,int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct lpfc_vport*) ;
 scalar_t__ FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (struct lpfc_vport*) ;
 scalar_t__ FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (struct lpfc_vport*,int ,scalar_t__,int ) ;
 int FUNC_8 (struct lpfc_vport*,struct lpfc_dmabuf*,scalar_t__) ;
 int FUNC_9 (struct lpfc_vport*,int ,int ,char*,...) ;
 struct Scsi_Host* FUNC_10 (struct lpfc_vport*) ;
 int FUNC_11 (struct lpfc_vport*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14(struct lpfc_hba *VAR_18, struct lpfc_iocbq *VAR_19,
   struct lpfc_iocbq *VAR_20)
{
 struct lpfc_vport *VAR_21 = VAR_19->vport;
 struct Scsi_Host *VAR_22 = FUNC_10(VAR_21);
 IOCB_t *VAR_23;
 struct lpfc_dmabuf *VAR_24;
 struct lpfc_dmabuf *VAR_25;
 struct lpfc_sli_ct_request *VAR_26;
 struct lpfc_nodelist *VAR_27;
 int VAR_28;


 VAR_27 = VAR_19->context_un.ndlp;


 VAR_19->context_un.rsp_iocb = VAR_20;

 VAR_25 = (struct lpfc_dmabuf *) VAR_19->context2;
 VAR_24 = (struct lpfc_dmabuf *) VAR_19->context3;
 VAR_23 = &VAR_20->iocb;

 FUNC_2(VAR_21, VAR_11,
   "GID_FT cmpl:     status:x%x/x%x rtry:%d",
  VAR_23->ulpStatus, VAR_23->un.ulpWord[4], VAR_21->fc_ns_retry);


 if (VAR_21->load_flag & VAR_1) {
  if (VAR_21->fc_flag & VAR_0)
   FUNC_5(VAR_21);
  goto out;
 }

 if (FUNC_4(VAR_21)) {
  FUNC_9(VAR_21, VAR_7, VAR_8,
     "0216 Link event during NS query\n");
  if (VAR_21->fc_flag & VAR_0)
   FUNC_5(VAR_21);
  FUNC_11(VAR_21, VAR_2);
  goto out;
 }
 if (FUNC_6(VAR_23)) {
  FUNC_9(VAR_21, VAR_7, VAR_8,
     "0226 NS query failed due to link event\n");
  if (VAR_21->fc_flag & VAR_0)
   FUNC_5(VAR_21);
  goto out;
 }
 if (VAR_23->ulpStatus) {

  if (VAR_21->fc_ns_retry < VAR_12) {
   if (VAR_23->ulpStatus != VAR_5 ||
       (VAR_23->un.ulpWord[4] & VAR_4) !=
       VAR_3)
    VAR_21->fc_ns_retry++;


   VAR_28 = FUNC_7(VAR_21, VAR_13,
      VAR_21->fc_ns_retry, 0);
   if (VAR_28 == 0)
    goto out;
  }
  if (VAR_21->fc_flag & VAR_0)
   FUNC_5(VAR_21);
  FUNC_11(VAR_21, VAR_2);
  FUNC_9(VAR_21, VAR_6, VAR_9,
     "0257 GID_FT Query error: 0x%x 0x%x\n",
     VAR_23->ulpStatus, VAR_21->fc_ns_retry);
 } else {

  VAR_26 = (struct lpfc_sli_ct_request *) VAR_25->virt;
  if (VAR_26->CommandResponse.bits.CmdRsp ==
      FUNC_0(VAR_15)) {
   FUNC_9(VAR_21, VAR_7, VAR_8,
      "0208 NameServer Rsp Data: x%x\n",
      VAR_21->fc_flag);
   FUNC_8(VAR_21, VAR_25,
        (uint32_t) (VAR_23->un.genreq64.bdl.bdeSize));
  } else if (VAR_26->CommandResponse.bits.CmdRsp ==
      FUNC_0(VAR_16)) {

   if ((VAR_26->ReasonCode == VAR_17)
       && (VAR_26->Explanation == VAR_14)) {
    FUNC_9(VAR_21, VAR_7,
     VAR_8,
     "0269 No NameServer Entries "
     "Data: x%x x%x x%x x%x\n",
     VAR_26->CommandResponse.bits.CmdRsp,
     (uint32_t) VAR_26->ReasonCode,
     (uint32_t) VAR_26->Explanation,
     VAR_21->fc_flag);

    FUNC_2(VAR_21, VAR_11,
    "GID_FT no entry  cmd:x%x rsn:x%x exp:x%x",
    (uint32_t)VAR_26->CommandResponse.bits.CmdRsp,
    (uint32_t) VAR_26->ReasonCode,
    (uint32_t) VAR_26->Explanation);
   } else {
    FUNC_9(VAR_21, VAR_7,
     VAR_8,
     "0240 NameServer Rsp Error "
     "Data: x%x x%x x%x x%x\n",
     VAR_26->CommandResponse.bits.CmdRsp,
     (uint32_t) VAR_26->ReasonCode,
     (uint32_t) VAR_26->Explanation,
     VAR_21->fc_flag);

    FUNC_2(VAR_21, VAR_11,
    "GID_FT rsp err1  cmd:x%x rsn:x%x exp:x%x",
    (uint32_t)VAR_26->CommandResponse.bits.CmdRsp,
    (uint32_t) VAR_26->ReasonCode,
    (uint32_t) VAR_26->Explanation);
   }


  } else {

   FUNC_9(VAR_21, VAR_6, VAR_8,
     "0241 NameServer Rsp Error "
     "Data: x%x x%x x%x x%x\n",
     VAR_26->CommandResponse.bits.CmdRsp,
     (uint32_t) VAR_26->ReasonCode,
     (uint32_t) VAR_26->Explanation,
     VAR_21->fc_flag);

   FUNC_2(VAR_21, VAR_11,
    "GID_FT rsp err2  cmd:x%x rsn:x%x exp:x%x",
    (uint32_t)VAR_26->CommandResponse.bits.CmdRsp,
    (uint32_t) VAR_26->ReasonCode,
    (uint32_t) VAR_26->Explanation);
  }
 }

 if (VAR_21->num_disc_nodes == 0) {





  if (VAR_21->port_state >= VAR_10) {
   if (VAR_21->fc_flag & VAR_0) {
    FUNC_5(VAR_21);
    FUNC_12(VAR_22->host_lock);
    VAR_21->fc_flag |= VAR_0;
    FUNC_13(VAR_22->host_lock);
   }
   else
    FUNC_5(VAR_21);
  }

  FUNC_3(VAR_21);
 }
out:
 VAR_19->context_un.ndlp = VAR_27;
 FUNC_1(VAR_18, VAR_19);
 return;
}
