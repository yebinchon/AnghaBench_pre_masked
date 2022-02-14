
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct intel_dvo_device {int dummy; } ;
struct drm_display_mode {int clock; int hdisplay; int vdisplay; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct intel_dvo_device*,int) ;
 int FUNC_2 (struct intel_dvo_device*) ;
 int FUNC_3 (struct intel_dvo_device*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct intel_dvo_device *VAR_22,
       struct drm_display_mode *VAR_23,
       struct drm_display_mode *VAR_24)
{
 uint8_t VAR_25, VAR_26;
 uint8_t VAR_27, VAR_28, VAR_29;
 uint8_t VAR_30;
 uint8_t VAR_31, VAR_32;
 uint8_t VAR_33;

 FUNC_0("Registers before mode setting\n");
 FUNC_2(VAR_22);


 if (VAR_23->clock < 100000) {
  VAR_27 = VAR_6 | VAR_2;
  VAR_25 = VAR_9 |
   (2 << VAR_11) |
   (13 << VAR_12);
  VAR_26 = VAR_15 |
   (2 << VAR_16) |
   (3 << VAR_13);
  VAR_28 = (1 << VAR_5) |
   (0 << VAR_20);
 } else {
  VAR_27 = VAR_6 | VAR_1;
  VAR_25 = VAR_9 |
   (2 << VAR_11) |
   (3 << VAR_12);
  VAR_25 = 35;
  VAR_28 = (3 << VAR_5) |
   (0 << VAR_20);
  if (1) {
   VAR_27 |= VAR_7;
   VAR_26 = VAR_15 |
    (2 << VAR_16) |
    (13 << VAR_13);
  } else {
   VAR_26 = VAR_15 |
    (1 << VAR_16) |
    (13 << VAR_13);
  }
 }

 VAR_30 = VAR_23->hdisplay & 0x00ff;

 VAR_32 = VAR_23->vdisplay & 0x00ff;
 VAR_31 = VAR_23->hdisplay & 0x00ff;

 VAR_33 = ((VAR_23->hdisplay & 0x0700) >> 8) |
       (((VAR_23->vdisplay & 0x0700) >> 8) << 3);

 VAR_29 = VAR_18 |
     (VAR_23->hdisplay & 0x0700) >> 8;

 FUNC_1(VAR_22, 0);
 FUNC_3(VAR_22, VAR_3,
   VAR_30);
 FUNC_3(VAR_22, VAR_4,
   VAR_31);
 FUNC_3(VAR_22, VAR_21,
   VAR_32);
 FUNC_3(VAR_22, VAR_0,
   VAR_33);
 FUNC_3(VAR_22, VAR_14, VAR_26);
 FUNC_3(VAR_22, VAR_10, VAR_25);
 FUNC_3(VAR_22, VAR_8, VAR_28);
 FUNC_3(VAR_22, VAR_19, VAR_27);


 FUNC_3(VAR_22, VAR_17, VAR_29);

 FUNC_0("Registers after mode setting\n");
 FUNC_2(VAR_22);
}
