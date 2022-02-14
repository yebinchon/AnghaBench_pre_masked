
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_encoder_atom_dig {int linkb; } ;
struct radeon_encoder {scalar_t__ encoder_id; struct radeon_encoder_atom_dig* enc_priv; } ;
struct TYPE_2__ {scalar_t__ dp_extclk; } ;
struct radeon_device {TYPE_1__ clock; } ;
struct radeon_crtc {int crtc_id; int encoder; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;
 scalar_t__ FUNC_3 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct drm_crtc*) ;
 int FUNC_8 (struct drm_crtc*) ;
 int FUNC_9 (struct drm_crtc*) ;
 struct radeon_crtc* FUNC_10 (struct drm_crtc*) ;
 struct radeon_encoder* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct drm_crtc *VAR_6)
{
 struct radeon_crtc *VAR_7 = FUNC_10(VAR_6);
 struct drm_device *VAR_8 = VAR_6->dev;
 struct radeon_device *VAR_9 = VAR_8->dev_private;
 struct radeon_encoder *VAR_10 =
  FUNC_11(VAR_7->encoder);
 u32 VAR_11;
 int VAR_12;

 if (FUNC_3(VAR_9)) {
  struct radeon_encoder_atom_dig *VAR_13 =
   VAR_10->enc_priv;

  if ((VAR_10->encoder_id == VAR_5) &&
      (VAR_13->linkb == 0))

   return VAR_3;
  else if (FUNC_5(FUNC_6(VAR_7->encoder))) {

   if (VAR_9->clock.dp_extclk)

    return VAR_4;
   else {

    VAR_12 = FUNC_8(VAR_6);
    if (VAR_12 != VAR_4)
     return VAR_12;
   }
  } else {

   VAR_12 = FUNC_9(VAR_6);
   if (VAR_12 != VAR_4)
    return VAR_12;
  }

  VAR_11 = FUNC_7(VAR_6);
  if (!(VAR_11 & (1 << VAR_1)))
   return VAR_1;
  if (!(VAR_11 & (1 << VAR_2)))
   return VAR_2;
  FUNC_4("unable to allocate a PPLL\n");
  return VAR_4;
 } else if (FUNC_0(VAR_9)) {
  if (FUNC_5(FUNC_6(VAR_7->encoder))) {
   if (VAR_9->clock.dp_extclk)

    return VAR_4;
   else if (FUNC_2(VAR_9))

    return VAR_1;
   else if (FUNC_1(VAR_9))

    return VAR_0;
   else {

    VAR_12 = FUNC_8(VAR_6);
    if (VAR_12 != VAR_4)
     return VAR_12;
   }
  } else {

   VAR_12 = FUNC_9(VAR_6);
   if (VAR_12 != VAR_4)
    return VAR_12;
  }

  VAR_11 = FUNC_7(VAR_6);
  if (!(VAR_11 & (1 << VAR_2)))
   return VAR_2;
  if (!(VAR_11 & (1 << VAR_3)))
   return VAR_3;
  FUNC_4("unable to allocate a PPLL\n");
  return VAR_4;
 } else {
  return VAR_7->crtc_id;
 }
}
