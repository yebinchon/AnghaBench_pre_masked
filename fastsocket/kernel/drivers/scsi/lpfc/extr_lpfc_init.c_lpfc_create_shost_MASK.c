
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_vport {int dummy; } ;
struct lpfc_hba {TYPE_1__* pcidev; struct lpfc_vport* pport; int brd_no; int sdev_cnt; int fc_arbtov; int fc_altov; int fc_ratov; int fc_edtov; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 struct lpfc_vport* FUNC_1 (struct lpfc_hba*,int ,int *) ;
 int FUNC_2 (struct lpfc_vport*) ;
 struct Scsi_Host* FUNC_3 (struct lpfc_vport*) ;
 int FUNC_4 (TYPE_1__*,struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_5(struct lpfc_hba *VAR_5)
{
 struct lpfc_vport *VAR_6;
 struct Scsi_Host *VAR_7;


 VAR_5->fc_edtov = VAR_3;
 VAR_5->fc_ratov = VAR_4;
 VAR_5->fc_altov = VAR_1;
 VAR_5->fc_arbtov = VAR_2;

 FUNC_0(&VAR_5->sdev_cnt, 0);
 VAR_6 = FUNC_1(VAR_5, VAR_5->brd_no, &VAR_5->pcidev->dev);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_6);
 VAR_5->pport = VAR_6;
 FUNC_2(VAR_6);

 FUNC_4(VAR_5->pcidev, VAR_7);

 return 0;
}
