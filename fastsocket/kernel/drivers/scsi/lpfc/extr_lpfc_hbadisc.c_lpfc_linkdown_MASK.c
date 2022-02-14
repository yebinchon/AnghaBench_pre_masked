
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct lpfc_vport {int fc_flag; scalar_t__ fc_myDID; } ;
struct TYPE_8__ {int fcf_flag; } ;
struct lpfc_hba {scalar_t__ link_state; int max_vports; struct lpfc_vport* pport; int mbox_mem_pool; int hbalock; TYPE_1__ fcf; } ;
struct Scsi_Host {int * host_lock; } ;
struct TYPE_9__ {struct lpfc_vport* vport; void* mbox_cmpl; } ;
typedef TYPE_2__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct lpfc_hba*,TYPE_2__*) ;
 struct lpfc_vport** FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_vport**) ;
 int FUNC_3 (struct lpfc_vport*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 struct Scsi_Host* FUNC_5 (struct lpfc_vport*) ;
 void* VAR_10 ;
 scalar_t__ FUNC_6 (struct lpfc_hba*,TYPE_2__*,int ) ;
 int FUNC_7 (struct lpfc_hba*,int,int ,TYPE_2__*) ;
 TYPE_2__* FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int
FUNC_12(struct lpfc_hba *VAR_11)
{
 struct lpfc_vport *VAR_12 = VAR_11->pport;
 struct Scsi_Host *VAR_13 = FUNC_5(VAR_12);
 struct lpfc_vport **VAR_14;
 LPFC_MBOXQ_t *VAR_15;
 int VAR_16;

 if (VAR_11->link_state == VAR_6)
  return 0;


 FUNC_4(VAR_11);

 FUNC_10(&VAR_11->hbalock);
 VAR_11->fcf.fcf_flag &= ~(VAR_0 | VAR_1);
 FUNC_11(&VAR_11->hbalock);
 if (VAR_11->link_state > VAR_6) {
  VAR_11->link_state = VAR_6;
  FUNC_10(VAR_13->host_lock);
  VAR_11->pport->fc_flag &= ~VAR_2;
  FUNC_11(VAR_13->host_lock);
 }
 VAR_14 = FUNC_1(VAR_11);
 if (VAR_14 != ((void*)0))
  for (VAR_16 = 0; VAR_16 <= VAR_11->max_vports && VAR_14[VAR_16] != ((void*)0); VAR_16++) {

   FUNC_3(VAR_14[VAR_16]);
  }
 FUNC_2(VAR_11, VAR_14);

 VAR_15 = FUNC_8(VAR_11->mbox_mem_pool, VAR_5);
 if (VAR_15) {
  FUNC_7(VAR_11, 0xffff, VAR_7, VAR_15);
  VAR_15->vport = VAR_12;
  VAR_15->mbox_cmpl = VAR_10;
  if (FUNC_6(VAR_11, VAR_15, VAR_9)
      == VAR_8) {
   FUNC_9(VAR_15, VAR_11->mbox_mem_pool);
  }
 }


 if (VAR_11->pport->fc_flag & VAR_3) {
  VAR_11->pport->fc_myDID = 0;
  VAR_15 = FUNC_8(VAR_11->mbox_mem_pool, VAR_5);
  if (VAR_15) {
   FUNC_0(VAR_11, VAR_15);
   VAR_15->mbox_cmpl = VAR_10;
   VAR_15->vport = VAR_12;
   if (FUNC_6(VAR_11, VAR_15, VAR_9)
       == VAR_8) {
    FUNC_9(VAR_15, VAR_11->mbox_mem_pool);
   }
  }
  FUNC_10(VAR_13->host_lock);
  VAR_11->pport->fc_flag &= ~(VAR_3 | VAR_4);
  FUNC_11(VAR_13->host_lock);
 }

 return 0;
}
