
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xres; int right_margin; int hsync_len; int left_margin; unsigned int yres; unsigned int lower_margin; unsigned int vsync_len; unsigned int upper_margin; int xres_virtual; int bits_per_pixel; int pixclock; } ;
struct fb_info {TYPE_1__ var; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_1)
{
 unsigned VAR_2 = VAR_1->var.xres / 8;
 unsigned VAR_3 = (VAR_1->var.xres + VAR_1->var.right_margin) / 8;
        unsigned VAR_4 = (VAR_1->var.xres + VAR_1->var.right_margin + VAR_1->var.hsync_len) / 8;
 unsigned VAR_5 = (VAR_1->var.left_margin + VAR_1->var.xres + VAR_1->var.right_margin + VAR_1->var.hsync_len) / 8;
 unsigned VAR_6 = VAR_1->var.yres;
 unsigned VAR_7 = VAR_1->var.yres + VAR_1->var.lower_margin;
 unsigned VAR_8 = VAR_1->var.yres + VAR_1->var.lower_margin + VAR_1->var.vsync_len;
 unsigned VAR_9 = VAR_1->var.upper_margin + VAR_1->var.yres + VAR_1->var.lower_margin + VAR_1->var.vsync_len;
 unsigned VAR_10 = (VAR_1->var.xres_virtual * ((VAR_1->var.bits_per_pixel+7)/8)) / 8;

 if ((VAR_1->var.xres == 640) && (VAR_1->var.yres == 480) && (VAR_1->var.pixclock == 39722)) {
   FUNC_1(0x01, 0x02);
 } else {
   FUNC_1(0x01, 0x01);
 }

 FUNC_0(0x11, (VAR_8 - 1) & 0x0f);
 FUNC_0(0x00, (VAR_5 - 5) & 0xff);
 FUNC_0(0x01, VAR_2 - 1);
 FUNC_0(0x02, VAR_2);
 FUNC_0(0x03, ((VAR_5 - 1) & 0x1f) | 0x80);
 FUNC_0(0x04, VAR_3);
 FUNC_0(0x05, (((VAR_5 - 1) & 0x20) <<2) | (VAR_4 & 0x1f));
 FUNC_0(0x3c, (VAR_5 - 1) & 0xc0);
 FUNC_0(0x06, (VAR_9 - 2) & 0xff);
 FUNC_0(0x30, (VAR_9 - 2) >> 8);
 FUNC_0(0x07, 0x00);
 FUNC_0(0x08, 0x00);
 FUNC_0(0x09, 0x00);
 FUNC_0(0x10, (VAR_7 - 1) & 0xff);
 FUNC_0(0x32, ((VAR_7 - 1) >> 8) & 0xf);
 FUNC_0(0x11, ((VAR_8 - 1) & 0x0f) | 0x80);
 FUNC_0(0x12, (VAR_6 - 1) & 0xff);
 FUNC_0(0x31, ((VAR_6 - 1) & 0xf00) >> 8);
 FUNC_0(0x13, VAR_10 & 0xff);
 FUNC_0(0x41, (VAR_10 & 0xf00) >> 8);
 FUNC_0(0x15, (VAR_7 - 1) & 0xff);
 FUNC_0(0x33, ((VAR_7 - 1) >> 8) & 0xf);
 FUNC_0(0x38, ((VAR_5 - 5) & 0x100) >> 8);
 FUNC_0(0x16, (VAR_9 - 1) & 0xff);
 FUNC_0(0x18, 0x00);

 if (VAR_1->var.xres == 640) {
   FUNC_2(0xc7, VAR_0 + 0x784);
 } else {
   FUNC_2(0x07, VAR_0 + 0x784);
 }
}
