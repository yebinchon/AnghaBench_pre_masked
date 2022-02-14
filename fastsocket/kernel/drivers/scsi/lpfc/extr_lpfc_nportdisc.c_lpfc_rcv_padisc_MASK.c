
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct serv_parm {int portName; int nodeName; } ;
struct TYPE_7__ {scalar_t__ vendorUnique; int lsRjtRsnCodeExp; int lsRjtRsnCode; scalar_t__ lsRjtRsvd0; } ;
struct TYPE_8__ {int lsRjtError; TYPE_2__ b; } ;
struct ls_rjt {TYPE_3__ un; } ;
struct lpfc_vport {TYPE_1__* phba; } ;
struct lpfc_nodelist {int nlp_type; int nlp_state; int nlp_prev_state; int nlp_last_elscmd; int nlp_flag; int nlp_delayfunc; } ;
struct lpfc_name {int dummy; } ;
struct TYPE_9__ {scalar_t__ ulpStatus; } ;
struct lpfc_iocbq {scalar_t__ drvrTimeout; TYPE_4__ iocb; scalar_t__ context2; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_10__ {int portName; int nodeName; } ;
struct TYPE_6__ {scalar_t__ sli_rev; } ;
typedef TYPE_4__ IOCB_t ;
typedef TYPE_5__ ADISC ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 struct lpfc_iocbq* FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,struct lpfc_name*,struct lpfc_name*) ;
 int FUNC_2 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 int FUNC_3 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_4 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 int VAR_12 ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct Scsi_Host* FUNC_6 (struct lpfc_vport*) ;
 int FUNC_7 (struct lpfc_nodelist*,int ,struct lpfc_iocbq*) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,scalar_t__) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13(struct lpfc_vport *VAR_13, struct lpfc_nodelist *VAR_14,
  struct lpfc_iocbq *VAR_15)
{
 struct Scsi_Host *VAR_16 = FUNC_6(VAR_13);
 struct lpfc_iocbq *VAR_17;
 struct lpfc_dmabuf *VAR_18;
 struct serv_parm *VAR_19;
 struct lpfc_name *VAR_20, *VAR_21;
 struct ls_rjt VAR_22;
 ADISC *VAR_23;
 IOCB_t *VAR_24;
 uint32_t *VAR_25;
 uint32_t VAR_26;

 VAR_18 = (struct lpfc_dmabuf *) VAR_15->context2;
 VAR_25 = (uint32_t *) VAR_18->virt;

 VAR_26 = *VAR_25++;
 if (VAR_26 == VAR_0) {
  VAR_23 = (ADISC *) VAR_25;
  VAR_20 = (struct lpfc_name *) & VAR_23->nodeName;
  VAR_21 = (struct lpfc_name *) & VAR_23->portName;
 } else {
  VAR_19 = (struct serv_parm *) VAR_25;
  VAR_20 = (struct lpfc_name *) & VAR_19->nodeName;
  VAR_21 = (struct lpfc_name *) & VAR_19->portName;
 }

 VAR_24 = &VAR_15->iocb;
 if (VAR_24->ulpStatus == 0 && FUNC_1(VAR_13, VAR_14, VAR_20, VAR_21)) {






  if (VAR_13->phba->sli_rev == VAR_3) {
   VAR_17 = FUNC_0(sizeof(struct lpfc_iocbq),
    VAR_2);
   if (VAR_17) {


    FUNC_8((uint8_t *)VAR_17, (uint8_t *)VAR_15,
     sizeof(struct lpfc_iocbq));


    VAR_17->drvrTimeout = VAR_26;

    FUNC_7(VAR_14,
     VAR_12, VAR_17);
    goto out;
   }
  }

  if (VAR_26 == VAR_0) {
   FUNC_3(VAR_13, VAR_15, VAR_14);
  } else {
   FUNC_2(VAR_13, VAR_1, VAR_15,
    VAR_14, ((void*)0));
  }
out:

  if (VAR_14->nlp_type & VAR_7)
   FUNC_5(VAR_13, VAR_14, VAR_8);
  else
   FUNC_5(VAR_13, VAR_14, VAR_10);

  return 1;
 }

 VAR_22.un.b.lsRjtRsvd0 = 0;
 VAR_22.un.b.lsRjtRsnCode = VAR_5;
 VAR_22.un.b.lsRjtRsnCodeExp = VAR_4;
 VAR_22.un.b.vendorUnique = 0;
 FUNC_4(VAR_13, VAR_22.un.lsRjtError, VAR_15, VAR_14, ((void*)0));


 FUNC_9(&VAR_14->nlp_delayfunc, VAR_11 + FUNC_10(1000));

 FUNC_11(VAR_16->host_lock);
 VAR_14->nlp_flag |= VAR_6;
 FUNC_12(VAR_16->host_lock);
 VAR_14->nlp_last_elscmd = VAR_1;
 VAR_14->nlp_prev_state = VAR_14->nlp_state;
 FUNC_5(VAR_13, VAR_14, VAR_9);
 return 0;
}
