
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {int * dev_private; } ;
struct TYPE_2__ {int pipe; } ;
typedef TYPE_1__ drm_i915_vblank_pipe_t ;
typedef int drm_i915_private_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct drm_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_5, void *VAR_6,
    struct drm_file *VAR_7)
{
 drm_i915_private_t *VAR_8 = VAR_5->dev_private;
 drm_i915_vblank_pipe_t *VAR_9 = VAR_6;

 if (FUNC_1(VAR_5, VAR_0))
  return -VAR_4;

 if (!VAR_8) {
  FUNC_0("called with no initialization\n");
  return -VAR_3;
 }

 VAR_9->pipe = VAR_1 | VAR_2;

 return 0;
}
