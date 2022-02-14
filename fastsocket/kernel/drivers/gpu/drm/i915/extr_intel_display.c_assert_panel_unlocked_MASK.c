
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dev; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_9,
      enum pipe VAR_10)
{
 int VAR_11, VAR_12;
 u32 VAR_13;
 enum pipe VAR_14 = VAR_6;
 bool VAR_15 = 1;

 if (FUNC_0(VAR_9->dev)) {
  VAR_11 = VAR_5;
  VAR_12 = VAR_4;
 } else {
  VAR_11 = VAR_8;
  VAR_12 = VAR_0;
 }

 VAR_13 = FUNC_1(VAR_11);
 if (!(VAR_13 & VAR_2) ||
     ((VAR_13 & VAR_3) == VAR_3))
  VAR_15 = 0;

 if (FUNC_1(VAR_12) & VAR_1)
  VAR_14 = VAR_7;

 FUNC_2(VAR_14 == VAR_10 && VAR_15,
      "panel assertion failure, pipe %c regs locked\n",
      FUNC_3(VAR_10));
}
