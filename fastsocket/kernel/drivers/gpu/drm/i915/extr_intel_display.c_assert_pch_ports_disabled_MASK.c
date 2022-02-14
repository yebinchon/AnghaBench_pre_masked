
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct drm_i915_private*,int,int ) ;
 int FUNC_3 (struct drm_i915_private*,int,int ,int ) ;
 int FUNC_4 (struct drm_i915_private*,int,int ) ;
 int FUNC_5 (struct drm_i915_private*,int,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct drm_i915_private *VAR_11,
          enum pipe VAR_12)
{
 int VAR_13;
 u32 VAR_14;

 FUNC_3(VAR_11, VAR_12, VAR_4, VAR_8);
 FUNC_3(VAR_11, VAR_12, VAR_5, VAR_9);
 FUNC_3(VAR_11, VAR_12, VAR_6, VAR_10);

 VAR_13 = VAR_3;
 VAR_14 = FUNC_0(VAR_13);
 FUNC_1(FUNC_2(VAR_11, VAR_12, VAR_14),
      "PCH VGA enabled on transcoder %c, should be disabled\n",
      FUNC_6(VAR_12));

 VAR_13 = VAR_7;
 VAR_14 = FUNC_0(VAR_13);
 FUNC_1(FUNC_5(VAR_11, VAR_12, VAR_14),
      "PCH LVDS enabled on transcoder %c, should be disabled\n",
      FUNC_6(VAR_12));

 FUNC_4(VAR_11, VAR_12, VAR_0);
 FUNC_4(VAR_11, VAR_12, VAR_1);
 FUNC_4(VAR_11, VAR_12, VAR_2);
}
