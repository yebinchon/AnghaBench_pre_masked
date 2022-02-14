
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dev; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int,char*,int ,int ) ;
 int FUNC_5 (struct drm_i915_private*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct drm_i915_private *VAR_2,
     enum pipe VAR_3, bool VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 bool VAR_7;
 enum transcoder VAR_8 = FUNC_5(VAR_2,
              VAR_3);

 if (FUNC_1(VAR_2->dev)) {

  VAR_5 = FUNC_3(VAR_8);
  VAR_6 = FUNC_2(VAR_5);
  VAR_7 = !!(VAR_6 & VAR_1);
 } else {
  VAR_5 = FUNC_0(VAR_3);
  VAR_6 = FUNC_2(VAR_5);
  VAR_7 = !!(VAR_6 & VAR_0);
 }
 FUNC_4(VAR_7 != VAR_4,
      "FDI TX state assertion failure (expected %s, current %s)\n",
      FUNC_6(VAR_4), FUNC_6(VAR_7));
}
