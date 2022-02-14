
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dev; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct drm_i915_private*,int) ;
 int FUNC_6 (struct drm_i915_private*,int) ;
 int FUNC_7 (struct drm_i915_private*,int) ;
 int FUNC_8 (struct drm_i915_private*,int) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static void FUNC_10(struct drm_i915_private *VAR_2, enum pipe VAR_3,
         bool VAR_4)
{
 enum transcoder VAR_5 = FUNC_8(VAR_2,
              VAR_3);
 enum pipe VAR_6;
 int VAR_7;
 u32 VAR_8;

 if (FUNC_0(VAR_2->dev))
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_3;






 if (!FUNC_1(VAR_2->dev))
  FUNC_7(VAR_2, VAR_3);
 else {
  if (VAR_4) {

   FUNC_5(VAR_2, VAR_6);
   FUNC_6(VAR_2,
        (enum pipe) VAR_5);
  }

 }

 VAR_7 = FUNC_4(VAR_5);
 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8 & VAR_0)
  return;

 FUNC_3(VAR_7, VAR_8 | VAR_0);
 FUNC_9(VAR_2->dev, VAR_3);
}
