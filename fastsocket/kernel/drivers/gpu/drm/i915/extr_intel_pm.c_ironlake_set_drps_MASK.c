
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;

bool FUNC_5(struct drm_device *VAR_7, u8 VAR_8)
{
 struct drm_i915_private *VAR_9 = VAR_7->dev_private;
 u16 VAR_10;

 FUNC_4(&VAR_6);

 VAR_10 = FUNC_1(VAR_5);
 if (VAR_10 & VAR_2) {
  FUNC_0("gpu busy, RCS change rejected\n");
  return 0;
 }

 VAR_10 = (VAR_0 << VAR_1) |
  (VAR_8 << VAR_3) | VAR_4;
 FUNC_2(VAR_5, VAR_10);
 FUNC_3(VAR_5);

 VAR_10 |= VAR_2;
 FUNC_2(VAR_5, VAR_10);

 return 1;
}
