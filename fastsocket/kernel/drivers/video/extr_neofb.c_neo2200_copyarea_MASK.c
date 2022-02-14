
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
typedef int u32 ;
struct neofb_par {TYPE_3__* neo2200; } ;
struct TYPE_5__ {int line_length; } ;
struct TYPE_4__ {int bits_per_pixel; } ;
struct fb_info {TYPE_2__ fix; TYPE_1__ var; struct neofb_par* par; } ;
struct fb_copyarea {int sx; int sy; int dx; int dy; int height; int width; } ;
struct TYPE_6__ {int xyExt; int dstStart; int srcStart; int bltCntl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fb_info*,int) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void
FUNC_2(struct fb_info *VAR_5, const struct fb_copyarea *VAR_6)
{
 u32 VAR_7 = VAR_6->sx, VAR_8 = VAR_6->sy, VAR_9 = VAR_6->dx, VAR_10 = VAR_6->dy;
 struct neofb_par *VAR_11 = VAR_5->par;
 u_long VAR_12, VAR_13, VAR_14;

 VAR_14 = VAR_3 | VAR_4 | 0x0C0000;

 if ((VAR_10 > VAR_8) || ((VAR_10 == VAR_8) && (VAR_9 > VAR_7))) {

  VAR_8 += (VAR_6->height - 1);
  VAR_10 += (VAR_6->height - 1);
  VAR_7 += (VAR_6->width - 1);
  VAR_9 += (VAR_6->width - 1);

  VAR_14 |= VAR_2 | VAR_0 | VAR_1;
 }

 VAR_12 = VAR_7 * (VAR_5->var.bits_per_pixel >> 3) + VAR_8*VAR_5->fix.line_length;
 VAR_13 = VAR_9 * (VAR_5->var.bits_per_pixel >> 3) + VAR_10*VAR_5->fix.line_length;

 FUNC_0(VAR_5, 4);


 FUNC_1(VAR_14, &VAR_11->neo2200->bltCntl);

 FUNC_1(VAR_12, &VAR_11->neo2200->srcStart);
 FUNC_1(VAR_13, &VAR_11->neo2200->dstStart);
 FUNC_1((VAR_6->height << 16) | (VAR_6->width & 0xffff),
        &VAR_11->neo2200->xyExt);
}
