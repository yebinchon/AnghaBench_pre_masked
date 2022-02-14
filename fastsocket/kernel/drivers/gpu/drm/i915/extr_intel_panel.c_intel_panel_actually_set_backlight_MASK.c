
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
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 TYPE_1__* FUNC_4 (struct drm_device*) ;
 int VAR_2 ;
 int FUNC_5 (struct drm_device*,int) ;
 int FUNC_6 (struct drm_device*) ;
 void FUNC_7 (struct drm_device*,int) ;
 scalar_t__ FUNC_8 (struct drm_device*) ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static void FUNC_10(struct drm_device *VAR_3, u32 VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_3->dev_private;
 u32 VAR_6;

 FUNC_0("set backlight PWM = %d\n", VAR_4);
 VAR_4 = FUNC_5(VAR_3, VAR_4);

 if (FUNC_1(VAR_3))
  return FUNC_7(VAR_3, VAR_4);

 if (FUNC_8(VAR_3)) {
  u32 VAR_7 = FUNC_6(VAR_3);
  u8 VAR_8;

  VAR_8 = VAR_4 * 0xfe / VAR_7 + 1;
  VAR_4 /= VAR_8;
  FUNC_9(VAR_3->pdev, VAR_2, VAR_8);
 }

 VAR_6 = FUNC_2(VAR_1);
 if (FUNC_4(VAR_3)->gen < 4)
  VAR_4 <<= 1;
 VAR_6 &= ~VAR_0;
 FUNC_3(VAR_1, VAR_6 | VAR_4);
}
