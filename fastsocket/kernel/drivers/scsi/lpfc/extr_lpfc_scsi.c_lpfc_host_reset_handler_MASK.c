
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_2__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*,int ) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ,char*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*) ;
 int FUNC_6 (struct lpfc_hba*) ;

__attribute__((used)) static int
FUNC_7(struct scsi_cmnd *VAR_5)
{
 struct Scsi_Host *VAR_6 = VAR_5->device->host;
 struct lpfc_vport *VAR_7 = (struct lpfc_vport *) VAR_6->hostdata;
 struct lpfc_hba *VAR_8 = VAR_7->phba;
 int VAR_9, VAR_10 = VAR_4;

 FUNC_3(VAR_7, VAR_1, VAR_2,
    "3172 SCSI layer issued Host Reset Data:\n");

 FUNC_1(VAR_8, VAR_3);
 FUNC_0(VAR_8);
 VAR_9 = FUNC_5(VAR_8);
 if (VAR_9)
  VAR_10 = VAR_0;
 VAR_9 = FUNC_2(VAR_8);
 if (VAR_9)
  VAR_10 = VAR_0;
 FUNC_6(VAR_8);

 if (VAR_10 == VAR_0) {
  FUNC_3(VAR_7, VAR_1, VAR_2,
     "3323 Failed host reset, bring it offline\n");
  FUNC_4(VAR_8);
 }
 return VAR_10;
}
