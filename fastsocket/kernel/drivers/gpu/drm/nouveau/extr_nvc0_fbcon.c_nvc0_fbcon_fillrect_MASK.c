
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct nouveau_fbdev {int dev; } ;
struct nouveau_drm {struct nouveau_channel* channel; } ;
struct nouveau_channel {int dummy; } ;
struct TYPE_2__ {scalar_t__ visual; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_1__ fix; struct nouveau_fbdev* par; } ;
struct fb_fillrect {scalar_t__ rop; size_t color; int dx; int dy; int width; int height; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct nouveau_channel*) ;
 int VAR_2 ;
 int FUNC_2 (struct nouveau_channel*,int) ;
 int FUNC_3 (struct nouveau_channel*,int) ;
 scalar_t__ VAR_3 ;
 struct nouveau_drm* FUNC_4 (int ) ;

int
FUNC_5(struct fb_info *VAR_4, const struct fb_fillrect *VAR_5)
{
 struct nouveau_fbdev *VAR_6 = VAR_4->par;
 struct nouveau_drm *VAR_7 = FUNC_4(VAR_6->dev);
 struct nouveau_channel *VAR_8 = VAR_7->channel;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_8, VAR_5->rop == VAR_3 ? 7 : 11);
 if (VAR_9)
  return VAR_9;

 if (VAR_5->rop != VAR_3) {
  FUNC_0(VAR_8, VAR_2, 0x02ac, 1);
  FUNC_2 (VAR_8, 1);
 }
 FUNC_0(VAR_8, VAR_2, 0x0588, 1);
 if (VAR_4->fix.visual == VAR_1 ||
     VAR_4->fix.visual == VAR_0)
  FUNC_2 (VAR_8, ((uint32_t *)VAR_4->pseudo_palette)[VAR_5->color]);
 else
  FUNC_2 (VAR_8, VAR_5->color);
 FUNC_0(VAR_8, VAR_2, 0x0600, 4);
 FUNC_2 (VAR_8, VAR_5->dx);
 FUNC_2 (VAR_8, VAR_5->dy);
 FUNC_2 (VAR_8, VAR_5->dx + VAR_5->width);
 FUNC_2 (VAR_8, VAR_5->dy + VAR_5->height);
 if (VAR_5->rop != VAR_3) {
  FUNC_0(VAR_8, VAR_2, 0x02ac, 1);
  FUNC_2 (VAR_8, 3);
 }
 FUNC_1(VAR_8);
 return 0;
}
