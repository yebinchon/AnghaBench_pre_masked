
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct drm_i915_private*) ;

void FUNC_4(struct drm_device *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;
 uint32_t VAR_5 = FUNC_2(VAR_1);






 FUNC_0("CDCLK running at %dMHz\n",
        FUNC_3(VAR_4));

 if (VAR_5 & VAR_0)
  FUNC_1("CDCLK source is not LCPLL\n");

 if (VAR_5 & VAR_2)
  FUNC_1("LCPLL is disabled\n");
}
