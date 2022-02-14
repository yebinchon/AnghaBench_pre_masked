
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_pch_pll {int pll_reg; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int,char*,int,...) ;
 int VAR_2 ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_3,
      struct intel_pch_pll *VAR_4,
      struct intel_crtc *VAR_5,
      bool VAR_6)
{
 u32 VAR_7;
 bool VAR_8;

 if (FUNC_2(VAR_3->dev)) {
  FUNC_0("LPT detected: skipping PCH PLL test\n");
  return;
 }

 if (FUNC_4 (!VAR_4,
    "asserting PCH PLL %s with no PLL\n", FUNC_5(VAR_6)))
  return;

 VAR_7 = FUNC_3(VAR_4->pll_reg);
 VAR_8 = !!(VAR_7 & VAR_0);
 FUNC_4(VAR_8 != VAR_6,
      "PCH PLL state for reg %x assertion failure (expected %s, current %s), val=%08x\n",
      VAR_4->pll_reg, FUNC_5(VAR_6), FUNC_5(VAR_8), VAR_7);


 if (VAR_5 && FUNC_1(VAR_3->dev)) {
  u32 VAR_9;

  VAR_9 = FUNC_3(VAR_1);
  VAR_8 = VAR_4->pll_reg == VAR_2;
  if (!FUNC_4(((VAR_9 >> (4 * VAR_5->pipe)) & 1) != VAR_8,
     "PLL[%d] not attached to this transcoder %d: %08x\n",
     VAR_8, VAR_5->pipe, VAR_9)) {
   VAR_8 = !!(VAR_7 >> (4*VAR_5->pipe + 3));
   FUNC_4(VAR_8 != VAR_6,
        "PLL[%d] not %s on this transcoder %d: %08x\n",
        VAR_4->pll_reg == VAR_2,
        FUNC_5(VAR_6),
        VAR_5->pipe,
        VAR_7);
  }
 }
}
