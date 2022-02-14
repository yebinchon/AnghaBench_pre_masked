
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
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (int) ;
 int VAR_15 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int) ;
 int* VAR_16 ;
 struct intel_crtc* FUNC_10 (struct drm_crtc*) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct drm_crtc *VAR_17)
{
 struct drm_device *VAR_18 = VAR_17->dev;
 struct drm_i915_private *VAR_19 = VAR_18->dev_private;
 struct intel_crtc *VAR_20 = FUNC_10(VAR_17);
 int VAR_21 = VAR_20->pipe;
 u32 VAR_22, VAR_23, VAR_24;



 VAR_22 = FUNC_4(VAR_21);
 VAR_23 = FUNC_7(VAR_22);
 VAR_23 &= ~VAR_13;
 VAR_23 &= ~VAR_10;
 FUNC_8(VAR_22, VAR_23);

 FUNC_9(VAR_22);
 FUNC_11(150);

 FUNC_0("FDI_RX_IIR before link train 0x%x\n",
        FUNC_7(FUNC_3(VAR_21)));


 VAR_22 = FUNC_6(VAR_21);
 VAR_23 = FUNC_7(VAR_22);
 VAR_23 &= ~(7 << 19);
 VAR_23 |= (VAR_20->fdi_lanes - 1) << 19;
 VAR_23 &= ~(VAR_2 | VAR_3);
 VAR_23 |= VAR_5;
 VAR_23 &= ~VAR_9;
 VAR_23 |= VAR_1;
 VAR_23 |= VAR_0;
 FUNC_8(VAR_22, VAR_23 | VAR_15);

 FUNC_8(FUNC_5(VAR_21),
     VAR_14 | VAR_12);

 VAR_22 = FUNC_2(VAR_21);
 VAR_23 = FUNC_7(VAR_22);
 VAR_23 &= ~VAR_2;
 VAR_23 &= ~VAR_8;
 VAR_23 |= VAR_4;
 VAR_23 |= VAR_0;
 FUNC_8(VAR_22, VAR_23 | VAR_11);

 FUNC_9(VAR_22);
 FUNC_11(150);

 for (VAR_24 = 0; VAR_24 < 4; VAR_24++) {
  VAR_22 = FUNC_6(VAR_21);
  VAR_23 = FUNC_7(VAR_22);
  VAR_23 &= ~VAR_9;
  VAR_23 |= VAR_16[VAR_24];
  FUNC_8(VAR_22, VAR_23);

  FUNC_9(VAR_22);
  FUNC_11(500);

  VAR_22 = FUNC_3(VAR_21);
  VAR_23 = FUNC_7(VAR_22);
  FUNC_0("FDI_RX_IIR 0x%x\n", VAR_23);

  if (VAR_23 & VAR_10 ||
      (FUNC_7(VAR_22) & VAR_10)) {
   FUNC_8(VAR_22, VAR_23 | VAR_10);
   FUNC_0("FDI train 1 done, level %i.\n", VAR_24);
   break;
  }
 }
 if (VAR_24 == 4)
  FUNC_1("FDI train 1 fail!\n");


 VAR_22 = FUNC_6(VAR_21);
 VAR_23 = FUNC_7(VAR_22);
 VAR_23 &= ~VAR_3;
 VAR_23 |= VAR_7;
 VAR_23 &= ~VAR_9;
 VAR_23 |= VAR_1;
 FUNC_8(VAR_22, VAR_23);

 VAR_22 = FUNC_2(VAR_21);
 VAR_23 = FUNC_7(VAR_22);
 VAR_23 &= ~VAR_8;
 VAR_23 |= VAR_6;
 FUNC_8(VAR_22, VAR_23);

 FUNC_9(VAR_22);
 FUNC_11(150);

 for (VAR_24 = 0; VAR_24 < 4; VAR_24++) {
  VAR_22 = FUNC_6(VAR_21);
  VAR_23 = FUNC_7(VAR_22);
  VAR_23 &= ~VAR_9;
  VAR_23 |= VAR_16[VAR_24];
  FUNC_8(VAR_22, VAR_23);

  FUNC_9(VAR_22);
  FUNC_11(500);

  VAR_22 = FUNC_3(VAR_21);
  VAR_23 = FUNC_7(VAR_22);
  FUNC_0("FDI_RX_IIR 0x%x\n", VAR_23);

  if (VAR_23 & VAR_13) {
   FUNC_8(VAR_22, VAR_23 | VAR_13);
   FUNC_0("FDI train 2 done, level %i.\n", VAR_24);
   break;
  }
 }
 if (VAR_24 == 4)
  FUNC_1("FDI train 2 fail!\n");

 FUNC_0("FDI train done.\n");
}
