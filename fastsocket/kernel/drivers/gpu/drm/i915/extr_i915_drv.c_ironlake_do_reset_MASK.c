
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_5)
{
 struct drm_i915_private *VAR_6 = VAR_5->dev_private;
 u32 VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_4 + VAR_3);
 FUNC_1(VAR_4 + VAR_3,
     VAR_7 | VAR_1 | VAR_2);
 VAR_8 = FUNC_2(FUNC_0(VAR_4 + VAR_3) & 0x1, 500);
 if (VAR_8)
  return VAR_8;


 VAR_7 = FUNC_0(VAR_4 + VAR_3);
 FUNC_1(VAR_4 + VAR_3,
     VAR_7 | VAR_0 | VAR_2);
 return FUNC_2(FUNC_0(VAR_4 + VAR_3) & 0x1, 500);
}
