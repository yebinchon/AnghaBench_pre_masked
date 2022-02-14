
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int lsRjtRsnCodeExp; int lsRjtRsnCode; } ;
struct TYPE_4__ {int lsRjtError; TYPE_1__ b; } ;
struct ls_rjt {TYPE_2__ un; } ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_state; int nlp_DID; void* nlp_prev_state; } ;
struct lpfc_iocbq {int dummy; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_2 (struct lpfc_vport*,int ,int ) ;
 int FUNC_3 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct Scsi_Host* FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (struct ls_rjt*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static uint32_t
FUNC_8(struct lpfc_vport *VAR_7, struct lpfc_nodelist *VAR_8,
         void *VAR_9, uint32_t VAR_10)
{
 struct Scsi_Host *VAR_11 = FUNC_4(VAR_7);
 struct lpfc_iocbq *VAR_12 = (struct lpfc_iocbq *) VAR_9;
 struct ls_rjt VAR_13;

 FUNC_5(&VAR_13, 0, sizeof (struct ls_rjt));
 VAR_13.un.b.lsRjtRsnCode = VAR_1;
 VAR_13.un.b.lsRjtRsnCodeExp = VAR_0;
 FUNC_0(VAR_7, VAR_13.un.lsRjtError, VAR_12, VAR_8, ((void*)0));

 if (!(VAR_8->nlp_flag & VAR_2)) {
  if (VAR_8->nlp_flag & VAR_3) {
   FUNC_6(VAR_11->host_lock);
   VAR_8->nlp_flag &= ~VAR_3;
   VAR_8->nlp_prev_state = VAR_5;
   FUNC_7(VAR_11->host_lock);
   FUNC_3(VAR_7, VAR_8, VAR_4);
   FUNC_1(VAR_7, VAR_8, 0);
  } else {
   VAR_8->nlp_prev_state = VAR_5;
   FUNC_3(VAR_7, VAR_8, VAR_6);
   FUNC_2(VAR_7, VAR_8->nlp_DID, 0);
  }
 }
 return VAR_8->nlp_state;
}
