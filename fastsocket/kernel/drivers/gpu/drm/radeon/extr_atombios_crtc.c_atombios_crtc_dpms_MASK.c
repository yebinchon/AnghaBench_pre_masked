
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct radeon_crtc {int enabled; int crtc_id; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;




 int FUNC_2 (struct drm_crtc*,int ) ;
 int FUNC_3 (struct drm_crtc*,int ) ;
 int FUNC_4 (struct drm_crtc*,int ) ;
 int FUNC_5 (struct drm_device*,int ) ;
 int FUNC_6 (struct drm_device*,int ) ;
 int FUNC_7 (struct drm_crtc*) ;
 int FUNC_8 (struct radeon_device*) ;
 struct radeon_crtc* FUNC_9 (struct drm_crtc*) ;

void FUNC_10(struct drm_crtc *VAR_2, int VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 struct radeon_device *VAR_5 = VAR_4->dev_private;
 struct radeon_crtc *VAR_6 = FUNC_9(VAR_2);

 switch (VAR_3) {
 case 130:
  VAR_6->enabled = 1;

  FUNC_8(VAR_5);
  FUNC_3(VAR_2, VAR_1);
  if (FUNC_0(VAR_5) && !FUNC_1(VAR_5))
   FUNC_4(VAR_2, VAR_1);
  FUNC_2(VAR_2, VAR_0);
  FUNC_5(VAR_4, VAR_6->crtc_id);
  FUNC_7(VAR_2);
  break;
 case 129:
 case 128:
 case 131:
  FUNC_6(VAR_4, VAR_6->crtc_id);
  if (VAR_6->enabled)
   FUNC_2(VAR_2, VAR_1);
  if (FUNC_0(VAR_5) && !FUNC_1(VAR_5))
   FUNC_4(VAR_2, VAR_0);
  FUNC_3(VAR_2, VAR_0);
  VAR_6->enabled = 0;

  FUNC_8(VAR_5);
  break;
 }
}
