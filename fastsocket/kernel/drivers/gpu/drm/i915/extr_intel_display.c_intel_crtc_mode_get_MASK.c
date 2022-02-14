
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc {int cpu_transcoder; } ;
struct drm_i915_private {int dummy; } ;
struct drm_display_mode {int hdisplay; int htotal; int hsync_start; int hsync_end; int vdisplay; int vtotal; int vsync_start; int vsync_end; int clock; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct drm_display_mode*) ;
 int FUNC_6 (struct drm_device*,struct drm_crtc*) ;
 struct drm_display_mode* FUNC_7 (int,int ) ;
 struct intel_crtc* FUNC_8 (struct drm_crtc*) ;

struct drm_display_mode *FUNC_9(struct drm_device *VAR_1,
          struct drm_crtc *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_1->dev_private;
 struct intel_crtc *VAR_4 = FUNC_8(VAR_2);
 enum transcoder VAR_5 = VAR_4->cpu_transcoder;
 struct drm_display_mode *VAR_6;
 int VAR_7 = FUNC_2(FUNC_1(VAR_5));
 int VAR_8 = FUNC_2(FUNC_0(VAR_5));
 int VAR_9 = FUNC_2(FUNC_4(VAR_5));
 int VAR_10 = FUNC_2(FUNC_3(VAR_5));

 VAR_6 = FUNC_7(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->clock = FUNC_6(VAR_1, VAR_2);
 VAR_6->hdisplay = (VAR_7 & 0xffff) + 1;
 VAR_6->htotal = ((VAR_7 & 0xffff0000) >> 16) + 1;
 VAR_6->hsync_start = (VAR_8 & 0xffff) + 1;
 VAR_6->hsync_end = ((VAR_8 & 0xffff0000) >> 16) + 1;
 VAR_6->vdisplay = (VAR_9 & 0xffff) + 1;
 VAR_6->vtotal = ((VAR_9 & 0xffff0000) >> 16) + 1;
 VAR_6->vsync_start = (VAR_10 & 0xffff) + 1;
 VAR_6->vsync_end = ((VAR_10 & 0xffff0000) >> 16) + 1;

 FUNC_5(VAR_6);

 return VAR_6;
}
