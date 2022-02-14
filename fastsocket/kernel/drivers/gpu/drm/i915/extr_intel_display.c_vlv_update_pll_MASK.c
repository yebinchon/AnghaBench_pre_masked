
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dpio_lock; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_4__ {int n; int m1; int m2; int p1; int p2; } ;
typedef TYPE_1__ intel_clock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct drm_crtc*,struct drm_display_mode*,struct drm_display_mode*) ;
 int FUNC_11 (struct drm_i915_private*,int ,int) ;
 int FUNC_12 (struct drm_display_mode*) ;
 scalar_t__ FUNC_13 (struct drm_crtc*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 struct intel_crtc* FUNC_16 (struct drm_crtc*) ;
 int FUNC_17 (int) ;
 scalar_t__ FUNC_18 (int,int) ;

__attribute__((used)) static void FUNC_19(struct drm_crtc *VAR_28,
      struct drm_display_mode *VAR_29,
      struct drm_display_mode *VAR_30,
      intel_clock_t *VAR_31, intel_clock_t *VAR_32,
      int VAR_33)
{
 struct drm_device *VAR_34 = VAR_28->dev;
 struct drm_i915_private *VAR_35 = VAR_34->dev_private;
 struct intel_crtc *VAR_36 = FUNC_16(VAR_28);
 int VAR_37 = VAR_36->pipe;
 u32 VAR_38, VAR_39, VAR_40;
 u32 VAR_41, VAR_42, VAR_43, VAR_44, VAR_45;
 bool VAR_46;
 u32 VAR_47;

 FUNC_14(&VAR_35->dpio_lock);

 VAR_46 = FUNC_13(VAR_28, VAR_27) ||
  FUNC_13(VAR_28, VAR_26);

 VAR_38 = VAR_23;
 VAR_38 |= VAR_17;
 VAR_38 |= VAR_21;
 VAR_38 |= VAR_18;

 FUNC_8(FUNC_4(VAR_37), VAR_38);
 FUNC_9(FUNC_4(VAR_37));

 VAR_41 = VAR_31->n;
 VAR_42 = VAR_31->m1;
 VAR_43 = VAR_31->m2;
 VAR_44 = VAR_31->p1;
 VAR_45 = VAR_31->p2;





 VAR_39 = ((VAR_42 << VAR_8) | (VAR_43 & VAR_9));
 VAR_39 |= ((VAR_44 << VAR_11) | (VAR_45 << VAR_12));
 VAR_39 |= ((VAR_41 << VAR_10));
 VAR_39 |= (1 << VAR_15);
 VAR_39 |= (1 << VAR_7);
 VAR_39 |= VAR_5;
 FUNC_11(VAR_35, FUNC_1(VAR_37), VAR_39);

 FUNC_11(VAR_35, FUNC_0(VAR_37), 0x01000000);

 VAR_40 = (1 << VAR_16) | (5 << VAR_13) |
  (3 << VAR_0) | (1<<20) |
  (7 << VAR_14) | (8 << VAR_4) |
  (5 << VAR_1);
 FUNC_11(VAR_35, FUNC_3(VAR_37), VAR_40);

 FUNC_11(VAR_35, FUNC_2(VAR_37), 0x005f003b);

 VAR_38 |= VAR_22;
 FUNC_8(FUNC_4(VAR_37), VAR_38);
 FUNC_9(FUNC_4(VAR_37));
 if (FUNC_18(((FUNC_7(FUNC_4(VAR_37)) & VAR_19) == VAR_19), 1))
  FUNC_6("DPLL %d failed to lock\n", VAR_37);

 FUNC_11(VAR_35, VAR_6, 0x620);

 if (FUNC_13(VAR_28, VAR_24))
  FUNC_10(VAR_28, VAR_29, VAR_30);

 FUNC_8(FUNC_4(VAR_37), VAR_38);


 FUNC_9(FUNC_4(VAR_37));
 FUNC_17(150);

 VAR_47 = 0;
 if (VAR_46) {
  VAR_47 = FUNC_12(VAR_30);
  if (VAR_47 > 1)
   VAR_47 = (VAR_47 - 1) << VAR_20;
  else
   VAR_47 = 0;
 }
 FUNC_8(FUNC_5(VAR_37), VAR_47);
 FUNC_9(FUNC_5(VAR_37));


 if(FUNC_13(VAR_28, VAR_24)
   || FUNC_13(VAR_28, VAR_26))
 {
  VAR_47 = 0x1000C4;
  if(VAR_37 == 1)
   VAR_47 |= (1 << 21);
  FUNC_11(VAR_35, VAR_2, VAR_47);
 }
 if(FUNC_13(VAR_28,VAR_25))
 {
  VAR_47 = 0x1000C4;
  if(VAR_37 == 1)
   VAR_47 |= (1 << 21);
  FUNC_11(VAR_35, VAR_3, VAR_47);
 }

 FUNC_15(&VAR_35->dpio_lock);
}
