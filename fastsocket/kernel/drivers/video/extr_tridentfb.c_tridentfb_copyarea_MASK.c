
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tridentfb_par {int (* copy_rect ) (struct tridentfb_par*,int ,int ,int ,int ,int ,int ) ;int (* wait_engine ) (struct tridentfb_par*) ;} ;
struct fb_info {int flags; struct tridentfb_par* par; } ;
struct fb_copyarea {int height; int width; int dy; int dx; int sy; int sx; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_info*,struct fb_copyarea const*) ;
 int FUNC_1 (struct tridentfb_par*) ;
 int FUNC_2 (struct tridentfb_par*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_1,
          const struct fb_copyarea *VAR_2)
{
 struct tridentfb_par *VAR_3 = VAR_1->par;

 if (VAR_1->flags & VAR_0) {
  FUNC_0(VAR_1, VAR_2);
  return;
 }
 VAR_3->wait_engine(VAR_3);
 VAR_3->copy_rect(VAR_3, VAR_2->sx, VAR_2->sy, VAR_2->dx, VAR_2->dy,
         VAR_2->width, VAR_2->height);
}
