
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tmiofb_par {scalar_t__ lcr; } ;
struct tmio_fb_data {int (* lcd_set_power ) (struct platform_device*,int) ;int (* lcd_mode ) (struct platform_device*,struct fb_videomode*) ;} ;
struct TYPE_3__ {struct mfd_cell* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mfd_cell {struct tmio_fb_data* driver_data; } ;
struct fb_videomode {int hsync_len; int left_margin; int xres; int right_margin; int vsync_len; int upper_margin; int yres; int lower_margin; } ;
struct TYPE_4__ {int line_length; } ;
struct fb_info {TYPE_2__ fix; struct tmiofb_par* par; struct fb_videomode* mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_0 (int) ;
 struct fb_info* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,int) ;
 int FUNC_3 (struct platform_device*,struct fb_videomode*) ;
 int FUNC_4 (struct platform_device*,int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct platform_device *VAR_21)
{
 struct mfd_cell *VAR_22 = VAR_21->dev.platform_data;
 struct tmio_fb_data *VAR_23 = VAR_22->driver_data;
 struct fb_info *VAR_24 = FUNC_1(VAR_21);
 struct fb_videomode *VAR_25 = VAR_24->mode;
 struct tmiofb_par *VAR_26 = VAR_24->par;
 unsigned int VAR_27;

 FUNC_5(0, VAR_26->lcr + VAR_2);
 VAR_23->lcd_set_power(VAR_21, 0);
 FUNC_5(0x0010, VAR_26->lcr + VAR_10);
 VAR_23->lcd_mode(VAR_21, VAR_25);
 VAR_23->lcd_set_power(VAR_21, 1);

 FUNC_5(VAR_24->fix.line_length, VAR_26->lcr + VAR_17);
 FUNC_5(0, VAR_26->lcr + VAR_0);
 FUNC_5(0, VAR_26->lcr + VAR_1);
 FUNC_5(VAR_24->fix.line_length >> 16, VAR_26->lcr + VAR_15);
 FUNC_5(VAR_24->fix.line_length, VAR_26->lcr + VAR_16);
 FUNC_5(VAR_27 = 0, VAR_26->lcr + VAR_6);
 FUNC_5(VAR_27 += VAR_25->hsync_len, VAR_26->lcr + VAR_5);
 FUNC_5(VAR_27 += VAR_25->left_margin, VAR_26->lcr + VAR_3);
 FUNC_5(VAR_27 += VAR_25->xres + VAR_25->right_margin, VAR_26->lcr + VAR_7);
 FUNC_5(VAR_25->xres, VAR_26->lcr + VAR_4);
 FUNC_5(VAR_27 = 0, VAR_26->lcr + VAR_19);
 FUNC_5(VAR_27 += VAR_25->vsync_len, VAR_26->lcr + VAR_18);
 FUNC_5(VAR_27 += VAR_25->upper_margin, VAR_26->lcr + VAR_14);
 FUNC_5(VAR_27 += VAR_25->yres, VAR_26->lcr + VAR_8);
 FUNC_5(VAR_27 += VAR_25->lower_margin, VAR_26->lcr + VAR_20);
 FUNC_5(3, VAR_26->lcr + VAR_11);
 FUNC_5(1, VAR_26->lcr + VAR_2);
 FUNC_5(0x4007, VAR_26->lcr + VAR_9);
 FUNC_5(3, VAR_26->lcr + VAR_12);

 FUNC_5(0x0010, VAR_26->lcr + VAR_10);
 FUNC_0(5);
 FUNC_5(0x0014, VAR_26->lcr + VAR_10);
 FUNC_0(5);
 FUNC_5(0x0015, VAR_26->lcr + VAR_10);
 FUNC_5(0xfffa, VAR_26->lcr + VAR_13);
}
