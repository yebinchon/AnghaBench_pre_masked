
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(struct drm_device *VAR_4, enum pipe VAR_5)
{
 struct drm_i915_private *VAR_6 = VAR_4->dev_private;
 u32 VAR_7;


 if (VAR_5 > 1)
  return 0;

 if (FUNC_0(VAR_4))
  VAR_7 = FUNC_2(VAR_5);
 else
  VAR_7 = (VAR_5 == VAR_1) ? VAR_2 : VAR_3;

 return (FUNC_1(VAR_7) & VAR_0);
}
