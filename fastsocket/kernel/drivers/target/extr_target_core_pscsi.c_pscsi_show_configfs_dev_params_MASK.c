
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_device {TYPE_1__* se_hba; } ;
struct scsi_device {int* vendor; int* model; int* rev; } ;
struct pscsi_hba_virt {scalar_t__ phv_mode; } ;
struct pscsi_dev_virt {int pdv_host_id; int pdv_channel_id; int pdv_target_id; int pdv_lun_id; struct scsi_device* pdv_sd; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct pscsi_hba_virt* hba_ptr; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct pscsi_dev_virt* FUNC_1 (struct se_device*) ;
 int FUNC_2 (unsigned char*,int,char*,...) ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_4(struct se_device *VAR_1, char *VAR_2)
{
 struct pscsi_hba_virt *VAR_3 = VAR_1->se_hba->hba_ptr;
 struct pscsi_dev_virt *VAR_4 = FUNC_1(VAR_1);
 struct scsi_device *VAR_5 = VAR_4->pdv_sd;
 unsigned char VAR_6[16];
 ssize_t VAR_7;
 int VAR_8;

 if (VAR_3->phv_mode == VAR_0)
  FUNC_2(VAR_6, 16, "%d", VAR_4->pdv_host_id);
 else
  FUNC_2(VAR_6, 16, "PHBA Mode");

 VAR_7 = FUNC_3(VAR_2, "SCSI Device Bus Location:"
  " Channel ID: %d Target ID: %d LUN: %d Host ID: %s\n",
  VAR_4->pdv_channel_id, VAR_4->pdv_target_id, VAR_4->pdv_lun_id,
  VAR_6);

 if (VAR_5) {
  VAR_7 += FUNC_3(VAR_2 + VAR_7, "        ");
  VAR_7 += FUNC_3(VAR_2 + VAR_7, "Vendor: ");
  for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
   if (FUNC_0(VAR_5->vendor[VAR_8]))
    VAR_7 += FUNC_3(VAR_2 + VAR_7, "%c", VAR_5->vendor[VAR_8]);
   else
    VAR_7 += FUNC_3(VAR_2 + VAR_7, " ");
  }
  VAR_7 += FUNC_3(VAR_2 + VAR_7, " Model: ");
  for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
   if (FUNC_0(VAR_5->model[VAR_8]))
    VAR_7 += FUNC_3(VAR_2 + VAR_7, "%c", VAR_5->model[VAR_8]);
   else
    VAR_7 += FUNC_3(VAR_2 + VAR_7, " ");
  }
  VAR_7 += FUNC_3(VAR_2 + VAR_7, " Rev: ");
  for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
   if (FUNC_0(VAR_5->rev[VAR_8]))
    VAR_7 += FUNC_3(VAR_2 + VAR_7, "%c", VAR_5->rev[VAR_8]);
   else
    VAR_7 += FUNC_3(VAR_2 + VAR_7, " ");
  }
  VAR_7 += FUNC_3(VAR_2 + VAR_7, "\n");
 }
 return VAR_7;
}
