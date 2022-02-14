
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int flags; } ;
struct radeon_crtc {int enabled; scalar_t__ crtc_id; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;






 int VAR_0 ;
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
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct drm_device*,scalar_t__) ;
 int FUNC_2 (struct drm_device*,scalar_t__) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct radeon_device*) ;
 struct radeon_crtc* FUNC_5 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_15, int VAR_16)
{
 struct radeon_crtc *VAR_17 = FUNC_5(VAR_15);
 struct drm_device *VAR_18 = VAR_15->dev;
 struct radeon_device *VAR_19 = VAR_18->dev_private;
 uint32_t VAR_20 = 0;
 uint32_t VAR_21;

 if (VAR_17->crtc_id)
  VAR_21 = (VAR_0 |
   VAR_5 |
   VAR_4 |
   VAR_1);
 else
  VAR_21 = (VAR_7 |
   VAR_13 |
   VAR_12);
 if (VAR_19->flags & VAR_14)
  VAR_20 = VAR_6;

 switch (VAR_16) {
 case 130:
  VAR_17->enabled = 1;

  FUNC_4(VAR_19);
  if (VAR_17->crtc_id)
   FUNC_0(VAR_3, VAR_2, ~(VAR_2 | VAR_21));
  else {
   FUNC_0(VAR_11, VAR_9, ~(VAR_9 |
          VAR_8));
   FUNC_0(VAR_10, VAR_20, ~(VAR_21 | VAR_20));
  }
  FUNC_1(VAR_18, VAR_17->crtc_id);
  FUNC_3(VAR_15);
  break;
 case 129:
 case 128:
 case 131:
  FUNC_2(VAR_18, VAR_17->crtc_id);
  if (VAR_17->crtc_id)
   FUNC_0(VAR_3, VAR_21, ~(VAR_2 | VAR_21));
  else {
   FUNC_0(VAR_11, VAR_8, ~(VAR_9 |
              VAR_8));
   FUNC_0(VAR_10, VAR_21, ~(VAR_21 | VAR_20));
  }
  VAR_17->enabled = 0;

  FUNC_4(VAR_19);
  break;
 }
}
