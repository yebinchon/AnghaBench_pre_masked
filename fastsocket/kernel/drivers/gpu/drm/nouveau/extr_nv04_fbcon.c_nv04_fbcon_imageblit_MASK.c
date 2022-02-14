
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
struct fb_image {int depth; int width; int height; size_t fg_color; size_t bg_color; int dy; int dx; scalar_t__ data; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct nouveau_channel*,int ,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct nouveau_channel*) ;
 int VAR_3 ;
 int FUNC_3 (struct nouveau_channel*,int) ;
 int FUNC_4 (struct nouveau_channel*,int*,int) ;
 int FUNC_5 (struct nouveau_channel*,int) ;
 struct nouveau_drm* FUNC_6 (int ) ;

int
FUNC_7(struct fb_info *VAR_4, const struct fb_image *VAR_5)
{
 struct nouveau_fbdev *VAR_6 = VAR_4->par;
 struct nouveau_drm *VAR_7 = FUNC_6(VAR_6->dev);
 struct nouveau_channel *VAR_8 = VAR_7->channel;
 uint32_t VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12;
 uint32_t *VAR_13 = (uint32_t *)VAR_5->data;
 int VAR_14;

 if (VAR_5->depth != 1)
  return -VAR_0;

 VAR_14 = FUNC_5(VAR_8, 8);
 if (VAR_14)
  return VAR_14;

 VAR_12 = FUNC_0(VAR_5->width, 8);
 VAR_11 = FUNC_0(VAR_12 * VAR_5->height, 32) >> 5;

 if (VAR_4->fix.visual == VAR_2 ||
     VAR_4->fix.visual == VAR_1) {
  VAR_9 = ((uint32_t *) VAR_4->pseudo_palette)[VAR_5->fg_color];
  VAR_10 = ((uint32_t *) VAR_4->pseudo_palette)[VAR_5->bg_color];
 } else {
  VAR_9 = VAR_5->fg_color;
  VAR_10 = VAR_5->bg_color;
 }

 FUNC_1(VAR_8, VAR_3, 0x0be4, 7);
 FUNC_3(VAR_8, (VAR_5->dy << 16) | (VAR_5->dx & 0xffff));
 FUNC_3(VAR_8, ((VAR_5->dy + VAR_5->height) << 16) |
    ((VAR_5->dx + VAR_5->width) & 0xffff));
 FUNC_3(VAR_8, VAR_10);
 FUNC_3(VAR_8, VAR_9);
 FUNC_3(VAR_8, (VAR_5->height << 16) | VAR_12);
 FUNC_3(VAR_8, (VAR_5->height << 16) | VAR_5->width);
 FUNC_3(VAR_8, (VAR_5->dy << 16) | (VAR_5->dx & 0xffff));

 while (VAR_11) {
  int VAR_15 = VAR_11 > 128 ? 128 : VAR_11;

  VAR_14 = FUNC_5(VAR_8, VAR_15 + 1);
  if (VAR_14)
   return VAR_14;

  FUNC_1(VAR_8, VAR_3, 0x0c00, VAR_15);
  FUNC_4(VAR_8, VAR_13, VAR_15);
  VAR_13 += VAR_15;
  VAR_11 -= VAR_15;
 }

 FUNC_2(VAR_8);
 return 0;
}
