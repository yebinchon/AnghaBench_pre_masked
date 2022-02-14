
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct intel_pch_pll {scalar_t__ refcount; int on; int pll_reg; int fp0_reg; int active; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_6__ {TYPE_2__ base; TYPE_1__* dev; } ;
struct intel_crtc {int pipe; struct intel_pch_pll* pch_pll; TYPE_3__ base; } ;
struct drm_i915_private {int num_pch_pll; struct intel_pch_pll* pch_plls; int dev; } ;
struct TYPE_4__ {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,int ,int ,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static struct intel_pch_pll *FUNC_7(struct intel_crtc *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_1->base.dev->dev_private;
 struct intel_pch_pll *VAR_5;
 int VAR_6;

 VAR_5 = VAR_1->pch_pll;
 if (VAR_5) {
  FUNC_1("CRTC:%d reusing existing PCH PLL %x\n",
         VAR_1->base.base.id, VAR_5->pll_reg);
  goto prepare;
 }

 if (FUNC_2(VAR_4->dev)) {

  VAR_6 = VAR_1->pipe;
  VAR_5 = &VAR_4->pch_plls[VAR_6];

  FUNC_1("CRTC:%d using pre-allocated PCH PLL %x\n",
         VAR_1->base.base.id, VAR_5->pll_reg);

  goto found;
 }

 for (VAR_6 = 0; VAR_6 < VAR_4->num_pch_pll; VAR_6++) {
  VAR_5 = &VAR_4->pch_plls[VAR_6];


  if (VAR_5->refcount == 0)
   continue;

  if (VAR_2 == (FUNC_3(VAR_5->pll_reg) & 0x7fffffff) &&
      VAR_3 == FUNC_3(VAR_5->fp0_reg)) {
   FUNC_1("CRTC:%d sharing existing PCH PLL %x (refcount %d, ative %d)\n",
          VAR_1->base.base.id,
          VAR_5->pll_reg, VAR_5->refcount, VAR_5->active);

   goto found;
  }
 }


 for (VAR_6 = 0; VAR_6 < VAR_4->num_pch_pll; VAR_6++) {
  VAR_5 = &VAR_4->pch_plls[VAR_6];
  if (VAR_5->refcount == 0) {
   FUNC_1("CRTC:%d allocated PCH PLL %x\n",
          VAR_1->base.base.id, VAR_5->pll_reg);
   goto found;
  }
 }

 return ((void*)0);

found:
 VAR_1->pch_pll = VAR_5;
 VAR_5->refcount++;
 FUNC_0("using pll %d for pipe %d\n", VAR_6, VAR_1->pipe);
prepare:
 FUNC_0("switching PLL %x off\n", VAR_5->pll_reg);


 FUNC_4(VAR_5->pll_reg, VAR_2 & ~VAR_0);
 FUNC_5(VAR_5->pll_reg);
 FUNC_6(150);

 FUNC_4(VAR_5->fp0_reg, VAR_3);
 FUNC_4(VAR_5->pll_reg, VAR_2 & ~VAR_0);
 VAR_5->on = 0;
 return VAR_5;
}
