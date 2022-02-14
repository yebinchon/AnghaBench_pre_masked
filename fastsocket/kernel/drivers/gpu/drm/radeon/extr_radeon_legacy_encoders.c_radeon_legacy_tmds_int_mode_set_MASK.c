
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_encoder_int_tmds {TYPE_1__* tmds_pll; } ;
struct radeon_encoder {scalar_t__ rmx_type; scalar_t__ enc_priv; } ;
struct radeon_device {scalar_t__ family; scalar_t__ is_atom_bios; } ;
struct radeon_crtc {scalar_t__ crtc_id; } ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_display_mode {int clock; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_2__ {scalar_t__ freq; int value; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct drm_encoder*,scalar_t__) ;
 int FUNC_5 (struct drm_encoder*,scalar_t__) ;
 struct radeon_crtc* FUNC_6 (int ) ;
 struct radeon_encoder* FUNC_7 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_8(struct drm_encoder *VAR_26,
         struct drm_display_mode *VAR_27,
         struct drm_display_mode *VAR_28)
{
 struct drm_device *VAR_29 = VAR_26->dev;
 struct radeon_device *VAR_30 = VAR_29->dev_private;
 struct radeon_crtc *VAR_31 = FUNC_6(VAR_26->crtc);
 struct radeon_encoder *VAR_32 = FUNC_7(VAR_26);
 uint32_t VAR_33, VAR_34, VAR_35, VAR_36;
 int VAR_37;

 FUNC_1("\n");

 VAR_33 = VAR_34 = FUNC_2(VAR_21);
 VAR_33 &= 0xfffff;
 if (VAR_30->family == VAR_2) {

  VAR_33 ^= (1 << 22);
  VAR_34 ^= (1 << 22);
 }

 if (VAR_32->enc_priv) {
  struct radeon_encoder_int_tmds *VAR_38 = (struct radeon_encoder_int_tmds *)VAR_32->enc_priv;

  for (VAR_37 = 0; VAR_37 < 4; VAR_37++) {
   if (VAR_38->tmds_pll[VAR_37].freq == 0)
    break;
   if ((uint32_t)(VAR_27->clock / 10) < VAR_38->tmds_pll[VAR_37].freq) {
    VAR_33 = VAR_38->tmds_pll[VAR_37].value ;
    break;
   }
  }
 }

 if (FUNC_0(VAR_30) || (VAR_30->family == VAR_2)) {
  if (VAR_33 & 0xfff00000)
   VAR_34 = VAR_33;
  else {
   VAR_34 &= 0xfff00000;
   VAR_34 |= VAR_33;
  }
 } else
  VAR_34 = VAR_33;

 VAR_35 = FUNC_2(VAR_22) &
  ~(VAR_24);

    if (VAR_30->family == VAR_1 ||
 VAR_30->family == VAR_0 ||
 FUNC_0(VAR_30))
     VAR_35 &= ~(VAR_23);
    else
     VAR_35 |= VAR_23;

    VAR_36 = (FUNC_2(VAR_15) |
     (VAR_8 |
      VAR_7));

    VAR_36 &= ~(VAR_14 | VAR_19);

    VAR_36 &= ~(VAR_17 |
       VAR_13 |
       VAR_12 |
       VAR_9 |
       VAR_20 |
       VAR_10 |
       VAR_11);

    if (1)
     VAR_36 |= VAR_16;
    else
     VAR_36 &= ~VAR_16;

    if (VAR_31->crtc_id == 0) {
     if (FUNC_0(VAR_30) || VAR_30->family == VAR_1) {
      VAR_36 &= ~VAR_5;
      if (VAR_32->rmx_type != VAR_25)
       VAR_36 |= VAR_6;
      else
       VAR_36 |= VAR_3;
     } else
      VAR_36 &= ~VAR_18;
    } else {
     if (FUNC_0(VAR_30) || VAR_30->family == VAR_1) {
      VAR_36 &= ~VAR_5;
      VAR_36 |= VAR_4;
     } else
      VAR_36 |= VAR_18;
    }

    FUNC_3(VAR_21, VAR_34);
    FUNC_3(VAR_22, VAR_35);
    FUNC_3(VAR_15, VAR_36);

 if (VAR_30->is_atom_bios)
  FUNC_4(VAR_26, VAR_31->crtc_id);
 else
  FUNC_5(VAR_26, VAR_31->crtc_id);
}
