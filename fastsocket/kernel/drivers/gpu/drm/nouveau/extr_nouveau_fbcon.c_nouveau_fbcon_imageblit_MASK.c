
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_fbdev {int dev; } ;
struct TYPE_2__ {int mutex; } ;
struct nouveau_drm {TYPE_1__ client; int device; } ;
struct nouveau_device {scalar_t__ card_type; } ;
struct fb_info {scalar_t__ state; int flags; struct nouveau_fbdev* par; } ;
struct fb_image {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct fb_info*,struct fb_image const*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct nouveau_drm* FUNC_4 (int ) ;
 int FUNC_5 (struct fb_info*) ;
 int FUNC_6 (struct fb_info*,struct fb_image const*) ;
 int FUNC_7 (struct fb_info*,struct fb_image const*) ;
 struct nouveau_device* FUNC_8 (int ) ;
 int FUNC_9 (struct fb_info*,struct fb_image const*) ;

__attribute__((used)) static void
FUNC_10(struct fb_info *VAR_5, const struct fb_image *VAR_6)
{
 struct nouveau_fbdev *VAR_7 = VAR_5->par;
 struct nouveau_drm *VAR_8 = FUNC_4(VAR_7->dev);
 struct nouveau_device *VAR_9 = FUNC_8(VAR_8->device);
 int VAR_10;

 if (VAR_5->state != VAR_2)
  return;

 VAR_10 = -VAR_0;
 if (!FUNC_1() && !(VAR_5->flags & VAR_1) &&
     FUNC_2(&VAR_8->client.mutex)) {
  if (VAR_9->card_type < VAR_3)
   VAR_10 = FUNC_6(VAR_5, VAR_6);
  else
  if (VAR_9->card_type < VAR_4)
   VAR_10 = FUNC_7(VAR_5, VAR_6);
  else
   VAR_10 = FUNC_9(VAR_5, VAR_6);
  FUNC_3(&VAR_8->client.mutex);
 }

 if (VAR_10 == 0)
  return;

 if (VAR_10 != -VAR_0)
  FUNC_5(VAR_5);
 FUNC_0(VAR_5, VAR_6);
}
