
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fb_var_screeninfo {int xres; int left_margin; int right_margin; int hsync_len; int yres; int upper_margin; int lower_margin; int vsync_len; int xres_virtual; int bits_per_pixel; unsigned long pixclock; int yres_virtual; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(struct fb_var_screeninfo
 *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9;

 VAR_7 = VAR_6->xres + VAR_6->left_margin +
  VAR_6->right_margin + VAR_6->hsync_len;
 VAR_8 = VAR_6->yres + VAR_6->upper_margin +
  VAR_6->lower_margin + VAR_6->vsync_len;
 if ((VAR_6->xres_virtual * (VAR_6->bits_per_pixel >> 3)) & 0x1F) {


  VAR_6->xres_virtual = (VAR_6->xres_virtual + 31) & ~31;
 }

 VAR_7 = VAR_6->xres + VAR_6->left_margin +
  VAR_6->right_margin + VAR_6->hsync_len;
 VAR_8 = VAR_6->yres + VAR_6->upper_margin +
  VAR_6->lower_margin + VAR_6->vsync_len;
 VAR_9 = 1000000000UL / VAR_6->pixclock * 1000;
 VAR_9 /= (VAR_7 * VAR_8);

 VAR_4 = VAR_6->xres;
 VAR_5 = VAR_6->yres;
 VAR_2 = VAR_6->xres_virtual;
 VAR_3 = VAR_6->yres_virtual;
 VAR_0 = VAR_6->bits_per_pixel;
 VAR_1 = FUNC_0(VAR_6->xres, VAR_6->yres,
  VAR_9);
}
