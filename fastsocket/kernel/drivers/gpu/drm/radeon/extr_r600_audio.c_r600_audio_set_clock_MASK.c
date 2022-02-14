
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder_atom_dig {int dig_encoder; } ;
struct radeon_encoder {int encoder_id; struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_device {int dev; } ;
struct radeon_crtc {int crtc_id; } ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,char*,int) ;
 struct radeon_crtc* FUNC_4 (int ) ;
 struct radeon_encoder* FUNC_5 (struct drm_encoder*) ;

void FUNC_6(struct drm_encoder *VAR_9, int VAR_10)
{
 struct drm_device *VAR_11 = VAR_9->dev;
 struct radeon_device *VAR_12 = VAR_11->dev_private;
 struct radeon_encoder *VAR_13 = FUNC_5(VAR_9);
 struct radeon_encoder_atom_dig *VAR_14 = VAR_13->enc_priv;
 struct radeon_crtc *VAR_15 = FUNC_4(VAR_9->crtc);
 int VAR_16 = 48000;

 switch (VAR_13->encoder_id) {
 case 132:
 case 131:
  FUNC_2(VAR_8, 0, ~0x301);
  break;
 case 130:
 case 129:
 case 128:
 case 133:
  FUNC_2(VAR_8, 0x100, ~0x301);
  break;
 default:
  FUNC_3(VAR_12->dev, "Unsupported encoder type 0x%02X\n",
     VAR_13->encoder_id);
  return;
 }

 if (FUNC_0(VAR_12)) {

  FUNC_1(VAR_1, VAR_16 * 10);
  FUNC_1(VAR_0, VAR_10 * 10);
  FUNC_1(VAR_2, 0x00000071);


  FUNC_1(0x5ac, VAR_15->crtc_id);
 } else {
  switch (VAR_14->dig_encoder) {
  case 0:
   FUNC_1(VAR_5, VAR_16 * 50);
   FUNC_1(VAR_4, VAR_10 * 100);
   FUNC_1(VAR_3, 0);
   break;

  case 1:
   FUNC_1(VAR_7, VAR_16 * 50);
   FUNC_1(VAR_6, VAR_10 * 100);
   FUNC_1(VAR_3, 1);
   break;
  default:
   FUNC_3(VAR_12->dev,
    "Unsupported DIG on encoder 0x%02X\n",
    VAR_13->encoder_id);
   return;
  }
 }
}
