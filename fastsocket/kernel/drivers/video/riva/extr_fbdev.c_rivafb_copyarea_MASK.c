
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* Blt; } ;
struct riva_par {TYPE_2__ riva; } ;
struct fb_info {int flags; struct riva_par* par; } ;
struct fb_copyarea {int sy; int sx; int dy; int dx; int height; int width; } ;
struct TYPE_3__ {int WidthHeight; int TopLeftDst; int TopLeftSrc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (TYPE_2__,int ,int) ;
 int FUNC_2 (struct fb_info*,struct fb_copyarea const*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct fb_info *VAR_2, const struct fb_copyarea *VAR_3)
{
 struct riva_par *VAR_4 = VAR_2->par;

 if ((VAR_2->flags & VAR_1)) {
  FUNC_2(VAR_2, VAR_3);
  return;
 }

 FUNC_1(VAR_4->riva, VAR_0, 3);
 FUNC_0(&VAR_4->riva.Blt->TopLeftSrc, 0,
  (VAR_3->sy << 16) | VAR_3->sx);
 FUNC_0(&VAR_4->riva.Blt->TopLeftDst, 0,
  (VAR_3->dy << 16) | VAR_3->dx);
 FUNC_3();
 FUNC_0(&VAR_4->riva.Blt->WidthHeight, 0,
  (VAR_3->height << 16) | VAR_3->width);
 FUNC_3();
}
