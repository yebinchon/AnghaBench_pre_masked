
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int yres; int upper_margin; int lower_margin; int vsync_len; int xres; int left_margin; int right_margin; int hsync_len; } ;
struct fb_info {TYPE_1__ var; struct ep93xx_fbi* par; } ;
struct ep93xx_fbi {int dummy; } ;


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
 int FUNC_0 (struct ep93xx_fbi*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_11)
{
 struct ep93xx_fbi *VAR_12 = VAR_11->par;
 unsigned int VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_13 = VAR_11->var.yres + VAR_11->var.upper_margin +
  VAR_11->var.lower_margin + VAR_11->var.vsync_len - 1;

 VAR_14 = VAR_11->var.xres + VAR_11->var.left_margin +
  VAR_11->var.right_margin + VAR_11->var.hsync_len - 1;

 FUNC_0(VAR_12, VAR_13, VAR_9);
 FUNC_0(VAR_12, VAR_14, VAR_3);

 VAR_15 = VAR_13;
 VAR_16 = VAR_13 - VAR_11->var.vsync_len;
 FUNC_0(VAR_12, VAR_15 | (VAR_16 << 16), VAR_10);

 VAR_15 = VAR_13 - VAR_11->var.vsync_len - VAR_11->var.upper_margin;
 VAR_16 = VAR_11->var.lower_margin - 1;
 FUNC_0(VAR_12, VAR_15 | (VAR_16 << 16), VAR_7);
 FUNC_0(VAR_12, VAR_15 | (VAR_16 << 16), VAR_6);

 VAR_15 = VAR_13;
 VAR_16 = VAR_13 + 1;
 FUNC_0(VAR_12, VAR_15 | (VAR_16 << 16), VAR_8);

 VAR_15 = VAR_14;
 VAR_16 = VAR_14 - VAR_11->var.hsync_len;
 FUNC_0(VAR_12, VAR_15 | (VAR_16 << 16), VAR_4);

 VAR_15 = VAR_14 - VAR_11->var.hsync_len - VAR_11->var.left_margin;
 VAR_16 = VAR_11->var.right_margin - 1;
 FUNC_0(VAR_12, VAR_15 | (VAR_16 << 16), VAR_1);
 FUNC_0(VAR_12, VAR_15 | (VAR_16 << 16), VAR_0);

 VAR_15 = VAR_14;
 VAR_16 = VAR_14;
 FUNC_0(VAR_12, VAR_15 | (VAR_16 << 16), VAR_2);

 FUNC_0(VAR_12, 0x0, VAR_5);
}
