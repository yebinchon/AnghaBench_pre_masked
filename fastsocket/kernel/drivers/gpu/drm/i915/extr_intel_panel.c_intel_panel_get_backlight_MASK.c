
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int pdev; struct drm_i915_private* dev_private; } ;
struct TYPE_2__ {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct drm_device*) ;
 int VAR_3 ;
 int FUNC_4 (struct drm_device*,int) ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 int FUNC_6 (int ,int ,int*) ;

__attribute__((used)) static u32 FUNC_7(struct drm_device *VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_4->dev_private;
 u32 VAR_6;

 if (FUNC_1(VAR_4)) {
  VAR_6 = FUNC_2(VAR_1) & VAR_0;
 } else {
  VAR_6 = FUNC_2(VAR_2) & VAR_0;
  if (FUNC_3(VAR_4)->gen < 4)
   VAR_6 >>= 1;

  if (FUNC_5(VAR_4)) {
   u8 VAR_7;

   FUNC_6(VAR_4->pdev, VAR_3, &VAR_7);
   VAR_6 *= VAR_7;
  }
 }

 VAR_6 = FUNC_4(VAR_4, VAR_6);
 FUNC_0("get backlight PWM = %d\n", VAR_6);
 return VAR_6;
}
