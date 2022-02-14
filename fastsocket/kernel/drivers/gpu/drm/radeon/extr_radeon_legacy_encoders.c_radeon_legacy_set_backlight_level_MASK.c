
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct radeon_encoder_lvds {scalar_t__ backlight_level; int dpms_mode; } ;
struct radeon_encoder_atom_dig {scalar_t__ backlight_level; int dpms_mode; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct radeon_encoder {TYPE_1__ base; struct radeon_encoder_lvds* enc_priv; } ;
struct radeon_device {scalar_t__ is_atom_bios; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;

void
FUNC_1(struct radeon_encoder *VAR_2, u8 VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->base.dev;
 struct radeon_device *VAR_5 = VAR_4->dev_private;
 int VAR_6 = VAR_1;

 if (VAR_2->enc_priv) {
  if (VAR_5->is_atom_bios) {
   struct radeon_encoder_atom_dig *VAR_7 = VAR_2->enc_priv;
   if (VAR_7->backlight_level > 0)
    VAR_6 = VAR_7->dpms_mode;
   else
    VAR_6 = VAR_0;
   VAR_7->backlight_level = VAR_3;
  } else {
   struct radeon_encoder_lvds *VAR_8 = VAR_2->enc_priv;
   if (VAR_8->backlight_level > 0)
    VAR_6 = VAR_8->dpms_mode;
   else
    VAR_6 = VAR_0;
   VAR_8->backlight_level = VAR_3;
  }
 }

 FUNC_0(&VAR_2->base, VAR_6);
}
