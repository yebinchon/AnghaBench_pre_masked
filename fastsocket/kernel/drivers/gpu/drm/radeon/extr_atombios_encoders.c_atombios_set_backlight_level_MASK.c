
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u8 ;
struct radeon_encoder_atom_dig {int backlight_level; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct radeon_encoder {int devices; int encoder_id; struct radeon_encoder_atom_dig* enc_priv; struct drm_encoder base; } ;
struct TYPE_3__ {int firmware_flags; int atom_context; } ;
struct radeon_device {TYPE_1__ mode_info; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_4__ {int ucAction; } ;
typedef TYPE_2__ DISPLAY_DEVICE_OUTPUT_CONTROL_PS_ALLOCATION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;






 int FUNC_0 (int ,int ) ;
 int VAR_9 ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (struct drm_encoder*,int ,int ,int ) ;
 int FUNC_3 (struct radeon_device*,int ) ;

void
FUNC_4(struct radeon_encoder *VAR_10, u8 VAR_11)
{
 struct drm_encoder *VAR_12 = &VAR_10->base;
 struct drm_device *VAR_13 = VAR_10->base.dev;
 struct radeon_device *VAR_14 = VAR_13->dev_private;
 struct radeon_encoder_atom_dig *VAR_15;
 DISPLAY_DEVICE_OUTPUT_CONTROL_PS_ALLOCATION VAR_16;
 int VAR_17;

 if (!(VAR_14->mode_info.firmware_flags & VAR_0))
  return;

 if ((VAR_10->devices & (VAR_1)) &&
     VAR_10->enc_priv) {
  VAR_15 = VAR_10->enc_priv;
  VAR_15->backlight_level = VAR_11;
  FUNC_3(VAR_14, VAR_15->backlight_level);

  switch (VAR_10->encoder_id) {
  case 132:
  case 131:
   VAR_17 = FUNC_0(VAR_8, VAR_9);
   if (VAR_15->backlight_level == 0) {
    VAR_16.ucAction = VAR_2;
    FUNC_1(VAR_14->mode_info.atom_context, VAR_17, (uint32_t *)&VAR_16);
   } else {
    VAR_16.ucAction = VAR_4;
    FUNC_1(VAR_14->mode_info.atom_context, VAR_17, (uint32_t *)&VAR_16);
    VAR_16.ucAction = VAR_3;
    FUNC_1(VAR_14->mode_info.atom_context, VAR_17, (uint32_t *)&VAR_16);
   }
   break;
  case 130:
  case 133:
  case 129:
  case 128:
   if (VAR_15->backlight_level == 0)
    FUNC_2(VAR_12, VAR_6, 0, 0);
   else {
    FUNC_2(VAR_12, VAR_5, 0, 0);
    FUNC_2(VAR_12, VAR_7, 0, 0);
   }
   break;
  default:
   break;
  }
 }
}
