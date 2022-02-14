
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int bits_per_pixel; int xres; int yres; } ;
struct TYPE_3__ {scalar_t__ visual; } ;
struct fb_info {int par; TYPE_2__ var; scalar_t__ pseudo_palette; TYPE_1__ fix; } ;
struct fb_fillrect {int dy; int dx; int width; int height; int rop; size_t color; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_0 (struct fb_info*,int,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_17 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct fb_info *VAR_18, const struct fb_fillrect *VAR_19)
{
 u32 VAR_20, VAR_21;
 u32 VAR_22;
 u16 VAR_23 = (VAR_18->var.bits_per_pixel >> 3);


 FUNC_3(&VAR_17);


 VAR_20 = (VAR_23 * VAR_18->var.xres);


 VAR_21 = ((VAR_19->dy * VAR_20) + (VAR_23 * VAR_19->dx));

 FUNC_1("(solidfill) dx=%d, dy=%d, stride=%d, dest=%d\n"
   "(solidfill) : rect_width=%d, rect_height=%d\n",
    VAR_19->dx, VAR_19->dy, VAR_20, VAR_21,
    VAR_19->width - 1, VAR_19->height - 1);

 FUNC_1("(solidfill) : xres=%d, yres=%d, bpp=%d\n",
    VAR_18->var.xres, VAR_18->var.yres,
    VAR_18->var.bits_per_pixel);
 FUNC_1("(solidfill) : rop=%d\n", VAR_19->rop);


 FUNC_2(VAR_18->par, VAR_5, (VAR_21 & 0x00ff));
 FUNC_2(VAR_18->par, VAR_6, ((VAR_21 >> 8) & 0x00ff));
 FUNC_2(VAR_18->par, VAR_7, ((VAR_21 >> 16) & 0x00ff));


 FUNC_2(VAR_18->par, VAR_15, ((VAR_19->width) & 0x00ff) - 1);
 FUNC_2(VAR_18->par, VAR_16, (VAR_19->width >> 8));


 FUNC_2(VAR_18->par, VAR_10, ((VAR_19->height) & 0x00ff) - 1);
 FUNC_2(VAR_18->par, VAR_11, (VAR_19->height >> 8));

 if (VAR_18->fix.visual == VAR_2 ||
  VAR_18->fix.visual == VAR_1) {
  VAR_22 = ((u32 *)VAR_18->pseudo_palette)[VAR_19->color];
  FUNC_1("(solidfill) truecolor/directcolor\n");
  FUNC_1("(solidfill) pseudo_palette[%d] = %d\n", VAR_19->color, VAR_22);
 } else {
  VAR_22 = VAR_19->color;
  FUNC_1("(solidfill) color = %d\n", VAR_19->color);
 }


 FUNC_2(VAR_18->par, VAR_8, (VAR_22 & 0xff));
 FUNC_2(VAR_18->par, VAR_9, (VAR_22 >> 8) & 0xff);


 FUNC_2(VAR_18->par, VAR_3, 0x0);


 FUNC_2(VAR_18->par, VAR_14, VAR_0);


 FUNC_2(VAR_18->par, VAR_4, (VAR_18->var.bits_per_pixel >> 4));


 FUNC_2(VAR_18->par, VAR_12, (VAR_20 >> 1) & 0x00ff);
 FUNC_2(VAR_18->par, VAR_13, (VAR_20 >> 9));


 FUNC_2(VAR_18->par, VAR_3, 0x80);


 FUNC_0(VAR_18, 0x80, 8000);


 FUNC_4(&VAR_17);
}
