
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct intel_pch_pll {scalar_t__ refcount; int pll_reg; scalar_t__ active; int on; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_8__ {TYPE_3__ base; TYPE_1__* dev; } ;
struct intel_crtc {int pipe; TYPE_4__ base; struct intel_pch_pll* pch_pll; } ;
struct drm_i915_private {TYPE_2__* info; } ;
struct TYPE_6__ {int gen; } ;
struct TYPE_5__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct drm_i915_private*,struct intel_pch_pll*,int *) ;
 int FUNC_7 (struct drm_i915_private*,struct intel_pch_pll*,int *) ;
 int FUNC_8 (struct drm_i915_private*,int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct intel_crtc *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->base.dev->dev_private;
 struct intel_pch_pll *VAR_3 = VAR_1->pch_pll;
 int VAR_4;
 u32 VAR_5;


 FUNC_0(VAR_2->info->gen < 5);
 if (VAR_3 == ((void*)0))
        return;

 if (FUNC_5(VAR_3->refcount == 0))
  return;

 FUNC_1("disable PCH PLL %x (active %d, on? %d) for crtc %d\n",
        VAR_3->pll_reg, VAR_3->active, VAR_3->on,
        VAR_1->base.base.id);

 if (FUNC_5(VAR_3->active == 0)) {
  FUNC_6(VAR_2, VAR_3, ((void*)0));
  return;
 }

 if (--VAR_3->active) {
  FUNC_7(VAR_2, VAR_3, ((void*)0));
  return;
 }

 FUNC_1("disabling PCH PLL %x\n", VAR_3->pll_reg);


 FUNC_8(VAR_2, VAR_1->pipe);

 VAR_4 = VAR_3->pll_reg;
 VAR_5 = FUNC_2(VAR_4);
 VAR_5 &= ~VAR_0;
 FUNC_3(VAR_4, VAR_5);
 FUNC_4(VAR_4);
 FUNC_9(200);

 VAR_3->on = 0;
}
