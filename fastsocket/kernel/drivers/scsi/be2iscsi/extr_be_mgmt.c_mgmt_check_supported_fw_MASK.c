
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iscsi_features; } ;
struct beiscsi_hba {int fw_ver_str; TYPE_1__ fw_config; } ;
struct be_sge {void* len; void* pa_lo; void* pa_hi; } ;
struct TYPE_5__ {int firmware_version_string; int iscsi_features; int flashrom_version_string; } ;
struct TYPE_6__ {TYPE_2__ hba_attribs; } ;
struct be_mgmt_controller_attributes_resp {TYPE_3__ params; int hdr; } ;
struct be_mgmt_controller_attributes {TYPE_3__ params; int hdr; } ;
struct be_mcc_wrb {TYPE_3__ params; int hdr; } ;
struct be_dma_mem {int dma; int size; struct be_mgmt_controller_attributes_resp* va; } ;
struct be_ctrl_info {int pdev; int mbox_lock; int mbox_mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (struct be_ctrl_info*) ;
 int FUNC_2 (struct be_mgmt_controller_attributes_resp*,int,int,int) ;
 int FUNC_3 (struct beiscsi_hba*,int ,int ,char*,...) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct be_mgmt_controller_attributes_resp*,int ,int) ;
 struct be_sge* FUNC_7 (struct be_mgmt_controller_attributes_resp*) ;
 struct be_mgmt_controller_attributes_resp* FUNC_8 (int ,int,int*) ;
 int FUNC_9 (int ,int,struct be_mgmt_controller_attributes_resp*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int) ;
 struct be_mgmt_controller_attributes_resp* FUNC_13 (int *) ;

int FUNC_14(struct be_ctrl_info *VAR_7,
          struct beiscsi_hba *VAR_8)
{
 struct be_dma_mem VAR_9;
 struct be_mcc_wrb *VAR_10 = FUNC_13(&VAR_7->mbox_mem);
 struct be_mgmt_controller_attributes *VAR_11;
 struct be_sge *VAR_12 = FUNC_7(VAR_10);
 int VAR_13 = 0;

 VAR_9.va = FUNC_8(VAR_7->pdev,
    sizeof(struct be_mgmt_controller_attributes),
    &VAR_9.dma);
 if (VAR_9.va == ((void*)0)) {
  FUNC_3(VAR_8, VAR_4, VAR_0,
       "BG_%d : Failed to allocate memory for "
       "mgmt_check_supported_fw\n");
  return -VAR_3;
 }
 VAR_9.size = sizeof(struct be_mgmt_controller_attributes);
 VAR_11 = VAR_9.va;
 FUNC_6(VAR_11, 0, sizeof(*VAR_11));
 FUNC_10(&VAR_7->mbox_lock);
 FUNC_6(VAR_10, 0, sizeof(*VAR_10));
 FUNC_2(VAR_10, sizeof(*VAR_11), 0, 1);
 FUNC_0(&VAR_11->hdr, VAR_2,
      VAR_6, sizeof(*VAR_11));
 VAR_12->pa_hi = FUNC_4(FUNC_12(VAR_9.dma));
 VAR_12->pa_lo = FUNC_4(VAR_9.dma & 0xFFFFFFFF);
 VAR_12->len = FUNC_4(VAR_9.size);
 VAR_13 = FUNC_1(VAR_7);
 if (!VAR_13) {
  struct be_mgmt_controller_attributes_resp *VAR_14 = VAR_9.va;
  FUNC_3(VAR_8, VAR_5, VAR_0,
       "BG_%d : Firmware Version of CMD : %s\n"
       "Firmware Version is : %s\n"
       "Developer Build, not performing version check...\n",
       VAR_14->params.hba_attribs
       .flashrom_version_string,
       VAR_14->params.hba_attribs.
       firmware_version_string);

  VAR_8->fw_config.iscsi_features =
    VAR_14->params.hba_attribs.iscsi_features;
  FUNC_3(VAR_8, VAR_5, VAR_0,
       "BM_%d : phba->fw_config.iscsi_features = %d\n",
       VAR_8->fw_config.iscsi_features);
  FUNC_5(VAR_8->fw_ver_str, VAR_14->params.hba_attribs.
         firmware_version_string, VAR_1);
 } else
  FUNC_3(VAR_8, VAR_4, VAR_0,
       "BG_%d :  Failed in mgmt_check_supported_fw\n");
 FUNC_11(&VAR_7->mbox_lock);
 if (VAR_9.va)
  FUNC_9(VAR_7->pdev, VAR_9.size,
        VAR_9.va, VAR_9.dma);

 return VAR_13;
}
