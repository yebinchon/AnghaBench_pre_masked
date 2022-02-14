
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tridentfb_par {int (* fill_rect ) (struct tridentfb_par*,int ,int ,int ,int ,int,int ) ;int (* wait_engine ) (struct tridentfb_par*) ;} ;
struct TYPE_2__ {int bits_per_pixel; } ;
struct fb_info {int flags; scalar_t__ pseudo_palette; TYPE_1__ var; struct tridentfb_par* par; } ;
struct fb_fillrect {int color; int rop; int height; int width; int dy; int dx; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_info*,struct fb_fillrect const*) ;
 int FUNC_1 (struct tridentfb_par*) ;
 int FUNC_2 (struct tridentfb_par*,int ,int ,int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_1,
          const struct fb_fillrect *VAR_2)
{
 struct tridentfb_par *VAR_3 = VAR_1->par;
 int VAR_4;

 if (VAR_1->flags & VAR_0) {
  FUNC_0(VAR_1, VAR_2);
  return;
 }
 if (VAR_1->var.bits_per_pixel == 8) {
  VAR_4 = VAR_2->color;
  VAR_4 |= VAR_4 << 8;
  VAR_4 |= VAR_4 << 16;
 } else
  VAR_4 = ((u32 *)(VAR_1->pseudo_palette))[VAR_2->color];

 VAR_3->wait_engine(VAR_3);
 VAR_3->fill_rect(VAR_3, VAR_2->dx, VAR_2->dy, VAR_2->width,
         VAR_2->height, VAR_4, VAR_2->rop);
}
