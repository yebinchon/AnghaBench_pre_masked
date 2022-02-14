
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct intel_crtc {int pipe; int plane; TYPE_2__ base; } ;
struct drm_i915_private {int num_pipe; } ;
struct TYPE_3__ {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool
FUNC_2(struct intel_crtc *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->base.dev->dev_private;
 u32 VAR_4, VAR_5;

 if (VAR_3->num_pipe == 1)
  return 1;

 VAR_4 = FUNC_0(!VAR_2->plane);
 VAR_5 = FUNC_1(VAR_4);

 if ((VAR_5 & VAR_0) &&
     (!!(VAR_5 & VAR_1) == VAR_2->pipe))
  return 0;

 return 1;
}
