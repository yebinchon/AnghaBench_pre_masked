
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int aper_base; } ;
struct TYPE_8__ {int mode_config_initialized; } ;
struct radeon_device {int num_crtc; TYPE_4__* ddev; scalar_t__ is_atom_bios; TYPE_3__ mc; TYPE_1__ mode_info; } ;
struct TYPE_9__ {int max_width; int max_height; int preferred_depth; int prefer_shadow; int fb_base; int * funcs; } ;
struct TYPE_11__ {TYPE_2__ mode_config; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;
 int VAR_0 ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (TYPE_4__*) ;

int FUNC_15(struct radeon_device *VAR_1)
{
 int VAR_2;
 int VAR_3;

 FUNC_3(VAR_1->ddev);
 VAR_1->mode_info.mode_config_initialized = 1;

 VAR_1->ddev->mode_config.funcs = &VAR_0;

 if (FUNC_1(VAR_1)) {
  VAR_1->ddev->mode_config.max_width = 16384;
  VAR_1->ddev->mode_config.max_height = 16384;
 } else if (FUNC_0(VAR_1)) {
  VAR_1->ddev->mode_config.max_width = 8192;
  VAR_1->ddev->mode_config.max_height = 8192;
 } else {
  VAR_1->ddev->mode_config.max_width = 4096;
  VAR_1->ddev->mode_config.max_height = 4096;
 }

 VAR_1->ddev->mode_config.preferred_depth = 24;
 VAR_1->ddev->mode_config.prefer_shadow = 1;

 VAR_1->ddev->mode_config.fb_base = VAR_1->mc.aper_base;

 VAR_3 = FUNC_12(VAR_1);
 if (VAR_3) {
  return VAR_3;
 }


 FUNC_11(VAR_1);


 if (!VAR_1->is_atom_bios) {

  FUNC_7(VAR_1);
 }


 for (VAR_2 = 0; VAR_2 < VAR_1->num_crtc; VAR_2++) {
  FUNC_8(VAR_1->ddev, VAR_2);
 }


 VAR_3 = FUNC_14(VAR_1->ddev);
 if (!VAR_3) {
  return VAR_3;
 }


 if (VAR_1->is_atom_bios) {
  FUNC_6(VAR_1);
  FUNC_5(VAR_1);
 }


 FUNC_10(VAR_1);


 FUNC_4(VAR_1);


 FUNC_13(VAR_1);

 FUNC_9(VAR_1);
 FUNC_2(VAR_1->ddev);

 return 0;
}
