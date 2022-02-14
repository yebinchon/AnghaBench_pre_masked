
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int fc_flag; TYPE_1__* phba; } ;
struct lpfc_nodelist {int nlp_flag; scalar_t__ nlp_state; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_2__ {int nlp_mem_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 struct lpfc_nodelist* FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct lpfc_nodelist* FUNC_3 (struct lpfc_vport*,int ) ;
 int FUNC_4 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 scalar_t__ FUNC_6 (struct lpfc_vport*,int ) ;
 struct Scsi_Host* FUNC_7 (struct lpfc_vport*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

struct lpfc_nodelist *
FUNC_11(struct lpfc_vport *VAR_8, uint32_t VAR_9)
{
 struct Scsi_Host *VAR_10 = FUNC_7(VAR_8);
 struct lpfc_nodelist *VAR_11;

 VAR_11 = FUNC_3(VAR_8, VAR_9);
 if (!VAR_11) {
  if ((VAR_8->fc_flag & VAR_1) != 0 &&
      FUNC_6(VAR_8, VAR_9) == 0)
   return ((void*)0);
  VAR_11 = (struct lpfc_nodelist *)
       FUNC_8(VAR_8->phba->nlp_mem_pool, VAR_2);
  if (!VAR_11)
   return ((void*)0);
  FUNC_4(VAR_8, VAR_11, VAR_9);
  FUNC_5(VAR_8, VAR_11, VAR_6);
  FUNC_9(VAR_10->host_lock);
  VAR_11->nlp_flag |= VAR_3;
  FUNC_10(VAR_10->host_lock);
  return VAR_11;
 } else if (!FUNC_0(VAR_11)) {
  VAR_11 = FUNC_2(VAR_8, VAR_11, VAR_6);
  if (!VAR_11)
   return ((void*)0);
  FUNC_9(VAR_10->host_lock);
  VAR_11->nlp_flag |= VAR_3;
  FUNC_10(VAR_10->host_lock);
  return VAR_11;
 }

 if ((VAR_8->fc_flag & VAR_1) &&
     !(VAR_8->fc_flag & VAR_0)) {
  if (FUNC_6(VAR_8, VAR_9)) {



   if (VAR_11->nlp_flag & VAR_4)
    return ((void*)0);




   FUNC_1(VAR_8, VAR_11);
   FUNC_9(VAR_10->host_lock);
   VAR_11->nlp_flag |= VAR_3;
   FUNC_10(VAR_10->host_lock);
  } else
   VAR_11 = ((void*)0);
 } else {




  if (VAR_11->nlp_state == VAR_5 ||
      VAR_11->nlp_state == VAR_7 ||
      VAR_11->nlp_flag & VAR_4)
   return ((void*)0);
  FUNC_5(VAR_8, VAR_11, VAR_6);
  FUNC_9(VAR_10->host_lock);
  VAR_11->nlp_flag |= VAR_3;
  FUNC_10(VAR_10->host_lock);
 }
 return VAR_11;
}
