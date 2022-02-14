
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct par_info {int width; int ramdac; int pitch; int fetch; int extseqmisc; int co_pixfmt; } ;
struct TYPE_4__ {int length; } ;
struct fb_var_screeninfo {int xres_virtual; int bits_per_pixel; unsigned int yres_virtual; TYPE_1__ green; } ;
struct fb_info {int dummy; } ;
struct TYPE_5__ {int line_length; unsigned int smem_len; int visual; } ;
struct TYPE_6__ {TYPE_2__ fix; struct fb_var_screeninfo var; } ;
struct cfb_info {int mem_ctl2; TYPE_3__ fb; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
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
 scalar_t__ FUNC_2 (struct par_info*,struct cfb_info*,struct fb_var_screeninfo*) ;
 scalar_t__ FUNC_3 (struct par_info*,struct cfb_info*,struct fb_var_screeninfo*) ;
 int FUNC_4 (struct cfb_info*,struct par_info*) ;
 int FUNC_5 (struct cfb_info*,struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_6(struct fb_info *VAR_18)
{
 struct cfb_info *VAR_19 = (struct cfb_info *)VAR_18;
 struct fb_var_screeninfo *VAR_20 = &VAR_19->fb.var;
 struct par_info VAR_21;
 unsigned int VAR_22;

 VAR_21.width = VAR_20->xres_virtual;
 VAR_21.ramdac = VAR_17 | VAR_15;

 switch (VAR_20->bits_per_pixel) {
 case 8:
  VAR_21.co_pixfmt = VAR_3;
  VAR_21.pitch = VAR_21.width >> 3;
  VAR_21.extseqmisc = VAR_9;
  break;

 case 16:
  VAR_21.co_pixfmt = VAR_0;
  VAR_21.pitch = VAR_21.width >> 2;

  switch (VAR_20->green.length) {
  case 6:
   VAR_21.extseqmisc = VAR_6;
   break;
  case 5:
   VAR_21.extseqmisc = VAR_5;
   break;
  case 4:
   VAR_21.extseqmisc = VAR_4;
   break;
  default:
   FUNC_0();
  }
  break;

 case 24:
  VAR_21.co_pixfmt = VAR_1;
  VAR_21.width *= 3;
  VAR_21.pitch = VAR_21.width >> 3;
  VAR_21.ramdac |= (VAR_14 | VAR_16);
  VAR_21.extseqmisc = VAR_7;
  break;

 case 32:
  VAR_21.co_pixfmt = VAR_2;
  VAR_21.pitch = VAR_21.width >> 1;
  VAR_21.ramdac |= (VAR_14 | VAR_16);
  VAR_21.extseqmisc = VAR_8;
  break;

 default:
  FUNC_0();
 }
 FUNC_1(FUNC_2(&VAR_21, VAR_19, VAR_20) != 0);
 FUNC_1(FUNC_3(&VAR_21, VAR_19, VAR_20) != 0);

 VAR_21.width -= 1;
 VAR_21.fetch = VAR_21.pitch;
 if (!(VAR_19->mem_ctl2 & VAR_13))
  VAR_21.fetch <<= 1;
 VAR_21.fetch += 1;

 VAR_19->fb.fix.line_length = VAR_20->xres_virtual * VAR_20->bits_per_pixel / 8;
 VAR_22 = VAR_19->fb.fix.line_length * VAR_20->yres_virtual;
 FUNC_1(VAR_22 > VAR_19->fb.fix.smem_len);







 if (VAR_20->bits_per_pixel == 8)
  VAR_19->fb.fix.visual = VAR_11;
 else if (VAR_21.ramdac & VAR_14)
  VAR_19->fb.fix.visual = VAR_12;
 else
  VAR_19->fb.fix.visual = VAR_10;

 FUNC_4(VAR_19, &VAR_21);
 FUNC_5(VAR_19, VAR_20);

 return 0;
}
