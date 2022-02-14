
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int dummy; } ;
struct lpfc_hba {int max_vpi; struct lpfc_vport* pport; } ;
struct Scsi_Host {int dummy; } ;


 struct lpfc_vport** FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_vport**) ;
 struct Scsi_Host* FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (struct Scsi_Host*) ;

__attribute__((used)) static void
FUNC_4(struct lpfc_hba *VAR_0)
{
 struct Scsi_Host *VAR_1;
 struct lpfc_vport **VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2) {
  for (VAR_3 = 0; VAR_3 <= VAR_0->max_vpi && VAR_2[VAR_3] != ((void*)0); VAR_3++) {
   VAR_1 = FUNC_2(VAR_2[VAR_3]);
   FUNC_3(VAR_1);
  }
  FUNC_1(VAR_0, VAR_2);
 } else {
  VAR_1 = FUNC_2(VAR_0->pport);
  FUNC_3(VAR_1);
 }
 return;
}
