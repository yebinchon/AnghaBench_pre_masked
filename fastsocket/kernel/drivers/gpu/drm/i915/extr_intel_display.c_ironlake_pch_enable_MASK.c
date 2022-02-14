
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct intel_crtc {int pipe; TYPE_2__* pch_pll; } ;
struct TYPE_4__ {int (* fdi_link_train ) (struct drm_crtc*) ;} ;
struct drm_i915_private {TYPE_1__ display; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_6__ {int flags; } ;
struct drm_crtc {TYPE_3__ mode; struct drm_device* dev; } ;
struct TYPE_5__ {scalar_t__ pll_reg; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_8 (int) ;
 int VAR_5 ;
 int FUNC_9 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int VAR_22 ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 scalar_t__ VAR_23 ;
 int FUNC_22 (struct drm_i915_private*,int) ;
 int FUNC_23 (struct drm_i915_private*,int) ;
 int FUNC_24 (struct drm_crtc*) ;
 scalar_t__ FUNC_25 (struct drm_crtc*,int ) ;
 int FUNC_26 (struct drm_crtc*) ;
 int FUNC_27 (struct intel_crtc*) ;
 int FUNC_28 (struct drm_i915_private*,int) ;
 int FUNC_29 (struct drm_crtc*) ;
 struct intel_crtc* FUNC_30 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_31(struct drm_crtc *VAR_24)
{
 struct drm_device *VAR_25 = VAR_24->dev;
 struct drm_i915_private *VAR_26 = VAR_25->dev_private;
 struct intel_crtc *VAR_27 = FUNC_30(VAR_24);
 int VAR_28 = VAR_27->pipe;
 u32 VAR_29, VAR_30;

 FUNC_23(VAR_26, VAR_28);



 FUNC_7(FUNC_1(VAR_28),
     FUNC_6(FUNC_9(VAR_28)) & VAR_22);


 VAR_26->display.fdi_link_train(VAR_24);
 FUNC_27(VAR_27);

 if (FUNC_2(VAR_25)) {
  u32 VAR_31;

  VAR_30 = FUNC_6(VAR_4);
  switch (VAR_28) {
  default:
  case 0:
   VAR_30 |= VAR_7;
   VAR_31 = VAR_6;
   break;
  case 1:
   VAR_30 |= VAR_9;
   VAR_31 = VAR_8;
   break;
  case 2:
   VAR_30 |= VAR_11;
   VAR_31 = VAR_10;
   break;
  }
  if (VAR_27->pch_pll->pll_reg == VAR_23)
   VAR_30 |= VAR_31;
  else
   VAR_30 &= ~VAR_31;
  FUNC_7(VAR_4, VAR_30);
 }


 FUNC_22(VAR_26, VAR_28);
 FUNC_7(FUNC_13(VAR_28), FUNC_6(FUNC_5(VAR_28)));
 FUNC_7(FUNC_11(VAR_28), FUNC_6(FUNC_3(VAR_28)));
 FUNC_7(FUNC_12(VAR_28), FUNC_6(FUNC_4(VAR_28)));

 FUNC_7(FUNC_17(VAR_28), FUNC_6(FUNC_21(VAR_28)));
 FUNC_7(FUNC_14(VAR_28), FUNC_6(FUNC_18(VAR_28)));
 FUNC_7(FUNC_15(VAR_28), FUNC_6(FUNC_19(VAR_28)));
 FUNC_7(FUNC_16(VAR_28), FUNC_6(FUNC_20(VAR_28)));

 FUNC_24(VAR_24);


 if (FUNC_2(VAR_25) &&
     (FUNC_25(VAR_24, VAR_2) ||
      FUNC_25(VAR_24, VAR_3))) {
  u32 VAR_32 = (FUNC_6(FUNC_8(VAR_28)) & VAR_5) >> 5;
  VAR_29 = FUNC_10(VAR_28);
  VAR_30 = FUNC_6(VAR_29);
  VAR_30 &= ~(VAR_19 |
     VAR_20 |
     VAR_12);
  VAR_30 |= (VAR_15 |
    VAR_13);
  VAR_30 |= VAR_32 << 9;

  if (VAR_24->mode.flags & VAR_0)
   VAR_30 |= VAR_14;
  if (VAR_24->mode.flags & VAR_1)
   VAR_30 |= VAR_21;

  switch (FUNC_26(VAR_24)) {
  case 130:
   VAR_30 |= VAR_16;
   break;
  case 129:
   VAR_30 |= VAR_17;
   break;
  case 128:
   VAR_30 |= VAR_18;
   break;
  default:
   FUNC_0();
  }

  FUNC_7(VAR_29, VAR_30);
 }

 FUNC_28(VAR_26, VAR_28);
}
