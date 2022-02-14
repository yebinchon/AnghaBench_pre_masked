
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_crtc {int fdi_lanes; int ddi_pll_sel; } ;
struct drm_i915_private {int fdi_rx_config; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (int) ;
 int VAR_15 ;
 int FUNC_7 (int) ;
 int VAR_16 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 int VAR_17 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int* VAR_21 ;
 int FUNC_13 (struct drm_i915_private*,int ) ;
 struct intel_crtc* FUNC_14 (struct drm_crtc*) ;
 int FUNC_15 (int) ;

void FUNC_16(struct drm_crtc *VAR_22)
{
 struct drm_device *VAR_23 = VAR_22->dev;
 struct drm_i915_private *VAR_24 = VAR_23->dev_private;
 struct intel_crtc *VAR_25 = FUNC_14(VAR_22);
 u32 VAR_26, VAR_27, VAR_28;






 FUNC_9(VAR_19, FUNC_7(2) |
      FUNC_6(2) |
      VAR_16 | VAR_12);


 VAR_28 = VAR_24->fdi_rx_config | VAR_11 |
       VAR_13 | ((VAR_25->fdi_lanes - 1) << 19);
 FUNC_9(VAR_18, VAR_28);
 FUNC_11(VAR_18);
 FUNC_15(220);


 VAR_28 |= VAR_9;
 FUNC_9(VAR_18, VAR_28);


 FUNC_9(FUNC_10(VAR_17), VAR_25->ddi_pll_sel);



 for (VAR_27 = 0; VAR_27 < FUNC_0(VAR_21) * 2; VAR_27++) {

  FUNC_9(FUNC_2(VAR_17),
     VAR_3 |
     VAR_2 |
     VAR_6 |
     VAR_1);





  FUNC_9(FUNC_1(VAR_17),
      VAR_0 |
      ((VAR_25->fdi_lanes - 1) << 1) |
      VAR_21[VAR_27 / 2]);
  FUNC_11(FUNC_1(VAR_17));

  FUNC_15(600);


  FUNC_9(VAR_20, FUNC_12(64));


  VAR_28 |= VAR_10 | VAR_8;
  FUNC_9(VAR_18, VAR_28);
  FUNC_11(VAR_18);


  FUNC_15(30);


  VAR_26 = FUNC_8(VAR_19);
  VAR_26 &= ~(VAR_15 | VAR_14);
  FUNC_9(VAR_19, VAR_26);
  FUNC_11(VAR_19);


  FUNC_15(5);

  VAR_26 = FUNC_8(FUNC_3(VAR_17));
  if (VAR_26 & VAR_7) {
   FUNC_4("FDI link training done on step %d\n", VAR_27);


   FUNC_9(FUNC_2(VAR_17),
       VAR_3 |
       VAR_5 |
       VAR_2 |
       VAR_1);

   return;
  }

  VAR_26 = FUNC_8(FUNC_1(VAR_17));
  VAR_26 &= ~VAR_0;
  FUNC_9(FUNC_1(VAR_17), VAR_26);
  FUNC_11(FUNC_1(VAR_17));


  VAR_26 = FUNC_8(FUNC_2(VAR_17));
  VAR_26 &= ~(VAR_1 | VAR_4);
  VAR_26 |= VAR_6;
  FUNC_9(FUNC_2(VAR_17), VAR_26);
  FUNC_11(FUNC_2(VAR_17));

  FUNC_13(VAR_24, VAR_17);

  VAR_28 &= ~VAR_10;
  FUNC_9(VAR_18, VAR_28);
  FUNC_11(VAR_18);


  VAR_26 = FUNC_8(VAR_19);
  VAR_26 &= ~(VAR_15 | VAR_14);
  VAR_26 |= FUNC_7(2) | FUNC_6(2);
  FUNC_9(VAR_19, VAR_26);
  FUNC_11(VAR_19);
 }

 FUNC_5("FDI link training failed!\n");
}
