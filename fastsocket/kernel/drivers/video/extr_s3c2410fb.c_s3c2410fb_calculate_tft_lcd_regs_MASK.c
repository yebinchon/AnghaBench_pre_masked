
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410fb_info {int dev; } ;
struct s3c2410fb_hw {int lcdcon5; int lcdcon2; int lcdcon3; int lcdcon4; int lcdcon1; } ;
struct fb_var_screeninfo {int bits_per_pixel; scalar_t__ hsync_len; scalar_t__ xres; scalar_t__ left_margin; scalar_t__ right_margin; scalar_t__ vsync_len; scalar_t__ lower_margin; scalar_t__ upper_margin; scalar_t__ yres; } ;
struct fb_info {struct fb_var_screeninfo var; struct s3c2410fb_info* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (char*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_10(const struct fb_info *VAR_10,
          struct s3c2410fb_hw *VAR_11)
{
 const struct s3c2410fb_info *VAR_12 = VAR_10->par;
 const struct fb_var_screeninfo *VAR_13 = &VAR_10->var;

 switch (VAR_13->bits_per_pixel) {
 case 1:
  VAR_11->lcdcon1 |= VAR_1;
  break;
 case 2:
  VAR_11->lcdcon1 |= VAR_3;
  break;
 case 4:
  VAR_11->lcdcon1 |= VAR_4;
  break;
 case 8:
  VAR_11->lcdcon1 |= VAR_5;
  VAR_11->lcdcon5 |= VAR_7 |
     VAR_8;
  VAR_11->lcdcon5 &= ~VAR_9;
  break;
 case 16:
  VAR_11->lcdcon1 |= VAR_0;
  VAR_11->lcdcon5 &= ~VAR_7;
  VAR_11->lcdcon5 |= VAR_9;
  break;
 case 32:
  VAR_11->lcdcon1 |= VAR_2;
  VAR_11->lcdcon5 &= ~(VAR_7 |
       VAR_9 |
       VAR_6);
  break;
 default:

  FUNC_8(VAR_12->dev, "invalid bpp %d\n",
   VAR_13->bits_per_pixel);
 }

 FUNC_9("setting vert: up=%d, low=%d, sync=%d\n",
  VAR_13->upper_margin, VAR_13->lower_margin, VAR_13->vsync_len);

 FUNC_9("setting horz: lft=%d, rt=%d, sync=%d\n",
  VAR_13->left_margin, VAR_13->right_margin, VAR_13->hsync_len);

 VAR_11->lcdcon2 = FUNC_0(VAR_13->yres - 1) |
   FUNC_1(VAR_13->upper_margin - 1) |
   FUNC_2(VAR_13->lower_margin - 1) |
   FUNC_3(VAR_13->vsync_len - 1);

 VAR_11->lcdcon3 = FUNC_4(VAR_13->right_margin - 1) |
   FUNC_5(VAR_13->left_margin - 1) |
   FUNC_6(VAR_13->xres - 1);

 VAR_11->lcdcon4 = FUNC_7(VAR_13->hsync_len - 1);
}
