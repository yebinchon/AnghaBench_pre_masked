
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int quirks; int dev; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,char*,int ,int ,int ) ;
 int FUNC_4 (struct drm_i915_private*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

void FUNC_7(struct drm_i915_private *VAR_6,
   enum pipe VAR_7, bool VAR_8)
{
 int VAR_9;
 u32 VAR_10;
 bool VAR_11;
 enum transcoder VAR_12 = FUNC_4(VAR_6,
              VAR_7);


 if (VAR_7 == VAR_3 && VAR_6->quirks & VAR_4)
  VAR_8 = 1;

 if (FUNC_1(VAR_6->dev) && VAR_12 != VAR_5 &&
     !(FUNC_0(VAR_0) & VAR_1)) {
  VAR_11 = 0;
 } else {
  VAR_9 = FUNC_2(VAR_12);
  VAR_10 = FUNC_0(VAR_9);
  VAR_11 = !!(VAR_10 & VAR_2);
 }

 FUNC_3(VAR_11 != VAR_8,
      "pipe %c assertion failure (expected %s, current %s)\n",
      FUNC_5(VAR_7), FUNC_6(VAR_8), FUNC_6(VAR_11));
}
