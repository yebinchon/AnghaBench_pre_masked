
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_rpi; int nlp_state; int nlp_DID; int nlp_prev_state; struct lpfc_vport* vport; } ;
struct TYPE_10__ {int remoteID; } ;
struct TYPE_11__ {int * ulpWord; TYPE_2__ elsreq64; } ;
struct TYPE_13__ {scalar_t__ ulpStatus; int ulpTimeout; TYPE_3__ un; int ulpIoTag; } ;
struct TYPE_9__ {TYPE_4__* mbox; } ;
struct lpfc_iocbq {int * context1; TYPE_5__ iocb; scalar_t__ context2; TYPE_1__ context_un; } ;
struct lpfc_hba {int mbox_mem_pool; } ;
struct lpfc_dmabuf {int phys; scalar_t__ virt; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_12__ {scalar_t__ context1; int mbox_cmpl; int mbox_flag; struct lpfc_vport* vport; int context2; } ;
typedef TYPE_4__ LPFC_MBOXQ_t ;
typedef TYPE_5__ IOCB_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 int FUNC_2 (struct lpfc_vport*,int ,char*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (struct lpfc_vport*) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (struct lpfc_hba*,scalar_t__,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (struct lpfc_nodelist*) ;
 scalar_t__ FUNC_8 (struct lpfc_nodelist*) ;
 int FUNC_9 (struct lpfc_nodelist*) ;
 int FUNC_10 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_11 (struct lpfc_vport*,int ,int ,char*,int ,int,int ,int ,...) ;
 struct Scsi_Host* FUNC_12 (struct lpfc_vport*) ;
 scalar_t__ FUNC_13 (struct lpfc_hba*,TYPE_4__*,int ) ;
 int FUNC_14 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_15 (TYPE_4__*,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void
FUNC_18(struct lpfc_hba *VAR_13, struct lpfc_iocbq *VAR_14,
    struct lpfc_iocbq *VAR_15)
{
 struct lpfc_nodelist *VAR_16 = (struct lpfc_nodelist *) VAR_14->context1;
 struct lpfc_vport *VAR_17 = VAR_16 ? VAR_16->vport : ((void*)0);
 struct Scsi_Host *VAR_18 = VAR_17 ? FUNC_12(VAR_17) : ((void*)0);
 IOCB_t *VAR_19;
 uint8_t *VAR_20;
 LPFC_MBOXQ_t *VAR_21 = ((void*)0);
 struct lpfc_dmabuf *VAR_22 = ((void*)0);
 uint32_t VAR_23 = 0;

 VAR_19 = &VAR_15->iocb;

 if (VAR_14->context_un.mbox)
  VAR_21 = VAR_14->context_un.mbox;




 VAR_20 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_14->context2)->virt);
 if (VAR_16 && FUNC_0(VAR_16) &&
     (*((uint32_t *) (VAR_20)) == VAR_0)) {



  if (!(VAR_16->nlp_flag & VAR_9))
   VAR_23 = 1;
 }


 if (!VAR_16 || !FUNC_0(VAR_16) || FUNC_3(VAR_17)) {
  if (VAR_21) {
   VAR_22 = (struct lpfc_dmabuf *) VAR_21->context1;
   if (VAR_22) {
    FUNC_6(VAR_13, VAR_22->virt, VAR_22->phys);
    FUNC_1(VAR_22);
   }
   FUNC_15(VAR_21, VAR_13->mbox_mem_pool);
  }
  if (VAR_16 && FUNC_0(VAR_16) &&
      (VAR_16->nlp_flag & VAR_9))
   if (FUNC_8(VAR_16)) {
    VAR_16 = ((void*)0);




    VAR_14->context1 = ((void*)0);
   }
  goto out;
 }

 FUNC_2(VAR_17, VAR_4,
  "ELS rsp cmpl:    status:x%x/x%x did:x%x",
  VAR_19->ulpStatus, VAR_19->un.ulpWord[4],
  VAR_14->iocb.un.elsreq64.remoteID);

 FUNC_11(VAR_17, VAR_2, VAR_3,
    "0110 ELS response tag x%x completes "
    "Data: x%x x%x x%x x%x x%x x%x x%x\n",
    VAR_14->iocb.ulpIoTag, VAR_15->iocb.ulpStatus,
    VAR_15->iocb.un.ulpWord[4], VAR_15->iocb.ulpTimeout,
    VAR_16->nlp_DID, VAR_16->nlp_flag, VAR_16->nlp_state,
    VAR_16->nlp_rpi);
 if (VAR_21) {
  if ((VAR_15->iocb.ulpStatus == 0)
      && (VAR_16->nlp_flag & VAR_8)) {
   FUNC_14(VAR_17, VAR_16);



   VAR_21->context2 = FUNC_7(VAR_16);
   VAR_21->vport = VAR_17;
   if (VAR_16->nlp_flag & VAR_9) {
    VAR_21->mbox_flag |= VAR_5;
    VAR_21->mbox_cmpl = VAR_11;
   }
   else {
    VAR_21->mbox_cmpl = VAR_12;
    VAR_16->nlp_prev_state = VAR_16->nlp_state;
    FUNC_10(VAR_17, VAR_16,
        VAR_10);
   }
   if (FUNC_13(VAR_13, VAR_21, VAR_7)
       != VAR_6)
    goto out;
   else



    FUNC_9(VAR_16);


   FUNC_11(VAR_17, VAR_1, VAR_3,
    "0138 ELS rsp: Cannot issue reg_login for x%x "
    "Data: x%x x%x x%x\n",
    VAR_16->nlp_DID, VAR_16->nlp_flag, VAR_16->nlp_state,
    VAR_16->nlp_rpi);

   if (FUNC_8(VAR_16)) {
    VAR_16 = ((void*)0);




    VAR_14->context1 = ((void*)0);
   }
  } else {

   if (!FUNC_5(VAR_19) &&
       VAR_16->nlp_flag & VAR_8) {
    if (FUNC_8(VAR_16)) {
     VAR_16 = ((void*)0);





     VAR_14->context1 = ((void*)0);
    }
   }
  }
  VAR_22 = (struct lpfc_dmabuf *) VAR_21->context1;
  if (VAR_22) {
   FUNC_6(VAR_13, VAR_22->virt, VAR_22->phys);
   FUNC_1(VAR_22);
  }
  FUNC_15(VAR_21, VAR_13->mbox_mem_pool);
 }
out:
 if (VAR_16 && FUNC_0(VAR_16)) {
  FUNC_16(VAR_18->host_lock);
  VAR_16->nlp_flag &= ~(VAR_8 | VAR_9);
  FUNC_17(VAR_18->host_lock);






  if (VAR_23)
   if (FUNC_8(VAR_16))




    VAR_14->context1 = ((void*)0);
 }

 FUNC_4(VAR_13, VAR_14);
 return;
}
