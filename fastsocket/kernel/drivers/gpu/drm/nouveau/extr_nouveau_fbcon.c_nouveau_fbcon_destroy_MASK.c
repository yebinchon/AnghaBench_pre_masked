
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nouveau_framebuffer {int base; TYPE_1__* nvbo; int vma; } ;
struct TYPE_7__ {struct fb_info* fbdev; } ;
struct nouveau_fbdev {TYPE_4__ helper; struct nouveau_framebuffer nouveau_fb; } ;
struct TYPE_6__ {scalar_t__ len; } ;
struct fb_info {TYPE_3__ cmap; } ;
struct drm_device {int dummy; } ;
struct TYPE_5__ {int gem; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct fb_info*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (struct fb_info*) ;

__attribute__((used)) static int
FUNC_9(struct drm_device *VAR_0, struct nouveau_fbdev *VAR_1)
{
 struct nouveau_framebuffer *VAR_2 = &VAR_1->nouveau_fb;
 struct fb_info *VAR_3;

 if (VAR_1->helper.fbdev) {
  VAR_3 = VAR_1->helper.fbdev;
  FUNC_8(VAR_3);
  if (VAR_3->cmap.len)
   FUNC_4(&VAR_3->cmap);
  FUNC_5(VAR_3);
 }

 if (VAR_2->nvbo) {
  FUNC_6(VAR_2->nvbo);
  FUNC_7(VAR_2->nvbo, &VAR_2->vma);
  FUNC_3(VAR_2->nvbo->gem);
  VAR_2->nvbo = ((void*)0);
 }
 FUNC_0(&VAR_1->helper);
 FUNC_2(&VAR_2->base);
 FUNC_1(&VAR_2->base);
 return 0;
}
