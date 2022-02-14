
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_encoder {int dummy; } ;
struct intel_encoder {int type; struct drm_encoder base; } ;
struct intel_dp {int link_bw; } ;
struct intel_ddi_plls {scalar_t__ wrpll1_refcount; scalar_t__ wrpll2_refcount; scalar_t__ spll_refcount; } ;
struct intel_crtc {int pipe; int ddi_pll_sel; } ;
struct drm_i915_private {struct intel_ddi_plls ddi_plls; } ;
struct drm_crtc {TYPE_1__* dev; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_2__ {struct drm_i915_private* dev_private; } ;





 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int,char*,...) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 struct intel_dp* FUNC_8 (struct drm_encoder*) ;
 int FUNC_9 (int,int*,int*,int*) ;
 struct intel_encoder* FUNC_10 (struct drm_crtc*) ;
 int FUNC_11 (struct drm_crtc*) ;
 int FUNC_12 (int) ;
 struct intel_crtc* FUNC_13 (struct drm_crtc*) ;
 int FUNC_14 (int) ;

bool FUNC_15(struct drm_crtc *VAR_18, int VAR_19)
{
 struct intel_crtc *VAR_20 = FUNC_13(VAR_18);
 struct intel_encoder *VAR_21 = FUNC_10(VAR_18);
 struct drm_encoder *VAR_22 = &VAR_21->base;
 struct drm_i915_private *VAR_23 = VAR_18->dev->dev_private;
 struct intel_ddi_plls *VAR_24 = &VAR_23->ddi_plls;
 int VAR_25 = VAR_21->type;
 enum pipe VAR_26 = VAR_20->pipe;
 uint32_t VAR_27, VAR_28;



 FUNC_11(VAR_18);

 if (VAR_25 == VAR_1 || VAR_25 == VAR_2) {
  struct intel_dp *VAR_29 = FUNC_8(VAR_22);

  switch (VAR_29->link_bw) {
  case 130:
   VAR_20->ddi_pll_sel = VAR_6;
   break;
  case 129:
   VAR_20->ddi_pll_sel = VAR_4;
   break;
  case 128:
   VAR_20->ddi_pll_sel = VAR_5;
   break;
  default:
   FUNC_1("Link bandwidth %d unsupported\n",
      VAR_29->link_bw);
   return 0;
  }


  return 1;

 } else if (VAR_25 == VAR_3) {
  int VAR_30, VAR_31, VAR_32;

  if (VAR_24->wrpll1_refcount == 0) {
   FUNC_0("Using WRPLL 1 on pipe %c\n",
          FUNC_12(VAR_26));
   VAR_24->wrpll1_refcount++;
   VAR_27 = VAR_14;
   VAR_20->ddi_pll_sel = VAR_8;
  } else if (VAR_24->wrpll2_refcount == 0) {
   FUNC_0("Using WRPLL 2 on pipe %c\n",
          FUNC_12(VAR_26));
   VAR_24->wrpll2_refcount++;
   VAR_27 = VAR_15;
   VAR_20->ddi_pll_sel = VAR_9;
  } else {
   FUNC_1("No WRPLLs available!\n");
   return 0;
  }

  FUNC_4(FUNC_2(VAR_27) & VAR_16,
       "WRPLL already enabled\n");

  FUNC_9(VAR_19, &VAR_30, &VAR_31, &VAR_32);

  VAR_28 = VAR_16 | VAR_17 |
        FUNC_7(VAR_32) | FUNC_5(VAR_31) |
        FUNC_6(VAR_30);

 } else if (VAR_25 == VAR_0) {
  if (VAR_24->spll_refcount == 0) {
   FUNC_0("Using SPLL on pipe %c\n",
          FUNC_12(VAR_26));
   VAR_24->spll_refcount++;
   VAR_27 = VAR_10;
   VAR_20->ddi_pll_sel = VAR_7;
  }

  FUNC_4(FUNC_2(VAR_27) & VAR_11,
       "SPLL already enabled\n");

  VAR_28 = VAR_11 | VAR_12 | VAR_13;

 } else {
  FUNC_4(1, "Invalid DDI encoder type %d\n", VAR_25);
  return 0;
 }

 FUNC_3(VAR_27, VAR_28);
 FUNC_14(20);

 return 1;
}
