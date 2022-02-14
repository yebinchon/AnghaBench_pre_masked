
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int sli3_options; int cfg_poll; scalar_t__ cfg_hba_queue_depth; int pcidev; int ModelDesc; int ModelName; } ;
struct lpfc_adapter_event_header {int subcategory; int event_type; } ;
struct Scsi_Host {int host_lock; scalar_t__ can_queue; } ;
typedef int adapter_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (struct Scsi_Host*,int ,int,char*,int ) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ) ;
 int FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*,int ,int ,char*) ;
 int FUNC_6 (struct lpfc_hba*,struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct lpfc_hba *VAR_7)
{
 struct Scsi_Host *VAR_8;
 struct lpfc_adapter_event_header VAR_9;


 FUNC_2(VAR_7, VAR_7->ModelName, VAR_7->ModelDesc);





 VAR_8 = FUNC_7(VAR_7->pcidev);
 VAR_8->can_queue = VAR_7->cfg_hba_queue_depth - 10;
 if (VAR_7->sli3_options & VAR_6)
  FUNC_6(VAR_7, VAR_8);

 FUNC_3(VAR_8);

 if (VAR_7->cfg_poll & VAR_0) {
  FUNC_8(VAR_8->host_lock);
  FUNC_4(VAR_7);
  FUNC_9(VAR_8->host_lock);
 }

 FUNC_5(VAR_7, VAR_2, VAR_3,
   "0428 Perform SCSI scan\n");

 VAR_9.event_type = VAR_1;
 VAR_9.subcategory = VAR_4;
 FUNC_1(VAR_8, FUNC_0(),
      sizeof(VAR_9),
      (char *) &VAR_9,
      VAR_5);
 return;
}
