
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct i810fb_par {int dev_flags; int depth; int blit_bpp; } ;
struct TYPE_4__ {int smem_start; int line_length; } ;
struct TYPE_3__ {int accel_flags; } ;
struct fb_info {TYPE_2__ fix; scalar_t__ pseudo_palette; TYPE_1__ var; struct i810fb_par* par; } ;
struct fb_fillrect {int color; size_t rop; int dx; int width; int dy; int height; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_info*,struct fb_fillrect const*) ;
 int FUNC_1 (int,int,int,int,int,int,int ,struct fb_info*) ;
 int* VAR_1 ;

void FUNC_2(struct fb_info *VAR_2, const struct fb_fillrect *VAR_3)
{
 struct i810fb_par *VAR_4 = VAR_2->par;
 u32 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 = 0, VAR_11 = 0;

 if (!VAR_2->var.accel_flags || VAR_4->dev_flags & VAR_0 ||
     VAR_4->depth == 4) {
  FUNC_0(VAR_2, VAR_3);
  return;
 }

 if (VAR_4->depth == 1)
  VAR_11 = VAR_3->color;
 else
  VAR_11 = ((u32 *) (VAR_2->pseudo_palette))[VAR_3->color];

 VAR_10 = VAR_1[VAR_3->rop];

 VAR_5 = VAR_3->dx * VAR_4->depth;
 VAR_7 = VAR_3->width * VAR_4->depth;
 VAR_6 = VAR_3->dy;
 VAR_8 = VAR_3->height;

 VAR_9 = VAR_2->fix.smem_start + (VAR_6 * VAR_2->fix.line_length) + VAR_5;
 FUNC_1(VAR_7, VAR_8, VAR_2->fix.line_length, VAR_9, VAR_10, VAR_11,
     VAR_4->blit_bpp, VAR_2);
}
