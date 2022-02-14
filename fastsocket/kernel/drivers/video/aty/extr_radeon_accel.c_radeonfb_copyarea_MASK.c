
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct radeonfb_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ xres_virtual; scalar_t__ yres_virtual; } ;
struct fb_info {scalar_t__ state; int flags; TYPE_1__ var; struct radeonfb_info* par; } ;
struct fb_copyarea {scalar_t__ sx; scalar_t__ sy; scalar_t__ dx; scalar_t__ dy; scalar_t__ width; scalar_t__ height; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fb_info*,struct fb_copyarea const*) ;
 int FUNC_1 (struct radeonfb_info*) ;
 int FUNC_2 (struct radeonfb_info*,struct fb_copyarea*) ;

void FUNC_3(struct fb_info *VAR_2, const struct fb_copyarea *VAR_3)
{
 struct radeonfb_info *VAR_4 = VAR_2->par;
 struct fb_copyarea VAR_5;
 u32 VAR_6, VAR_7;
 VAR_5.sx = VAR_3->sx;
 VAR_5.sy = VAR_3->sy;
 VAR_5.dx = VAR_3->dx;
 VAR_5.dy = VAR_3->dy;
 VAR_5.width = VAR_3->width;
 VAR_5.height = VAR_3->height;

 if (VAR_2->state != VAR_1)
  return;
 if (VAR_2->flags & VAR_0) {
  FUNC_0(VAR_2, VAR_3);
  return;
 }

 FUNC_1(VAR_4);

 VAR_6 = VAR_2->var.xres_virtual;
 VAR_7 = VAR_2->var.yres_virtual;

 if(!VAR_5.width || !VAR_5.height ||
    VAR_5.sx >= VAR_6 || VAR_5.sy >= VAR_7 ||
    VAR_5.dx >= VAR_6 || VAR_5.dy >= VAR_7)
  return;

 if(VAR_5.sx + VAR_5.width > VAR_6) VAR_5.width = VAR_6 - VAR_5.sx;
 if(VAR_5.dx + VAR_5.width > VAR_6) VAR_5.width = VAR_6 - VAR_5.dx;
 if(VAR_5.sy + VAR_5.height > VAR_7) VAR_5.height = VAR_7 - VAR_5.sy;
 if(VAR_5.dy + VAR_5.height > VAR_7) VAR_5.height = VAR_7 - VAR_5.dy;

 FUNC_2(VAR_4, &VAR_5);
}
