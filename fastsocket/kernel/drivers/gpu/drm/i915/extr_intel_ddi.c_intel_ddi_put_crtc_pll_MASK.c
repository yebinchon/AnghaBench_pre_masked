
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct intel_ddi_plls {scalar_t__ spll_refcount; scalar_t__ wrpll1_refcount; scalar_t__ wrpll2_refcount; } ;
struct intel_crtc {int ddi_pll_sel; } ;
struct drm_i915_private {struct intel_ddi_plls ddi_plls; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_2__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;



 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct intel_crtc* FUNC_6 (struct drm_crtc*) ;

void FUNC_7(struct drm_crtc *VAR_6)
{
 struct drm_i915_private *VAR_7 = VAR_6->dev->dev_private;
 struct intel_ddi_plls *VAR_8 = &VAR_7->ddi_plls;
 struct intel_crtc *VAR_9 = FUNC_6(VAR_6);
 uint32_t VAR_10;

 switch (VAR_9->ddi_pll_sel) {
 case 130:
  VAR_8->spll_refcount--;
  if (VAR_8->spll_refcount == 0) {
   FUNC_0("Disabling SPLL\n");
   VAR_10 = FUNC_1(VAR_1);
   FUNC_5(!(VAR_10 & VAR_2));
   FUNC_2(VAR_1, VAR_10 & ~VAR_2);
   FUNC_3(VAR_1);
  }
  break;
 case 129:
  VAR_8->wrpll1_refcount--;
  if (VAR_8->wrpll1_refcount == 0) {
   FUNC_0("Disabling WRPLL 1\n");
   VAR_10 = FUNC_1(VAR_3);
   FUNC_5(!(VAR_10 & VAR_5));
   FUNC_2(VAR_3, VAR_10 & ~VAR_5);
   FUNC_3(VAR_3);
  }
  break;
 case 128:
  VAR_8->wrpll2_refcount--;
  if (VAR_8->wrpll2_refcount == 0) {
   FUNC_0("Disabling WRPLL 2\n");
   VAR_10 = FUNC_1(VAR_4);
   FUNC_5(!(VAR_10 & VAR_5));
   FUNC_2(VAR_4, VAR_10 & ~VAR_5);
   FUNC_3(VAR_4);
  }
  break;
 }

 FUNC_4(VAR_8->spll_refcount < 0, "Invalid SPLL refcount\n");
 FUNC_4(VAR_8->wrpll1_refcount < 0, "Invalid WRPLL1 refcount\n");
 FUNC_4(VAR_8->wrpll2_refcount < 0, "Invalid WRPLL2 refcount\n");

 VAR_9->ddi_pll_sel = VAR_0;
}
