
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_encoder_lvds {int lvds_gen_cntl; int panel_digon_delay; int panel_blon_delay; } ;
struct radeon_encoder {scalar_t__ rmx_type; scalar_t__ enc_priv; int pixel_clock; } ;
struct radeon_device {scalar_t__ family; scalar_t__ is_atom_bios; } ;
struct radeon_crtc {scalar_t__ crtc_id; } ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_display_mode {int clock; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct drm_encoder*,int ) ;
 int FUNC_5 (struct drm_encoder*,scalar_t__) ;
 int FUNC_6 (struct drm_encoder*,scalar_t__) ;
 struct radeon_crtc* FUNC_7 (int ) ;
 struct radeon_encoder* FUNC_8 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_9(struct drm_encoder *VAR_19,
     struct drm_display_mode *VAR_20,
     struct drm_display_mode *VAR_21)
{
 struct drm_device *VAR_22 = VAR_19->dev;
 struct radeon_device *VAR_23 = VAR_22->dev_private;
 struct radeon_crtc *VAR_24 = FUNC_7(VAR_19->crtc);
 struct radeon_encoder *VAR_25 = FUNC_8(VAR_19);
 uint32_t VAR_26, VAR_27, VAR_28;

 FUNC_1("\n");

 VAR_26 = FUNC_2(VAR_11);
 VAR_26 &= ~VAR_12;

 VAR_28 = FUNC_2(VAR_17);
 if (VAR_23->is_atom_bios) {



  VAR_25->pixel_clock = VAR_21->clock;
  FUNC_4(VAR_19, VAR_1);
  VAR_27 = FUNC_2(VAR_9);
 } else {
  struct radeon_encoder_lvds *VAR_29 = (struct radeon_encoder_lvds *)VAR_25->enc_priv;
  if (VAR_29) {
   FUNC_1("bios LVDS_GEN_CNTL: 0x%x\n", VAR_29->lvds_gen_cntl);
   VAR_27 = VAR_29->lvds_gen_cntl;
   VAR_28 &= ~((0xf << VAR_13) |
           (0xf << VAR_14));
   VAR_28 |= ((VAR_29->panel_digon_delay << VAR_13) |
          (VAR_29->panel_blon_delay << VAR_14));
  } else
   VAR_27 = FUNC_2(VAR_9);
 }
 VAR_27 |= VAR_7;
 VAR_27 &= ~(VAR_10 |
      VAR_6 |
      VAR_8 |
      VAR_15);

 if (FUNC_0(VAR_23))
  VAR_26 &= ~(VAR_3);

 if (VAR_24->crtc_id == 0) {
  if (FUNC_0(VAR_23)) {
   if (VAR_25->rmx_type != VAR_18)
    VAR_26 |= VAR_4;
  } else
   VAR_27 &= ~VAR_16;
 } else {
  if (FUNC_0(VAR_23))
   VAR_26 |= VAR_2;
  else
   VAR_27 |= VAR_16;
 }

 FUNC_3(VAR_9, VAR_27);
 FUNC_3(VAR_11, VAR_26);
 FUNC_3(VAR_17, VAR_28);

 if (VAR_23->family == VAR_0)
  FUNC_3(VAR_5, 0);

 if (VAR_23->is_atom_bios)
  FUNC_5(VAR_19, VAR_24->crtc_id);
 else
  FUNC_6(VAR_19, VAR_24->crtc_id);
}
