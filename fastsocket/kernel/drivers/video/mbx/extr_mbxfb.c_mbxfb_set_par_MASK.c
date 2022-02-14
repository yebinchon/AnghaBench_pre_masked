
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ushort ;
typedef int u32 ;
struct pixclock_div {int p; int n; int m; } ;
struct TYPE_4__ {int length; } ;
struct fb_var_screeninfo {int xres_virtual; int bits_per_pixel; int xres; int yres; int hsync_len; int left_margin; int right_margin; int vsync_len; int upper_margin; int lower_margin; int pixclock; TYPE_2__ green; } ;
struct TYPE_3__ {int line_length; int visual; } ;
struct fb_info {struct fb_var_screeninfo var; TYPE_1__ fix; int cmap; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_21 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_22 (int) ;
 int FUNC_23 (int) ;
 int FUNC_24 (int) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int ,struct pixclock_div*) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int,int ) ;

__attribute__((used)) static int FUNC_29(struct fb_info *VAR_28)
{
 struct fb_var_screeninfo *VAR_29 = &VAR_28->var;
 struct pixclock_div VAR_30;
 ushort VAR_31, VAR_32, VAR_33, VAR_34;
 ushort VAR_35, VAR_36, VAR_37, VAR_38;
 u32 VAR_39 = FUNC_27(VAR_19);
 u32 VAR_40 = FUNC_27(VAR_17);

 VAR_28->fix.line_length = VAR_29->xres_virtual * VAR_29->bits_per_pixel / 8;


 VAR_39 &= ~(FUNC_21(VAR_20));

 if (VAR_28->var.bits_per_pixel == 8) {
  return -VAR_15;
 } else {
  FUNC_25(&VAR_28->cmap);
  VAR_39 &= ~VAR_27;

  VAR_28->fix.visual = VAR_16;
  switch (VAR_28->var.bits_per_pixel) {
  case 16:
   if (VAR_28->var.green.length == 5)
    VAR_39 |= VAR_21;
   else
    VAR_39 |= VAR_23;
   break;
  case 24:
   VAR_39 |= VAR_24;
   break;
  case 32:
   VAR_39 |= VAR_22;
   break;
  }
 }


 VAR_39 &= ~(FUNC_21(VAR_26) | FUNC_21(VAR_25));
 VAR_39 |= FUNC_24(VAR_28->var.xres) |
  FUNC_23(VAR_28->var.yres);
 FUNC_28(VAR_39, VAR_19);

 VAR_40 &= ~(FUNC_21(VAR_18));
 VAR_40 |= FUNC_22(VAR_28->var.xres * VAR_28->var.bits_per_pixel /
     (8 * 16) - 1);
 FUNC_28(VAR_40, VAR_17);


 VAR_29->pixclock = FUNC_26(VAR_28->var.pixclock, &VAR_30);

 FUNC_28((FUNC_8(VAR_30.m) | FUNC_9(VAR_30.n) |
  FUNC_10(VAR_30.p) | VAR_7), VAR_6);

 VAR_31 = VAR_29->hsync_len;
 VAR_34 = VAR_31 + VAR_29->left_margin;
 VAR_33 = VAR_34 + VAR_29->xres;
 VAR_32 = VAR_33 + VAR_29->right_margin;

 VAR_35 = VAR_29->vsync_len;
 VAR_38 = VAR_35 + VAR_29->upper_margin;
 VAR_37 = VAR_38 + VAR_29->yres;
 VAR_36 = VAR_37 + VAR_29->lower_margin;

 FUNC_28((FUNC_2(VAR_31) | FUNC_3(VAR_32)), VAR_1);
 FUNC_28((FUNC_5(VAR_34) | FUNC_4(VAR_34)), VAR_2);
 FUNC_28((FUNC_6(VAR_33) | FUNC_7(VAR_33)), VAR_3);
 FUNC_28((FUNC_1(VAR_34) | FUNC_0(VAR_33)), VAR_0);

 FUNC_28((FUNC_15(VAR_35) | FUNC_16(VAR_36)), VAR_12);
 FUNC_28((FUNC_18(VAR_38) | FUNC_17(VAR_38)), VAR_13);
 FUNC_28((FUNC_20(VAR_37) | FUNC_19(VAR_37)), VAR_14);
 FUNC_28((FUNC_12(VAR_38) | FUNC_11(VAR_37)), VAR_10);
 FUNC_28((FUNC_13(VAR_37) | FUNC_14(VAR_35)), VAR_11);

 FUNC_28((FUNC_27(VAR_8) | VAR_9), VAR_8);

 FUNC_28(VAR_5, VAR_4);

 return 0;
}
