
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc {int pipe; } ;
struct drm_mode_object {int dummy; } ;
struct drm_i915_get_pipe_from_crtc_id {int pipe; int crtc_id; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct drm_device*,int ) ;
 struct drm_mode_object* FUNC_2 (struct drm_device*,int ,int ) ;
 int FUNC_3 (struct drm_mode_object*) ;
 struct intel_crtc* FUNC_4 (int ) ;

int FUNC_5(struct drm_device *VAR_4, void *VAR_5,
    struct drm_file *VAR_6)
{
 struct drm_i915_get_pipe_from_crtc_id *VAR_7 = VAR_5;
 struct drm_mode_object *VAR_8;
 struct intel_crtc *VAR_9;

 if (!FUNC_1(VAR_4, VAR_0))
  return -VAR_3;

 VAR_8 = FUNC_2(VAR_4, VAR_7->crtc_id,
   VAR_1);

 if (!VAR_8) {
  FUNC_0("no such CRTC id\n");
  return -VAR_2;
 }

 VAR_9 = FUNC_4(FUNC_3(VAR_8));
 VAR_7->pipe = VAR_9->pipe;

 return 0;
}
