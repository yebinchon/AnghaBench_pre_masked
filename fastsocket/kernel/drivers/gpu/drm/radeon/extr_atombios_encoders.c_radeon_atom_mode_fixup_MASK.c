
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder_atom_dac {scalar_t__ tv_std; } ;
struct radeon_encoder {int active_device; struct radeon_encoder_atom_dac* enc_priv; } ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_display_mode {int flags; scalar_t__ crtc_vsync_start; scalar_t__ crtc_vdisplay; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int dummy; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct drm_display_mode*,int ) ;
 int FUNC_2 (struct radeon_device*,int,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_connector*,struct drm_display_mode*) ;
 scalar_t__ FUNC_4 (struct drm_encoder*) ;
 int FUNC_5 (struct drm_encoder*) ;
 struct drm_connector* FUNC_6 (struct drm_encoder*) ;
 int FUNC_7 (struct drm_encoder*,struct drm_display_mode*) ;
 struct radeon_encoder* FUNC_8 (struct drm_encoder*) ;

__attribute__((used)) static bool FUNC_9(struct drm_encoder *VAR_8,
       const struct drm_display_mode *VAR_9,
       struct drm_display_mode *VAR_10)
{
 struct radeon_encoder *VAR_11 = FUNC_8(VAR_8);
 struct drm_device *VAR_12 = VAR_8->dev;
 struct radeon_device *VAR_13 = VAR_12->dev_private;


 FUNC_5(VAR_8);
 FUNC_1(VAR_10, 0);


 if ((VAR_9->flags & VAR_3)
     && (VAR_9->crtc_vsync_start < (VAR_9->crtc_vdisplay + 2)))
  VAR_10->crtc_vsync_start = VAR_10->crtc_vdisplay + 2;


 if (VAR_11->active_device & (VAR_1))
  FUNC_7(VAR_8, VAR_10);


 if (VAR_11->active_device & (VAR_2)) {
  struct radeon_encoder_atom_dac *VAR_14 = VAR_11->enc_priv;
  if (VAR_14) {
   if (VAR_14->tv_std == VAR_5 ||
       VAR_14->tv_std == VAR_6 ||
       VAR_14->tv_std == VAR_7)
    FUNC_2(VAR_13, 0, VAR_10);
   else
    FUNC_2(VAR_13, 1, VAR_10);
  }
 }

 if (FUNC_0(VAR_13) &&
     ((VAR_11->active_device & (VAR_0 | VAR_1)) ||
      (FUNC_4(VAR_8) != VAR_4))) {
  struct drm_connector *VAR_15 = FUNC_6(VAR_8);
  FUNC_3(VAR_15, VAR_10);
 }

 return 1;
}
