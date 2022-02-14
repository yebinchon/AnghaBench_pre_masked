
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int bits_per_pixel; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_1__ var; } ;
struct fb_fillrect {scalar_t__ rop; size_t color; int height; int width; int dy; int dx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct fb_info*,struct fb_fillrect const*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ,int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct fb_info *VAR_4, const struct fb_fillrect *VAR_5)
{
 if (VAR_5->rop != VAR_3)
  FUNC_0(VAR_4, VAR_5);
 else {
  FUNC_4();
  FUNC_1(0x00f0, VAR_1);
  FUNC_1(16, VAR_0);

  if (VAR_4->var.bits_per_pixel == 16) {
   FUNC_1(((u32 *) (VAR_4->pseudo_palette))[VAR_5->color],
      VAR_2);
   FUNC_2(1, VAR_5->dx, VAR_5->dy, VAR_5->width,
          VAR_5->height);
   FUNC_3(1);
  } else {
   FUNC_1(VAR_5->color, VAR_2);
   FUNC_2(0, VAR_5->dx, VAR_5->dy, VAR_5->width,
          VAR_5->height);
   FUNC_3(0);
  }
 }
}
