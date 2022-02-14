
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {int enable; struct qlcnic_dump_template_hdr* tmpl_hdr; } ;
struct qlcnic_hardware_context {TYPE_2__ fw_dump; } ;
struct qlcnic_dump_template_hdr {int drv_cap_mask; } ;
struct qlcnic_adapter {TYPE_1__* pdev; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qlcnic_adapter*,scalar_t__*,scalar_t__) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct qlcnic_adapter*,scalar_t__*,scalar_t__) ;
 int FUNC_3 (struct qlcnic_adapter*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (struct qlcnic_dump_template_hdr*) ;
 struct qlcnic_dump_template_hdr* FUNC_6 (scalar_t__) ;

int FUNC_7(struct qlcnic_adapter *VAR_3)
{
 int VAR_4;
 u32 VAR_5 = 0;
 u32 VAR_6, VAR_7, *VAR_8;
 struct qlcnic_hardware_context *VAR_9;
 struct qlcnic_dump_template_hdr *VAR_10;
 u8 VAR_11 = 0;

 VAR_9 = VAR_3->ahw;

 VAR_4 = FUNC_3(VAR_3, &VAR_6, &VAR_5,
            &VAR_11);
 if (VAR_4) {
  FUNC_1(&VAR_3->pdev->dev,
   "Can't get template size %d\n", VAR_4);
  return -VAR_0;
 }

 VAR_9->fw_dump.tmpl_hdr = FUNC_6(VAR_5);
 if (!VAR_9->fw_dump.tmpl_hdr)
  return -VAR_1;

 VAR_8 = (u32 *)VAR_9->fw_dump.tmpl_hdr;
 if (VAR_11)
  goto flash_temp;

 VAR_4 = FUNC_0(VAR_3, VAR_8, VAR_5);

 if (VAR_4) {
flash_temp:
  VAR_4 = FUNC_2(VAR_3, (u8 *)VAR_8,
       VAR_5);

  if (VAR_4) {
   FUNC_1(&VAR_3->pdev->dev,
    "Failed to get minidump template header %d\n",
    VAR_4);
   FUNC_5(VAR_9->fw_dump.tmpl_hdr);
   VAR_9->fw_dump.tmpl_hdr = ((void*)0);
   return -VAR_0;
  }
 }

 VAR_7 = FUNC_4((uint32_t *)VAR_8, VAR_5);

 if (VAR_7) {
  FUNC_1(&VAR_3->pdev->dev,
   "Template header checksum validation failed\n");
  FUNC_5(VAR_9->fw_dump.tmpl_hdr);
  VAR_9->fw_dump.tmpl_hdr = ((void*)0);
  return -VAR_0;
 }

 VAR_10 = VAR_9->fw_dump.tmpl_hdr;
 VAR_10->drv_cap_mask = VAR_2;
 VAR_9->fw_dump.enable = 1;

 return 0;
}
