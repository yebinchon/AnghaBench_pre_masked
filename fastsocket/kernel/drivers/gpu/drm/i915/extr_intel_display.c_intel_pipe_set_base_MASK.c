
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_crtc {scalar_t__ plane; int pipe; } ;
struct TYPE_3__ {int (* update_plane ) (struct drm_crtc*,struct drm_framebuffer*,int,int) ;} ;
struct drm_i915_private {scalar_t__ num_pipe; TYPE_1__ display; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_device {int struct_mutex; struct drm_i915_private* dev_private; } ;
struct drm_crtc {int x; int y; struct drm_framebuffer* fb; struct drm_device* dev; } ;
struct TYPE_4__ {int obj; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_crtc*,int,int) ;
 int FUNC_2 (struct drm_framebuffer*) ;
 int FUNC_3 (struct drm_device*,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct drm_crtc*,struct drm_framebuffer*,int,int) ;
 struct intel_crtc* FUNC_10 (struct drm_crtc*) ;
 TYPE_2__* FUNC_11 (struct drm_framebuffer*) ;

__attribute__((used)) static int
FUNC_12(struct drm_crtc *VAR_1, int VAR_2, int VAR_3,
      struct drm_framebuffer *VAR_4)
{
 struct drm_device *VAR_5 = VAR_1->dev;
 struct drm_i915_private *VAR_6 = VAR_5->dev_private;
 struct intel_crtc *VAR_7 = FUNC_10(VAR_1);
 struct drm_framebuffer *VAR_8;
 int VAR_9;


 if (!VAR_4) {
  FUNC_0("No FB bound\n");
  return 0;
 }

 if(VAR_7->plane > VAR_6->num_pipe) {
  FUNC_0("no plane for crtc: plane %d, num_pipes %d\n",
    VAR_7->plane,
    VAR_6->num_pipe);
  return -VAR_0;
 }

 FUNC_7(&VAR_5->struct_mutex);
 VAR_9 = FUNC_3(VAR_5,
      FUNC_11(VAR_4)->obj,
      ((void*)0));
 if (VAR_9 != 0) {
  FUNC_8(&VAR_5->struct_mutex);
  FUNC_0("pin & fence failed\n");
  return VAR_9;
 }

 if (VAR_1->fb)
  FUNC_2(VAR_1->fb);

 VAR_9 = VAR_6->display.update_plane(VAR_1, VAR_4, VAR_2, VAR_3);
 if (VAR_9) {
  FUNC_4(FUNC_11(VAR_4)->obj);
  FUNC_8(&VAR_5->struct_mutex);
  FUNC_0("failed to update base address\n");
  return VAR_9;
 }

 VAR_8 = VAR_1->fb;
 VAR_1->fb = VAR_4;
 VAR_1->x = VAR_2;
 VAR_1->y = VAR_3;

 if (VAR_8) {
  FUNC_6(VAR_5, VAR_7->pipe);
  FUNC_4(FUNC_11(VAR_8)->obj);
 }

 FUNC_5(VAR_5);
 FUNC_8(&VAR_5->struct_mutex);

 FUNC_1(VAR_1, VAR_2, VAR_3);

 return 0;
}
