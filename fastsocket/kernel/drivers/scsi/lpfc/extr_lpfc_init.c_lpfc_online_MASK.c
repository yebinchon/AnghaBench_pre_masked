
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_vport {int fc_flag; scalar_t__ port_type; scalar_t__ vpi; } ;
struct TYPE_3__ {int vpi_used; } ;
struct TYPE_4__ {TYPE_1__ max_cfg_param; } ;
struct lpfc_hba {scalar_t__ sli_rev; int max_vports; int sli3_options; int hbalock; TYPE_2__ sli4_hba; struct lpfc_vport* pport; } ;
struct Scsi_Host {int * host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct lpfc_hba*,int ) ;
 struct lpfc_vport** FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_vport**) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*) ;
 struct Scsi_Host* FUNC_4 (struct lpfc_vport*) ;
 scalar_t__ FUNC_5 (struct lpfc_hba*) ;
 scalar_t__ FUNC_6 (struct lpfc_hba*) ;
 int FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (struct lpfc_hba*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int
FUNC_11(struct lpfc_hba *VAR_9)
{
 struct lpfc_vport *VAR_10;
 struct lpfc_vport **VAR_11;
 int VAR_12;
 bool VAR_13 = 0;

 if (!VAR_9)
  return 0;
 VAR_10 = VAR_9->pport;

 if (!(VAR_10->fc_flag & VAR_0))
  return 0;

 FUNC_3(VAR_9, VAR_3, VAR_4,
   "0458 Bring Adapter online\n");

 FUNC_0(VAR_9, VAR_5);

 if (!FUNC_7(VAR_9)) {
  FUNC_8(VAR_9);
  return 1;
 }

 if (VAR_9->sli_rev == VAR_8) {
  if (FUNC_5(VAR_9)) {
   FUNC_8(VAR_9);
   return 1;
  }
  FUNC_9(&VAR_9->hbalock);
  if (!VAR_9->sli4_hba.max_cfg_param.vpi_used)
   VAR_13 = 1;
  FUNC_10(&VAR_9->hbalock);
 } else {
  if (FUNC_6(VAR_9)) {
   FUNC_8(VAR_9);
   return 1;
  }
 }

 VAR_11 = FUNC_1(VAR_9);
 if (VAR_11 != ((void*)0))
  for (VAR_12 = 0; VAR_12 <= VAR_9->max_vports && VAR_11[VAR_12] != ((void*)0); VAR_12++) {
   struct Scsi_Host *VAR_14;
   VAR_14 = FUNC_4(VAR_11[VAR_12]);
   FUNC_9(VAR_14->host_lock);
   VAR_11[VAR_12]->fc_flag &= ~VAR_0;
   if (VAR_9->sli3_options & VAR_7)
    VAR_11[VAR_12]->fc_flag |= VAR_2;
   if (VAR_9->sli_rev == VAR_8) {
    VAR_11[VAR_12]->fc_flag |= VAR_1;
    if ((VAR_13) &&
        (VAR_11[VAR_12]->port_type !=
     VAR_6))
     VAR_11[VAR_12]->vpi = 0;
   }
   FUNC_10(VAR_14->host_lock);
  }
  FUNC_2(VAR_9, VAR_11);

 FUNC_8(VAR_9);
 return 0;
}
