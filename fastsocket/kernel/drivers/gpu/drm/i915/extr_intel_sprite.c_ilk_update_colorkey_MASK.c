
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_plane {int pipe; } ;
struct drm_plane {struct drm_device* dev; } ;
struct drm_intel_sprite_colorkey {int min_value; int max_value; int channel_mask; int flags; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 struct intel_plane* FUNC_7 (struct drm_plane*) ;

__attribute__((used)) static int
FUNC_8(struct drm_plane *VAR_4,
      struct drm_intel_sprite_colorkey *VAR_5)
{
 struct drm_device *VAR_6 = VAR_4->dev;
 struct drm_i915_private *VAR_7 = VAR_6->dev_private;
 struct intel_plane *VAR_8;
 u32 VAR_9;
 int VAR_10 = 0;

 VAR_8 = FUNC_7(VAR_4);

 FUNC_5(FUNC_3(VAR_8->pipe), VAR_5->min_value);
 FUNC_5(FUNC_1(VAR_8->pipe), VAR_5->max_value);
 FUNC_5(FUNC_2(VAR_8->pipe), VAR_5->channel_mask);

 VAR_9 = FUNC_4(FUNC_0(VAR_8->pipe));
 VAR_9 &= ~(VAR_1 | VAR_0);
 if (VAR_5->flags & VAR_2)
  VAR_9 |= VAR_0;
 else if (VAR_5->flags & VAR_3)
  VAR_9 |= VAR_1;
 FUNC_5(FUNC_0(VAR_8->pipe), VAR_9);

 FUNC_6(FUNC_2(VAR_8->pipe));

 return VAR_10;
}
