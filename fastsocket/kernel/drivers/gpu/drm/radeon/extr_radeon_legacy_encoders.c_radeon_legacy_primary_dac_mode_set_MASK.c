
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_encoder_primary_dac {int ps2_pdac_adj; } ;
struct radeon_encoder {scalar_t__ enc_priv; } ;
struct radeon_device {scalar_t__ family; scalar_t__ is_atom_bios; } ;
struct radeon_crtc {scalar_t__ crtc_id; } ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
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
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (struct drm_encoder*,scalar_t__) ;
 int FUNC_6 (struct drm_encoder*,scalar_t__) ;
 struct radeon_crtc* FUNC_7 (int ) ;
 struct radeon_encoder* FUNC_8 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_9(struct drm_encoder *VAR_16,
            struct drm_display_mode *VAR_17,
            struct drm_display_mode *VAR_18)
{
 struct drm_device *VAR_19 = VAR_16->dev;
 struct radeon_device *VAR_20 = VAR_19->dev_private;
 struct radeon_crtc *VAR_21 = FUNC_7(VAR_16->crtc);
 struct radeon_encoder *VAR_22 = FUNC_8(VAR_16);
 uint32_t VAR_23, VAR_24, VAR_25, VAR_26;

 FUNC_1("\n");

 if (VAR_21->crtc_id == 0) {
  if (VAR_20->family == VAR_0 || FUNC_0(VAR_20)) {
   VAR_23 = FUNC_2(VAR_15) &
    ~(VAR_14);
   FUNC_3(VAR_15, VAR_23);
  } else {
   VAR_25 = FUNC_2(VAR_5) & ~(VAR_1);
   FUNC_3(VAR_5, VAR_25);
  }
 } else {
  if (VAR_20->family == VAR_0 || FUNC_0(VAR_20)) {
   VAR_23 = FUNC_2(VAR_15) &
    ~(VAR_14);
   VAR_23 |= VAR_13;
   FUNC_3(VAR_15, VAR_23);
  } else {
   VAR_25 = FUNC_2(VAR_5) | VAR_1;
   FUNC_3(VAR_5, VAR_25);
  }
 }

 VAR_24 = (VAR_7 |
      VAR_12 |

      VAR_2);

 FUNC_4(VAR_4,
         VAR_24,
         VAR_11 |
         VAR_3);

 if (VAR_22->enc_priv) {
  struct radeon_encoder_primary_dac *VAR_27 = (struct radeon_encoder_primary_dac *)VAR_22->enc_priv;
  VAR_26 = VAR_27->ps2_pdac_adj;
 } else
  VAR_26 = FUNC_2(VAR_6);
 VAR_26 |= VAR_10 | VAR_9 | VAR_8;
 FUNC_3(VAR_6, VAR_26);

 if (VAR_20->is_atom_bios)
  FUNC_5(VAR_16, VAR_21->crtc_id);
 else
  FUNC_6(VAR_16, VAR_21->crtc_id);
}
