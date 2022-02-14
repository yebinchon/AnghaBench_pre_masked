
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* update_plane ) (struct drm_crtc*,struct drm_framebuffer*,int,int) ;int (* disable_fbc ) (struct drm_device*) ;} ;
struct drm_i915_private {TYPE_1__ display; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
typedef enum mode_set_atomic { ____Placeholder_mode_set_atomic } mode_set_atomic ;


 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_crtc*,struct drm_framebuffer*,int,int) ;

__attribute__((used)) static int
FUNC_3(struct drm_crtc *VAR_0, struct drm_framebuffer *VAR_1,
      int VAR_2, int VAR_3, enum mode_set_atomic VAR_4)
{
 struct drm_device *VAR_5 = VAR_0->dev;
 struct drm_i915_private *VAR_6 = VAR_5->dev_private;

 if (VAR_6->display.disable_fbc)
  VAR_6->display.disable_fbc(VAR_5);
 FUNC_0(VAR_0);

 return VAR_6->display.update_plane(VAR_0, VAR_1, VAR_2, VAR_3);
}
