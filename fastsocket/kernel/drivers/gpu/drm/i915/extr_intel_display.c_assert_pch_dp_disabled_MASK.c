
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dev; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (struct drm_i915_private*,int,int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_2,
       enum pipe VAR_3, int VAR_4, u32 VAR_5)
{
 u32 VAR_6 = FUNC_1(VAR_4);
 FUNC_2(FUNC_3(VAR_2, VAR_3, VAR_5, VAR_6),
      "PCH DP (0x%08x) enabled on transcoder %c, should be disabled\n",
      VAR_4, FUNC_4(VAR_3));

 FUNC_2(FUNC_0(VAR_2->dev) && (VAR_6 & VAR_1) == 0
      && (VAR_6 & VAR_0),
      "IBX PCH dp port still using transcoder B\n");
}
