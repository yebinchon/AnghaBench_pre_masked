
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder_atom_dig {int lcd_ss_id; } ;
struct radeon_encoder {int active_device; struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {int bpc; int ss_enabled; int adjusted_clock; int ss; int encoder; } ;
struct radeon_connector_atom_dig {int dp_clock; } ;
struct radeon_connector {struct radeon_connector_atom_dig* con_priv; } ;
struct drm_display_mode {int clock; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct radeon_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 scalar_t__ VAR_7 ;
 int FUNC_1 (struct drm_crtc*,struct drm_display_mode*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (struct radeon_device*,int *,int ,int) ;
 void* FUNC_4 (struct radeon_device*,int *,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 struct drm_connector* FUNC_6 (int ) ;
 int FUNC_7 (struct drm_connector*) ;
 struct radeon_connector* FUNC_8 (struct drm_connector*) ;
 struct radeon_crtc* FUNC_9 (struct drm_crtc*) ;
 struct radeon_encoder* FUNC_10 (int ) ;

__attribute__((used)) static bool FUNC_11(struct drm_crtc *VAR_8, struct drm_display_mode *VAR_9)
{
 struct radeon_crtc *VAR_10 = FUNC_9(VAR_8);
 struct drm_device *VAR_11 = VAR_8->dev;
 struct radeon_device *VAR_12 = VAR_11->dev_private;
 struct radeon_encoder *VAR_13 =
  FUNC_10(VAR_10->encoder);
 int VAR_14 = FUNC_2(VAR_10->encoder);

 VAR_10->bpc = 8;
 VAR_10->ss_enabled = 0;

 if ((VAR_13->active_device & (VAR_4 | VAR_3)) ||
     (FUNC_5(VAR_10->encoder) != VAR_7)) {
  struct radeon_encoder_atom_dig *VAR_15 = VAR_13->enc_priv;
  struct drm_connector *VAR_16 =
   FUNC_6(VAR_10->encoder);
  struct radeon_connector *VAR_17 =
   FUNC_8(VAR_16);
  struct radeon_connector_atom_dig *VAR_18 =
   VAR_17->con_priv;
  int VAR_19;
  VAR_10->bpc = FUNC_7(VAR_16);

  switch (VAR_14) {
  case 131:
  case 132:

   VAR_19 = VAR_18->dp_clock / 10;
   if (FUNC_0(VAR_12))
    VAR_10->ss_enabled =
     FUNC_3(VAR_12, &VAR_10->ss,
          VAR_0,
          VAR_19);
   else {
    if (VAR_19 == 16200) {
     VAR_10->ss_enabled =
      FUNC_4(VAR_12,
           &VAR_10->ss,
           VAR_6);
     if (!VAR_10->ss_enabled)
      VAR_10->ss_enabled =
       FUNC_4(VAR_12,
            &VAR_10->ss,
            VAR_5);
    } else
     VAR_10->ss_enabled =
      FUNC_4(VAR_12,
           &VAR_10->ss,
           VAR_5);
   }
   break;
  case 128:
   if (FUNC_0(VAR_12))
    VAR_10->ss_enabled =
     FUNC_3(VAR_12,
          &VAR_10->ss,
          VAR_15->lcd_ss_id,
          VAR_9->clock / 10);
   else
    VAR_10->ss_enabled =
     FUNC_4(VAR_12,
          &VAR_10->ss,
          VAR_15->lcd_ss_id);
   break;
  case 130:
   if (FUNC_0(VAR_12))
    VAR_10->ss_enabled =
     FUNC_3(VAR_12,
          &VAR_10->ss,
          VAR_2,
          VAR_9->clock / 10);
   break;
  case 129:
   if (FUNC_0(VAR_12))
    VAR_10->ss_enabled =
     FUNC_3(VAR_12,
          &VAR_10->ss,
          VAR_1,
          VAR_9->clock / 10);
   break;
  default:
   break;
  }
 }


 VAR_10->adjusted_clock = FUNC_1(VAR_8, VAR_9);

 return 1;
}
