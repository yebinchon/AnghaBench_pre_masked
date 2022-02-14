
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {scalar_t__ visual; int line_length; } ;
struct TYPE_3__ {int bits_per_pixel; int xres_virtual; int yres_virtual; } ;
struct fb_info {scalar_t__ state; int flags; TYPE_2__ fix; TYPE_1__ var; struct cirrusfb_info* par; } ;
struct fb_fillrect {size_t color; int width; int height; int dx; int dy; } ;
struct cirrusfb_info {size_t* pseudo_palette; int regbase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct fb_info*,struct fb_fillrect const*) ;
 int FUNC_1 (int ,int,int,int,int,int,size_t,size_t,int ,int) ;
 int FUNC_2 (struct fb_fillrect*,struct fb_fillrect const*,int) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_3,
         const struct fb_fillrect *VAR_4)
{
 struct fb_fillrect VAR_5;
 int VAR_6, VAR_7;
 struct cirrusfb_info *VAR_8 = VAR_3->par;
 int VAR_9 = VAR_3->var.bits_per_pixel;
 u32 VAR_10 = (VAR_3->fix.visual == VAR_2) ?
  VAR_8->pseudo_palette[VAR_4->color] : VAR_4->color;

 if (VAR_3->state != VAR_1)
  return;
 if (VAR_3->flags & VAR_0) {
  FUNC_0(VAR_3, VAR_4);
  return;
 }

 VAR_6 = VAR_3->var.xres_virtual;
 VAR_7 = VAR_3->var.yres_virtual;

 FUNC_2(&VAR_5, VAR_4, sizeof(struct fb_fillrect));

 if (!VAR_5.width || !VAR_5.height ||
    VAR_5.dx >= VAR_6 || VAR_5.dy >= VAR_7)
  return;

 if (VAR_5.dx + VAR_5.width > VAR_6)
  VAR_5.width = VAR_6 - VAR_5.dx;
 if (VAR_5.dy + VAR_5.height > VAR_7)
  VAR_5.height = VAR_7 - VAR_5.dy;

 FUNC_1(VAR_8->regbase,
     VAR_3->var.bits_per_pixel,
     (VAR_4->dx * VAR_9) / 8, VAR_4->dy,
     (VAR_4->width * VAR_9) / 8, VAR_4->height,
     VAR_10, VAR_10,
     VAR_3->fix.line_length, 0x40);
}
