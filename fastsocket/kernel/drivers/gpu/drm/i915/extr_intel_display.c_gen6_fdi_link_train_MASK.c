
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_crtc {int pipe; int fdi_lanes; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int) ;
 int VAR_13 ;
 scalar_t__ FUNC_7 (struct drm_device*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 scalar_t__ FUNC_10 (struct drm_device*) ;
 int FUNC_11 (int) ;
 int* VAR_14 ;
 struct intel_crtc* FUNC_12 (struct drm_crtc*) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct drm_crtc *VAR_15)
{
 struct drm_device *VAR_16 = VAR_15->dev;
 struct drm_i915_private *VAR_17 = VAR_16->dev_private;
 struct intel_crtc *VAR_18 = FUNC_12(VAR_15);
 int VAR_19 = VAR_18->pipe;
 u32 VAR_20, VAR_21, VAR_22, VAR_23;



 VAR_20 = FUNC_4(VAR_19);
 VAR_21 = FUNC_8(VAR_20);
 VAR_21 &= ~VAR_11;
 VAR_21 &= ~VAR_8;
 FUNC_9(VAR_20, VAR_21);

 FUNC_11(VAR_20);
 FUNC_13(150);


 VAR_20 = FUNC_6(VAR_19);
 VAR_21 = FUNC_8(VAR_20);
 VAR_21 &= ~(7 << 19);
 VAR_21 |= (VAR_18->fdi_lanes - 1) << 19;
 VAR_21 &= ~VAR_1;
 VAR_21 |= VAR_2;
 VAR_21 &= ~VAR_7;

 VAR_21 |= VAR_0;
 FUNC_9(VAR_20, VAR_21 | VAR_13);

 FUNC_9(FUNC_5(VAR_19),
     VAR_12 | VAR_10);

 VAR_20 = FUNC_2(VAR_19);
 VAR_21 = FUNC_8(VAR_20);
 if (FUNC_7(VAR_16)) {
  VAR_21 &= ~VAR_6;
  VAR_21 |= VAR_3;
 } else {
  VAR_21 &= ~VAR_1;
  VAR_21 |= VAR_2;
 }
 FUNC_9(VAR_20, VAR_21 | VAR_9);

 FUNC_11(VAR_20);
 FUNC_13(150);

 for (VAR_22 = 0; VAR_22 < 4; VAR_22++) {
  VAR_20 = FUNC_6(VAR_19);
  VAR_21 = FUNC_8(VAR_20);
  VAR_21 &= ~VAR_7;
  VAR_21 |= VAR_14[VAR_22];
  FUNC_9(VAR_20, VAR_21);

  FUNC_11(VAR_20);
  FUNC_13(500);

  for (VAR_23 = 0; VAR_23 < 5; VAR_23++) {
   VAR_20 = FUNC_3(VAR_19);
   VAR_21 = FUNC_8(VAR_20);
   FUNC_0("FDI_RX_IIR 0x%x\n", VAR_21);
   if (VAR_21 & VAR_8) {
    FUNC_9(VAR_20, VAR_21 | VAR_8);
    FUNC_0("FDI train 1 done.\n");
    break;
   }
   FUNC_13(50);
  }
  if (VAR_23 < 5)
   break;
 }
 if (VAR_22 == 4)
  FUNC_1("FDI train 1 fail!\n");


 VAR_20 = FUNC_6(VAR_19);
 VAR_21 = FUNC_8(VAR_20);
 VAR_21 &= ~VAR_1;
 VAR_21 |= VAR_4;
 if (FUNC_10(VAR_16)) {
  VAR_21 &= ~VAR_7;

  VAR_21 |= VAR_0;
 }
 FUNC_9(VAR_20, VAR_21);

 VAR_20 = FUNC_2(VAR_19);
 VAR_21 = FUNC_8(VAR_20);
 if (FUNC_7(VAR_16)) {
  VAR_21 &= ~VAR_6;
  VAR_21 |= VAR_5;
 } else {
  VAR_21 &= ~VAR_1;
  VAR_21 |= VAR_4;
 }
 FUNC_9(VAR_20, VAR_21);

 FUNC_11(VAR_20);
 FUNC_13(150);

 for (VAR_22 = 0; VAR_22 < 4; VAR_22++) {
  VAR_20 = FUNC_6(VAR_19);
  VAR_21 = FUNC_8(VAR_20);
  VAR_21 &= ~VAR_7;
  VAR_21 |= VAR_14[VAR_22];
  FUNC_9(VAR_20, VAR_21);

  FUNC_11(VAR_20);
  FUNC_13(500);

  for (VAR_23 = 0; VAR_23 < 5; VAR_23++) {
   VAR_20 = FUNC_3(VAR_19);
   VAR_21 = FUNC_8(VAR_20);
   FUNC_0("FDI_RX_IIR 0x%x\n", VAR_21);
   if (VAR_21 & VAR_11) {
    FUNC_9(VAR_20, VAR_21 | VAR_11);
    FUNC_0("FDI train 2 done.\n");
    break;
   }
   FUNC_13(50);
  }
  if (VAR_23 < 5)
   break;
 }
 if (VAR_22 == 4)
  FUNC_1("FDI train 2 fail!\n");

 FUNC_0("FDI train done.\n");
}
