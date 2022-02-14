
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct drm_device *VAR_5)
{
 struct drm_i915_private *VAR_6 = VAR_5->dev_private;
 uint32_t VAR_7;

 VAR_7 = FUNC_2(VAR_4);
 if (VAR_7 & VAR_0)
  return;

 FUNC_5(FUNC_2(FUNC_1(VAR_2)) & VAR_1);
 FUNC_5(FUNC_2(FUNC_1(VAR_3)) & VAR_1);

 VAR_7 |= VAR_0;
 FUNC_0("enabling fdi C rx\n");
 FUNC_3(VAR_4, VAR_7);
 FUNC_4(VAR_4);
}
