
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int lvds_ssc_freq; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_crtc*,int ) ;
 int FUNC_5 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_6(struct drm_crtc *VAR_1, int VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->dev;
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;
 int VAR_5;

 if (FUNC_2(VAR_3)) {
  VAR_5 = FUNC_5(VAR_1);
 } else if (FUNC_4(VAR_1, VAR_0) &&
     FUNC_3(VAR_4) && VAR_2 < 2) {
  VAR_5 = VAR_4->lvds_ssc_freq * 1000;
  FUNC_0("using SSC reference clock of %d MHz\n",
         VAR_5 / 1000);
 } else if (!FUNC_1(VAR_3)) {
  VAR_5 = 96000;
 } else {
  VAR_5 = 48000;
 }

 return VAR_5;
}
