
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* underscan_vborder_property; void* underscan_hborder_property; void* underscan_property; void* tv_std_property; void* load_detect_property; void* tmds_pll_property; void* coherent_mode_property; } ;
struct radeon_device {TYPE_1__ mode_info; int ddev; scalar_t__ is_atom_bios; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct radeon_device*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ,int ,char*,int ,int) ;
 void* FUNC_4 (int ,int ,char*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct radeon_device *VAR_4)
{
 int VAR_5;

 if (VAR_4->is_atom_bios) {
  VAR_4->mode_info.coherent_mode_property =
   FUNC_4(VAR_4->ddev, 0 , "coherent", 0, 1);
  if (!VAR_4->mode_info.coherent_mode_property)
   return -VAR_0;
 }

 if (!FUNC_1(VAR_4)) {
  VAR_5 = FUNC_0(VAR_1);
  VAR_4->mode_info.tmds_pll_property =
   FUNC_3(VAR_4->ddev, 0,
         "tmds_pll",
         VAR_1, VAR_5);
 }

 VAR_4->mode_info.load_detect_property =
  FUNC_4(VAR_4->ddev, 0, "load detection", 0, 1);
 if (!VAR_4->mode_info.load_detect_property)
  return -VAR_0;

 FUNC_2(VAR_4->ddev);

 VAR_5 = FUNC_0(VAR_2);
 VAR_4->mode_info.tv_std_property =
  FUNC_3(VAR_4->ddev, 0,
        "tv standard",
        VAR_2, VAR_5);

 VAR_5 = FUNC_0(VAR_3);
 VAR_4->mode_info.underscan_property =
  FUNC_3(VAR_4->ddev, 0,
        "underscan",
        VAR_3, VAR_5);

 VAR_4->mode_info.underscan_hborder_property =
  FUNC_4(VAR_4->ddev, 0,
     "underscan hborder", 0, 128);
 if (!VAR_4->mode_info.underscan_hborder_property)
  return -VAR_0;

 VAR_4->mode_info.underscan_vborder_property =
  FUNC_4(VAR_4->ddev, 0,
     "underscan vborder", 0, 128);
 if (!VAR_4->mode_info.underscan_vborder_property)
  return -VAR_0;

 return 0;
}
