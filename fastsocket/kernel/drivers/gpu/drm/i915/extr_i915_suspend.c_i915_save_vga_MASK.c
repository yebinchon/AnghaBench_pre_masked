
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int saveMSR; int* saveCR; int* saveGR; int* saveSR; void* saveAR_INDEX; int * saveAR; void* saveDACMASK; void* saveVGACNTRL; void* saveVGA_PD; void* saveVGA1; void* saveVGA0; } ;
struct drm_i915_private {TYPE_1__ regfile; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,void*) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct drm_device*,int ,int,int ) ;
 int FUNC_4 (struct drm_device*,int ,int ,int) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_7(struct drm_device *VAR_17)
{
 struct drm_i915_private *VAR_18 = VAR_17->dev_private;
 int VAR_19;
 u16 VAR_20, VAR_21, VAR_22;


 VAR_18->regfile.saveVGA0 = FUNC_0(VAR_0);
 VAR_18->regfile.saveVGA1 = FUNC_0(VAR_1);
 VAR_18->regfile.saveVGA_PD = FUNC_0(VAR_12);
 VAR_18->regfile.saveVGACNTRL = FUNC_0(FUNC_5(VAR_17));


 VAR_18->regfile.saveDACMASK = FUNC_1(VAR_7);


 VAR_18->regfile.saveMSR = FUNC_1(VAR_11);
 if (VAR_18->regfile.saveMSR & VAR_10) {
  VAR_20 = VAR_5;
  VAR_21 = VAR_3;
  VAR_22 = VAR_15;
 } else {
  VAR_20 = VAR_6;
  VAR_21 = VAR_4;
  VAR_22 = VAR_16;
 }


 FUNC_6(VAR_17, VAR_20, VAR_21, 0x11,
      FUNC_4(VAR_17, VAR_20, VAR_21, 0x11) &
      (~0x80));
 for (VAR_19 = 0; VAR_19 <= 0x24; VAR_19++)
  VAR_18->regfile.saveCR[VAR_19] =
   FUNC_4(VAR_17, VAR_20, VAR_21, VAR_19);

 VAR_18->regfile.saveCR[0x11] &= ~0x80;


 FUNC_1(VAR_22);
 VAR_18->regfile.saveAR_INDEX = FUNC_1(VAR_2);
 for (VAR_19 = 0; VAR_19 <= 0x14; VAR_19++)
  VAR_18->regfile.saveAR[VAR_19] = FUNC_3(VAR_17, VAR_22, VAR_19, 0);
 FUNC_1(VAR_22);
 FUNC_2(VAR_2, VAR_18->regfile.saveAR_INDEX);
 FUNC_1(VAR_22);


 for (VAR_19 = 0; VAR_19 < 9; VAR_19++)
  VAR_18->regfile.saveGR[VAR_19] =
   FUNC_4(VAR_17, VAR_9, VAR_8, VAR_19);

 VAR_18->regfile.saveGR[0x10] =
  FUNC_4(VAR_17, VAR_9, VAR_8, 0x10);
 VAR_18->regfile.saveGR[0x11] =
  FUNC_4(VAR_17, VAR_9, VAR_8, 0x11);
 VAR_18->regfile.saveGR[0x18] =
  FUNC_4(VAR_17, VAR_9, VAR_8, 0x18);


 for (VAR_19 = 0; VAR_19 < 8; VAR_19++)
  VAR_18->regfile.saveSR[VAR_19] =
   FUNC_4(VAR_17, VAR_14, VAR_13, VAR_19);
}
