
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_2__ {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_4->dev_private;

 if (FUNC_1(VAR_4)->gen >= 4)
  return FUNC_0(VAR_1) & VAR_2;

 if (FUNC_2(VAR_4))
  return FUNC_0(VAR_0) & VAR_3;

 return 0;
}
