
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int vdisplay; int hdisplay; } ;
struct radeon_encoder_lvds {int panel_pwr_delay; int panel_vcc_delay; int lvds_gen_cntl; int panel_digon_delay; int panel_blon_delay; int use_bios_dividers; int panel_ref_divider; int panel_post_divider; int panel_fb_divider; TYPE_1__ native_mode; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 struct radeon_encoder_lvds* FUNC_4 (int,int ) ;

__attribute__((used)) static struct radeon_encoder_lvds *FUNC_5(struct
          radeon_device
          *VAR_18)
{
 struct radeon_encoder_lvds *VAR_19 = ((void*)0);
 uint32_t VAR_20, VAR_21;
 uint32_t VAR_22, VAR_23;
 uint32_t VAR_24 = FUNC_1(VAR_12);

 VAR_19 = FUNC_4(sizeof(struct radeon_encoder_lvds), VAR_0);

 if (!VAR_19)
  return ((void*)0);

 VAR_20 = FUNC_1(VAR_5);
 VAR_21 = FUNC_1(VAR_4);


 VAR_19->panel_pwr_delay = 200;
 VAR_19->panel_vcc_delay = 2000;

 VAR_19->lvds_gen_cntl = FUNC_1(VAR_9);
 VAR_19->panel_digon_delay = (VAR_24 >> VAR_10) & 0xf;
 VAR_19->panel_blon_delay = (VAR_24 >> VAR_11) & 0xf;

 if (VAR_20 & VAR_17)
  VAR_19->native_mode.vdisplay =
      ((VAR_20 & VAR_16) >>
       VAR_15) + 1;
 else
  VAR_19->native_mode.vdisplay =
      (FUNC_1(VAR_3) >> 16) + 1;

 if (VAR_21 & VAR_8)
  VAR_19->native_mode.hdisplay =
      (((VAR_21 & VAR_7) >>
        VAR_6) + 1) * 8;
 else
  VAR_19->native_mode.hdisplay =
      ((FUNC_1(VAR_2) >> 16) + 1) * 8;

 if ((VAR_19->native_mode.hdisplay < 640) ||
     (VAR_19->native_mode.vdisplay < 480)) {
  VAR_19->native_mode.hdisplay = 640;
  VAR_19->native_mode.vdisplay = 480;
 }

 VAR_22 = FUNC_3(VAR_1 + 1) & 0x3;
 VAR_23 = FUNC_2(VAR_13 + VAR_22);
 if ((VAR_23 & 0x000707ff) == 0x1bb)
  VAR_19->use_bios_dividers = 0;
 else {
  VAR_19->panel_ref_divider =
      FUNC_2(VAR_14) & 0x3ff;
  VAR_19->panel_post_divider = (VAR_23 >> 16) & 0x7;
  VAR_19->panel_fb_divider = VAR_23 & 0x7ff;

  if ((VAR_19->panel_ref_divider != 0) &&
      (VAR_19->panel_fb_divider > 3))
   VAR_19->use_bios_dividers = 1;
 }
 VAR_19->panel_vcc_delay = 200;

 FUNC_0("Panel info derived from registers\n");
 FUNC_0("Panel Size %dx%d\n", VAR_19->native_mode.hdisplay,
   VAR_19->native_mode.vdisplay);

 return VAR_19;
}
