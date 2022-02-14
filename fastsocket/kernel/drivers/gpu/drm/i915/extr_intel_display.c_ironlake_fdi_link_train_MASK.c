
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_crtc {int pipe; int plane; int fdi_lanes; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int) ;
 int VAR_8 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct drm_i915_private*,int) ;
 int FUNC_11 (struct drm_i915_private*,int) ;
 struct intel_crtc* FUNC_12 (struct drm_crtc*) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct drm_crtc *VAR_9)
{
 struct drm_device *VAR_10 = VAR_9->dev;
 struct drm_i915_private *VAR_11 = VAR_10->dev_private;
 struct intel_crtc *VAR_12 = FUNC_12(VAR_9);
 int VAR_13 = VAR_12->pipe;
 int VAR_14 = VAR_12->plane;
 u32 VAR_15, VAR_16, VAR_17;


 FUNC_10(VAR_11, VAR_13);
 FUNC_11(VAR_11, VAR_14);



 VAR_15 = FUNC_5(VAR_13);
 VAR_16 = FUNC_7(VAR_15);
 VAR_16 &= ~VAR_7;
 VAR_16 &= ~VAR_3;
 FUNC_8(VAR_15, VAR_16);
 FUNC_7(VAR_15);
 FUNC_13(150);


 VAR_15 = FUNC_6(VAR_13);
 VAR_16 = FUNC_7(VAR_15);
 VAR_16 &= ~(7 << 19);
 VAR_16 |= (VAR_12->fdi_lanes - 1) << 19;
 VAR_16 &= ~VAR_0;
 VAR_16 |= VAR_1;
 FUNC_8(VAR_15, VAR_16 | VAR_8);

 VAR_15 = FUNC_3(VAR_13);
 VAR_16 = FUNC_7(VAR_15);
 VAR_16 &= ~VAR_0;
 VAR_16 |= VAR_1;
 FUNC_8(VAR_15, VAR_16 | VAR_4);

 FUNC_9(VAR_15);
 FUNC_13(150);


 FUNC_8(FUNC_2(VAR_13), VAR_6);
 FUNC_8(FUNC_2(VAR_13), VAR_6 |
     VAR_5);

 VAR_15 = FUNC_4(VAR_13);
 for (VAR_17 = 0; VAR_17 < 5; VAR_17++) {
  VAR_16 = FUNC_7(VAR_15);
  FUNC_0("FDI_RX_IIR 0x%x\n", VAR_16);

  if ((VAR_16 & VAR_3)) {
   FUNC_0("FDI train 1 done.\n");
   FUNC_8(VAR_15, VAR_16 | VAR_3);
   break;
  }
 }
 if (VAR_17 == 5)
  FUNC_1("FDI train 1 fail!\n");


 VAR_15 = FUNC_6(VAR_13);
 VAR_16 = FUNC_7(VAR_15);
 VAR_16 &= ~VAR_0;
 VAR_16 |= VAR_2;
 FUNC_8(VAR_15, VAR_16);

 VAR_15 = FUNC_3(VAR_13);
 VAR_16 = FUNC_7(VAR_15);
 VAR_16 &= ~VAR_0;
 VAR_16 |= VAR_2;
 FUNC_8(VAR_15, VAR_16);

 FUNC_9(VAR_15);
 FUNC_13(150);

 VAR_15 = FUNC_4(VAR_13);
 for (VAR_17 = 0; VAR_17 < 5; VAR_17++) {
  VAR_16 = FUNC_7(VAR_15);
  FUNC_0("FDI_RX_IIR 0x%x\n", VAR_16);

  if (VAR_16 & VAR_7) {
   FUNC_8(VAR_15, VAR_16 | VAR_7);
   FUNC_0("FDI train 2 done.\n");
   break;
  }
 }
 if (VAR_17 == 5)
  FUNC_1("FDI train 2 fail!\n");

 FUNC_0("FDI train done\n");

}
