
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_t {scalar_t__ lcd_mode; scalar_t__ lcd_panel_id; int xres1; int yres1; scalar_t__ bpp; scalar_t__ bpp1; scalar_t__ refresh; scalar_t__ refresh1; scalar_t__ samm; int primary_dev; scalar_t__ lcd_dsp_cent; scalar_t__ lcd; scalar_t__ dvi; scalar_t__ crt; } ;
struct TYPE_4__ {TYPE_1__* lvds_setting_info; } ;
struct TYPE_3__ {void* lcd_mode; void* display_method; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 () ;
 void* VAR_15 ;
 void* VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_2__* VAR_24 ;

__attribute__((used)) static void FUNC_5(struct device_t VAR_25)
{

 int VAR_26 = VAR_8;
 if (VAR_25.crt)
  VAR_26 |= VAR_0;
 if (VAR_25.dvi)
  VAR_26 |= VAR_1;
 if (VAR_25.lcd)
  VAR_26 |= VAR_3;

 FUNC_0(VAR_26);


 if (VAR_11) {
  if (VAR_25.lcd_dsp_cent) {
   VAR_24->lvds_setting_info->display_method =
    VAR_15 = VAR_2;
  } else {
   VAR_24->lvds_setting_info->display_method =
    VAR_15 = VAR_4;
  }

  if (VAR_25.lcd_mode == VAR_7) {
   VAR_24->lvds_setting_info->lcd_mode =
    VAR_16 = VAR_7;
  } else {
   VAR_24->lvds_setting_info->lcd_mode =
    VAR_16 = VAR_5;
  }

  if (VAR_25.lcd_panel_id <= VAR_6) {
   VAR_17 = VAR_25.lcd_panel_id;
   FUNC_1();
  }
 }


 if (!VAR_25.xres1)
  VAR_22 = 640;
 else
  VAR_22 = VAR_25.xres1;
 if (!VAR_25.yres1)
  VAR_23 = 480;
 else
  VAR_23 = VAR_25.yres1;
 if (VAR_25.bpp != 0)
  VAR_13 = VAR_25.bpp;
 if (VAR_25.bpp1 != 0)
  VAR_14 = VAR_25.bpp1;
 if (VAR_25.refresh != 0)
  VAR_19 = VAR_25.refresh;
 if (VAR_25.refresh1 != 0)
  VAR_20 = VAR_25.refresh1;
 if ((VAR_25.samm == VAR_9) || (VAR_25.samm == VAR_10))
  VAR_12 = VAR_25.samm;
 VAR_18 = VAR_25.primary_dev;

 FUNC_3(0);
 FUNC_4(VAR_12 ? VAR_21 : 0);
 FUNC_2();
}
