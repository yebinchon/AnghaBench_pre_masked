
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const u8 ;
struct image_hdr {int dummy; } ;
struct flash_section_info {int dummy; } ;
struct flash_file_hdr_g3 {int dummy; } ;
struct flash_file_hdr_g2 {int dummy; } ;
struct flash_comp {scalar_t__ member_1; scalar_t__ optype; int size; int img_type; scalar_t__ offset; int member_3; int member_2; int member_0; } ;
struct firmware {int size; int const* data; } ;
struct be_dma_mem {int dummy; } ;
struct be_adapter {TYPE_1__* pdev; int fw_ver; } ;
struct TYPE_2__ {int dev; } ;


 int ARRAY_SIZE (struct flash_comp*) ;
 scalar_t__ BE3_chip (struct be_adapter*) ;
 int FLASH_BIOS_IMAGE_MAX_SIZE_g2 ;
 int FLASH_BIOS_IMAGE_MAX_SIZE_g3 ;
 int FLASH_FCoE_BACKUP_IMAGE_START_g2 ;
 int FLASH_FCoE_BACKUP_IMAGE_START_g3 ;
 int FLASH_FCoE_BIOS_START_g2 ;
 int FLASH_FCoE_BIOS_START_g3 ;
 int FLASH_FCoE_PRIMARY_IMAGE_START_g2 ;
 int FLASH_FCoE_PRIMARY_IMAGE_START_g3 ;
 int FLASH_IMAGE_MAX_SIZE_g2 ;
 int FLASH_IMAGE_MAX_SIZE_g3 ;
 int FLASH_NCSI_IMAGE_MAX_SIZE_g3 ;
 int FLASH_NCSI_START_g3 ;
 int FLASH_PHY_FW_IMAGE_MAX_SIZE_g3 ;
 int FLASH_PHY_FW_START_g3 ;
 int FLASH_PXE_BIOS_START_g2 ;
 int FLASH_PXE_BIOS_START_g3 ;
 int FLASH_REDBOOT_IMAGE_MAX_SIZE_g2 ;
 int FLASH_REDBOOT_IMAGE_MAX_SIZE_g3 ;
 int FLASH_REDBOOT_START_g2 ;
 int FLASH_REDBOOT_START_g3 ;
 int FLASH_iSCSI_BACKUP_IMAGE_START_g2 ;
 int FLASH_iSCSI_BACKUP_IMAGE_START_g3 ;
 int FLASH_iSCSI_BIOS_START_g2 ;
 int FLASH_iSCSI_BIOS_START_g3 ;
 int FLASH_iSCSI_PRIMARY_IMAGE_START_g2 ;
 int FLASH_iSCSI_PRIMARY_IMAGE_START_g3 ;
 int IMAGE_BOOT_CODE ;
 int IMAGE_FIRMWARE_BACKUP_FCoE ;
 int IMAGE_FIRMWARE_BACKUP_iSCSI ;
 int IMAGE_FIRMWARE_FCoE ;
 int IMAGE_FIRMWARE_PHY ;
 int IMAGE_FIRMWARE_iSCSI ;
 int IMAGE_NCSI ;
 int IMAGE_OPTION_ROM_FCoE ;
 int IMAGE_OPTION_ROM_ISCSI ;
 int IMAGE_OPTION_ROM_PXE ;
 scalar_t__ OPTYPE_BIOS ;
 scalar_t__ OPTYPE_FCOE_BIOS ;
 scalar_t__ OPTYPE_FCOE_FW_ACTIVE ;
 scalar_t__ OPTYPE_FCOE_FW_BACKUP ;
 scalar_t__ OPTYPE_ISCSI_ACTIVE ;
 scalar_t__ OPTYPE_ISCSI_BACKUP ;
 scalar_t__ OPTYPE_NCSI_FW ;
 scalar_t__ OPTYPE_PHY_FW ;
 scalar_t__ OPTYPE_PXE_BIOS ;
 scalar_t__ OPTYPE_REDBOOT ;
 int be_flash (struct be_adapter*,int const*,struct be_dma_mem*,scalar_t__,int) ;
 int be_flash_redboot (struct be_adapter*,int const*,scalar_t__,int,int) ;
 int dev_err (int *,char*,...) ;
 struct flash_section_info* get_fsec_info (struct be_adapter*,int,struct firmware const*) ;
 int is_comp_in_ufi (struct be_adapter*,struct flash_section_info*,int ) ;
 scalar_t__ memcmp (int ,char*,int) ;
 int phy_flashing_required (struct be_adapter*) ;

__attribute__((used)) static int be_flash_BEx(struct be_adapter *adapter,
    const struct firmware *fw,
    struct be_dma_mem *flash_cmd,
    int num_of_images)

