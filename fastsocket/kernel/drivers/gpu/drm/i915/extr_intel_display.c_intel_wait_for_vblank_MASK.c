
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_2__ {int gen; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 TYPE_1__* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (struct drm_device*,int) ;
 scalar_t__ FUNC_6 (int,int) ;

void FUNC_7(struct drm_device *VAR_1, int VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_1->dev_private;
 int VAR_4 = FUNC_4(VAR_2);

 if (FUNC_3(VAR_1)->gen >= 5) {
  FUNC_5(VAR_1, VAR_2);
  return;
 }
 FUNC_2(VAR_4,
     FUNC_1(VAR_4) | VAR_0);


 if (FUNC_6(FUNC_1(VAR_4) &
       VAR_0,
       50))
  FUNC_0("vblank wait timed out\n");
}
