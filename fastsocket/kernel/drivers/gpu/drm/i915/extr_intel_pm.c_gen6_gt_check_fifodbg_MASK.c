
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int,char*,int) ;

void FUNC_3(struct drm_i915_private *VAR_2)
{
 u32 VAR_3;
 VAR_3 = FUNC_0(VAR_0);
 if (FUNC_2(VAR_3 & VAR_1,
      "MMIO read or write has been dropped %x\n", VAR_3))
  FUNC_1(VAR_0, VAR_1);
}