{
 int status = 0, i, filehdr_size = 0;
 int img_hdrs_size = (num_of_images * sizeof(struct image_hdr));
 const u8 *p = fw->data;
 const struct flash_comp *pflashcomp;
 int num_comp, redboot;
 struct flash_section_info *fsec = ((void*)0);

 struct flash_comp gen3_flash_types[] = {
  { FLASH_iSCSI_PRIMARY_IMAGE_START_g3, OPTYPE_ISCSI_ACTIVE,
   FLASH_IMAGE_MAX_SIZE_g3, IMAGE_FIRMWARE_iSCSI},
  { FLASH_REDBOOT_START_g3, OPTYPE_REDBOOT,
   FLASH_REDBOOT_IMAGE_MAX_SIZE_g3, IMAGE_BOOT_CODE},
  { FLASH_iSCSI_BIOS_START_g3, OPTYPE_BIOS,
   FLASH_BIOS_IMAGE_MAX_SIZE_g3, IMAGE_OPTION_ROM_ISCSI},
  { FLASH_PXE_BIOS_START_g3, OPTYPE_PXE_BIOS,
   FLASH_BIOS_IMAGE_MAX_SIZE_g3, IMAGE_OPTION_ROM_PXE},
  { FLASH_FCoE_BIOS_START_g3, OPTYPE_FCOE_BIOS,
   FLASH_BIOS_IMAGE_MAX_SIZE_g3, IMAGE_OPTION_ROM_FCoE},
  { FLASH_iSCSI_BACKUP_IMAGE_START_g3, OPTYPE_ISCSI_BACKUP,
   FLASH_IMAGE_MAX_SIZE_g3, IMAGE_FIRMWARE_BACKUP_iSCSI},
  { FLASH_FCoE_PRIMARY_IMAGE_START_g3, OPTYPE_FCOE_FW_ACTIVE,
   FLASH_IMAGE_MAX_SIZE_g3, IMAGE_FIRMWARE_FCoE},
  { FLASH_FCoE_BACKUP_IMAGE_START_g3, OPTYPE_FCOE_FW_BACKUP,
   FLASH_IMAGE_MAX_SIZE_g3, IMAGE_FIRMWARE_BACKUP_FCoE},
  { FLASH_NCSI_START_g3, OPTYPE_NCSI_FW,
   FLASH_NCSI_IMAGE_MAX_SIZE_g3, IMAGE_NCSI},
  { FLASH_PHY_FW_START_g3, OPTYPE_PHY_FW,
   FLASH_PHY_FW_IMAGE_MAX_SIZE_g3, IMAGE_FIRMWARE_PHY}
 };

 struct flash_comp gen2_flash_types[] = {
  { FLASH_iSCSI_PRIMARY_IMAGE_START_g2, OPTYPE_ISCSI_ACTIVE,
   FLASH_IMAGE_MAX_SIZE_g2, IMAGE_FIRMWARE_iSCSI},
  { FLASH_REDBOOT_START_g2, OPTYPE_REDBOOT,
   FLASH_REDBOOT_IMAGE_MAX_SIZE_g2, IMAGE_BOOT_CODE},
  { FLASH_iSCSI_BIOS_START_g2, OPTYPE_BIOS,
   FLASH_BIOS_IMAGE_MAX_SIZE_g2, IMAGE_OPTION_ROM_ISCSI},
  { FLASH_PXE_BIOS_START_g2, OPTYPE_PXE_BIOS,
   FLASH_BIOS_IMAGE_MAX_SIZE_g2, IMAGE_OPTION_ROM_PXE},
  { FLASH_FCoE_BIOS_START_g2, OPTYPE_FCOE_BIOS,
   FLASH_BIOS_IMAGE_MAX_SIZE_g2, IMAGE_OPTION_ROM_FCoE},
  { FLASH_iSCSI_BACKUP_IMAGE_START_g2, OPTYPE_ISCSI_BACKUP,
   FLASH_IMAGE_MAX_SIZE_g2, IMAGE_FIRMWARE_BACKUP_iSCSI},
  { FLASH_FCoE_PRIMARY_IMAGE_START_g2, OPTYPE_FCOE_FW_ACTIVE,
   FLASH_IMAGE_MAX_SIZE_g2, IMAGE_FIRMWARE_FCoE},
  { FLASH_FCoE_BACKUP_IMAGE_START_g2, OPTYPE_FCOE_FW_BACKUP,
    FLASH_IMAGE_MAX_SIZE_g2, IMAGE_FIRMWARE_BACKUP_FCoE}
 };

 if (BE3_chip(adapter)) {
  pflashcomp = gen3_flash_types;
  filehdr_size = sizeof(struct flash_file_hdr_g3);
  num_comp = ARRAY_SIZE(gen3_flash_types);
 } else {
  pflashcomp = gen2_flash_types;
  filehdr_size = sizeof(struct flash_file_hdr_g2);
  num_comp = ARRAY_SIZE(gen2_flash_types);
 }


 fsec = get_fsec_info(adapter, filehdr_size + img_hdrs_size, fw);
 if (!fsec) {
  dev_err(&adapter->pdev->dev,
   "Invalid Cookie. UFI corrupted ?\n");
  return -1;
 }
 for (i = 0; i < num_comp; i++) {
  if (!is_comp_in_ufi(adapter, fsec, pflashcomp[i].img_type))
   continue;

  if ((pflashcomp[i].optype == OPTYPE_NCSI_FW) &&
      memcmp(adapter->fw_ver, "3.102.148.0", 11) < 0)
   continue;

  if (pflashcomp[i].optype == OPTYPE_PHY_FW &&
      !phy_flashing_required(adapter))
    continue;

  if (pflashcomp[i].optype == OPTYPE_REDBOOT) {
   redboot = be_flash_redboot(adapter, fw->data,
    pflashcomp[i].offset, pflashcomp[i].size,
    filehdr_size + img_hdrs_size);
   if (!redboot)
    continue;
  }

  p = fw->data;
  p += filehdr_size + pflashcomp[i].offset + img_hdrs_size;
  if (p + pflashcomp[i].size > fw->data + fw->size)
   return -1;

  status = be_flash(adapter, p, flash_cmd, pflashcomp[i].optype,
     pflashcomp[i].size);
  if (status) {
   dev_err(&adapter->pdev->dev,
    "Flashing section type %d failed.\n",
    pflashcomp[i].img_type);
   return status;
  }
 }
 return 0;
}
