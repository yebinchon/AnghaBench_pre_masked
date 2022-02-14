
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct intel_dvo_device {int dummy; } ;
struct drm_display_mode {int hdisplay; int vdisplay; } ;


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
 int FUNC_0 (struct intel_dvo_device*) ;
 int FUNC_1 (struct intel_dvo_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct intel_dvo_device *VAR_10,
     struct drm_display_mode *VAR_11,
     struct drm_display_mode *VAR_12)
{
 uint16_t VAR_13 = 0;
 uint16_t VAR_14;

 VAR_14 = 0;
 VAR_13 = (VAR_6 | VAR_7 |
  VAR_5);

 if (VAR_11->hdisplay != VAR_12->hdisplay ||
     VAR_11->vdisplay != VAR_12->vdisplay) {
  uint16_t VAR_15, VAR_16;

  VAR_14 |= VAR_1;
  VAR_13 |= VAR_4;
  VAR_15 = (((VAR_11->hdisplay - 1) << 16) /
      (VAR_12->hdisplay - 1)) >> 2;
  VAR_16 = (((VAR_11->vdisplay - 1) << 16) /
      (VAR_12->vdisplay - 1)) >> 2;
  FUNC_1(VAR_10, VAR_9, VAR_15);
  FUNC_1(VAR_10, VAR_8, VAR_16);
 } else {
  VAR_14 &= ~VAR_1;
  VAR_13 &= ~VAR_4;
 }
 VAR_13 &= ~VAR_3;

 FUNC_1(VAR_10, VAR_0, VAR_14);
 FUNC_1(VAR_10, VAR_2, VAR_13);

 FUNC_0(VAR_10);
}
