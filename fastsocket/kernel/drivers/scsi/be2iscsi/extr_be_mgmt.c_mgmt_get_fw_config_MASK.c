
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int iscsi_cid_count; int iscsi_cid_start; int iscsi_icd_count; int iscsi_icd_start; int phys_port; } ;
struct beiscsi_hba {TYPE_2__ fw_config; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_fw_cfg {TYPE_1__* ulp; int phys_port; int hdr; } ;
struct be_ctrl_info {int mbox_lock; int mbox_mem; } ;
struct TYPE_3__ {int sq_count; int sq_base; int icd_count; int icd_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (struct be_ctrl_info*) ;
 int FUNC_2 (struct be_mcc_wrb*,int,int,int ) ;
 int FUNC_3 (struct beiscsi_hba*,int ,int ,char*,...) ;
 struct be_fw_cfg* FUNC_4 (struct be_mcc_wrb*) ;
 int FUNC_5 (struct be_mcc_wrb*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct be_mcc_wrb* FUNC_8 (int *) ;

int FUNC_9(struct be_ctrl_info *VAR_6,
    struct beiscsi_hba *VAR_7)
{
 struct be_mcc_wrb *VAR_8 = FUNC_8(&VAR_6->mbox_mem);
 struct be_fw_cfg *VAR_9 = FUNC_4(VAR_8);
 int VAR_10 = 0;

 FUNC_6(&VAR_6->mbox_lock);
 FUNC_5(VAR_8, 0, sizeof(*VAR_8));

 FUNC_2(VAR_8, sizeof(*VAR_9), 1, 0);

 FUNC_0(&VAR_9->hdr, VAR_2,
      VAR_5, sizeof(*VAR_9));
 VAR_10 = FUNC_1(VAR_6);
 if (!VAR_10) {
  struct be_fw_cfg *VAR_11;
  VAR_11 = VAR_9;
  VAR_7->fw_config.phys_port = VAR_11->phys_port;
  VAR_7->fw_config.iscsi_icd_start =
     VAR_11->ulp[0].icd_base;
  VAR_7->fw_config.iscsi_icd_count =
     VAR_11->ulp[0].icd_count;
  VAR_7->fw_config.iscsi_cid_start =
     VAR_11->ulp[0].sq_base;
  VAR_7->fw_config.iscsi_cid_count =
     VAR_11->ulp[0].sq_count;
  if (VAR_7->fw_config.iscsi_cid_count > (VAR_0 / 2)) {
   FUNC_3(VAR_7, VAR_3, VAR_1,
        "BG_%d : FW reported MAX CXNS as %d\t"
        "Max Supported = %d.\n",
        VAR_7->fw_config.iscsi_cid_count,
        VAR_0);
   VAR_7->fw_config.iscsi_cid_count = VAR_0 / 2;
  }
 } else {
  FUNC_3(VAR_7, VAR_4, VAR_1,
       "BG_%d : Failed in mgmt_get_fw_config\n");
 }

 FUNC_7(&VAR_6->mbox_lock);
 return VAR_10;
}
