
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_type; int nlp_state; void* nlp_prev_state; int nlp_portname; int nlp_nodename; int nlp_last_elscmd; int nlp_flag; int nlp_delayfunc; } ;
struct lpfc_name {int dummy; } ;
struct TYPE_5__ {scalar_t__ ulpStatus; } ;
struct TYPE_4__ {struct lpfc_iocbq* rsp_iocb; } ;
struct lpfc_iocbq {TYPE_2__ iocb; TYPE_1__ context_un; } ;
struct lpfc_hba {scalar_t__ sli_rev; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_6__ {int portName; int nodeName; } ;
typedef TYPE_2__ IOCB_t ;
typedef TYPE_3__ ADISC ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*,int *,int *) ;
 scalar_t__ FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct Scsi_Host* FUNC_3 (struct lpfc_vport*) ;
 int FUNC_4 (struct lpfc_nodelist*,int *,int *) ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static uint32_t
FUNC_11(struct lpfc_vport *VAR_9,
       struct lpfc_nodelist *VAR_10,
       void *VAR_11, uint32_t VAR_12)
{
 struct Scsi_Host *VAR_13 = FUNC_3(VAR_9);
 struct lpfc_hba *VAR_14 = VAR_9->phba;
 struct lpfc_iocbq *VAR_15, *VAR_16;
 IOCB_t *VAR_17;
 ADISC *VAR_18;
 int VAR_19;

 VAR_15 = (struct lpfc_iocbq *) VAR_11;
 VAR_16 = VAR_15->context_un.rsp_iocb;

 VAR_18 = (ADISC *)FUNC_1(VAR_14, VAR_15, VAR_16);
 VAR_17 = &VAR_16->iocb;

 if ((VAR_17->ulpStatus) ||
     (!FUNC_0(VAR_9, VAR_10, &VAR_18->nodeName, &VAR_18->portName))) {

  FUNC_7(&VAR_10->nlp_delayfunc,
     VAR_8 + FUNC_8(1000));
  FUNC_9(VAR_13->host_lock);
  VAR_10->nlp_flag |= VAR_2;
  FUNC_10(VAR_13->host_lock);
  VAR_10->nlp_last_elscmd = VAR_0;

  FUNC_6(&VAR_10->nlp_nodename, 0, sizeof(struct lpfc_name));
  FUNC_6(&VAR_10->nlp_portname, 0, sizeof(struct lpfc_name));

  VAR_10->nlp_prev_state = VAR_4;
  FUNC_2(VAR_9, VAR_10, VAR_6);
  FUNC_5(VAR_9, VAR_10);
  return VAR_10->nlp_state;
 }

 if (VAR_14->sli_rev == VAR_1) {
  VAR_19 = FUNC_4(VAR_10, ((void*)0), ((void*)0));
  if (VAR_19) {

   VAR_10->nlp_prev_state = VAR_4;
   return VAR_10->nlp_state;
  }
 }

 if (VAR_10->nlp_type & VAR_3) {
  VAR_10->nlp_prev_state = VAR_4;
  FUNC_2(VAR_9, VAR_10, VAR_5);
 } else {
  VAR_10->nlp_prev_state = VAR_4;
  FUNC_2(VAR_9, VAR_10, VAR_7);
 }

 return VAR_10->nlp_state;
}
