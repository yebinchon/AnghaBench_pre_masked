
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int P; int N; int M; } ;
struct i810fb_par {int pixconf; int bltcntl; int depth; int blit_bpp; int pitch; int watermark; TYPE_2__ regs; } ;
struct TYPE_3__ {int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; int pixclock; scalar_t__ nonstd; TYPE_1__ green; int yres_virtual; int xres_virtual; int yres; int xres; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i810fb_par*,int ,int) ;
 int FUNC_1 (int ,int *,int *,int *) ;
 int FUNC_2 (struct fb_var_screeninfo const*,struct i810fb_par*) ;
 int FUNC_3 (struct fb_var_screeninfo const*,struct i810fb_par*,int ,int ) ;

__attribute__((used)) static void FUNC_4(const struct fb_var_screeninfo *VAR_8,
         struct i810fb_par *VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_10 = VAR_8->xres;
 VAR_11 = VAR_8->yres;
 VAR_12 = VAR_8->xres_virtual;
 VAR_13 = VAR_8->yres_virtual;

 switch (VAR_8->bits_per_pixel) {
 case 8:
  VAR_9->pixconf = VAR_7;
  VAR_9->bltcntl = 0;
  VAR_9->depth = 1;
  VAR_9->blit_bpp = VAR_2;
  break;
 case 16:
  if (VAR_8->green.length == 5)
   VAR_9->pixconf = VAR_3;
  else
   VAR_9->pixconf = VAR_4;
  VAR_9->bltcntl = 16;
  VAR_9->depth = 2;
  VAR_9->blit_bpp = VAR_0;
  break;
 case 24:
  VAR_9->pixconf = VAR_5;
  VAR_9->bltcntl = 32;
  VAR_9->depth = 3;
  VAR_9->blit_bpp = VAR_1;
  break;
 case 32:
  VAR_9->pixconf = VAR_6;
  VAR_9->bltcntl = 0;
  VAR_9->depth = 4;
  VAR_9->blit_bpp = 3 << 24;
  break;
 }
 if (VAR_8->nonstd && VAR_8->bits_per_pixel != 8)
  VAR_9->pixconf |= 1 << 27;

 FUNC_1(VAR_8->pixclock, &VAR_9->regs.M,
         &VAR_9->regs.N, &VAR_9->regs.P);
 FUNC_3(VAR_8, VAR_9, VAR_10, VAR_11);

 VAR_9->watermark = FUNC_2(VAR_8, VAR_9);
 VAR_9->pitch = FUNC_0(VAR_9, VAR_12, VAR_8->bits_per_pixel);
}
