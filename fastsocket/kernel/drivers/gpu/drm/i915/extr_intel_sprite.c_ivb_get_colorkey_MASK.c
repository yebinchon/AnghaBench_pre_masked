
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_plane {int pipe; } ;
struct drm_plane {struct drm_device* dev; } ;
struct drm_intel_sprite_colorkey {scalar_t__ flags; void* channel_mask; void* max_value; void* min_value; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 void* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct intel_plane* FUNC_5 (struct drm_plane*) ;

__attribute__((used)) static void
FUNC_6(struct drm_plane *VAR_5, struct drm_intel_sprite_colorkey *VAR_6)
{
 struct drm_device *VAR_7 = VAR_5->dev;
 struct drm_i915_private *VAR_8 = VAR_7->dev_private;
 struct intel_plane *VAR_9;
 u32 VAR_10;

 VAR_9 = FUNC_5(VAR_5);

 VAR_6->min_value = FUNC_0(FUNC_4(VAR_9->pipe));
 VAR_6->max_value = FUNC_0(FUNC_2(VAR_9->pipe));
 VAR_6->channel_mask = FUNC_0(FUNC_3(VAR_9->pipe));
 VAR_6->flags = 0;

 VAR_10 = FUNC_0(FUNC_1(VAR_9->pipe));

 if (VAR_10 & VAR_3)
  VAR_6->flags = VAR_0;
 else if (VAR_10 & VAR_4)
  VAR_6->flags = VAR_2;
 else
  VAR_6->flags = VAR_1;
}
