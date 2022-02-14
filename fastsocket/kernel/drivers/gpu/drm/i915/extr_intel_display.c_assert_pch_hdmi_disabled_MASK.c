
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
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (struct drm_i915_private*,int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_2,
         enum pipe VAR_3, int VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_4);
 FUNC_2(FUNC_3(VAR_2, VAR_3, VAR_5),
      "PCH HDMI (0x%08x) enabled on transcoder %c, should be disabled\n",
      VAR_4, FUNC_4(VAR_3));

 FUNC_2(FUNC_0(VAR_2->dev) && (VAR_5 & VAR_0) == 0
      && (VAR_5 & VAR_1),
      "IBX PCH hdmi port still using transcoder B\n");
}
