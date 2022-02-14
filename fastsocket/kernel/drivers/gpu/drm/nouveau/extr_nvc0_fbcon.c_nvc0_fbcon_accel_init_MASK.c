
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nouveau_object {int dummy; } ;
struct TYPE_8__ {int offset; } ;
struct nouveau_framebuffer {TYPE_4__ vma; } ;
struct nouveau_fbdev {struct nouveau_framebuffer nouveau_fb; struct drm_device* dev; } ;
struct nouveau_drm {struct nouveau_channel* channel; } ;
struct nouveau_channel {int cli; } ;
struct TYPE_5__ {int length; } ;
struct TYPE_7__ {int bits_per_pixel; int xres_virtual; int yres_virtual; TYPE_1__ transp; } ;
struct TYPE_6__ {int line_length; } ;
struct fb_info {TYPE_3__ var; TYPE_2__ fix; struct nouveau_fbdev* par; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct nouveau_channel*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct nouveau_channel*,int) ;
 int FUNC_3 (struct nouveau_channel*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 struct nouveau_drm* FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct fb_info*) ;
 int FUNC_8 (int ,int ,int ,int,int *,int ,struct nouveau_object**) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

int
FUNC_11(struct fb_info *VAR_4)
{
 struct nouveau_fbdev *VAR_5 = VAR_4->par;
 struct drm_device *VAR_6 = VAR_5->dev;
 struct nouveau_framebuffer *VAR_7 = &VAR_5->nouveau_fb;
 struct nouveau_drm *VAR_8 = FUNC_6(VAR_6);
 struct nouveau_channel *VAR_9 = VAR_8->channel;
 struct nouveau_object *VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_8(FUNC_9(VAR_9->cli), VAR_1, VAR_2,
     0x902d, ((void*)0), 0, &VAR_10);
 if (VAR_11)
  return VAR_11;

 switch (VAR_4->var.bits_per_pixel) {
 case 8:
  VAR_12 = 0xf3;
  break;
 case 15:
  VAR_12 = 0xf8;
  break;
 case 16:
  VAR_12 = 0xe8;
  break;
 case 32:
  switch (VAR_4->var.transp.length) {
  case 0:
  case 8:
   VAR_12 = 0xe6;
   break;
  case 2:
   VAR_12 = 0xd1;
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }

 VAR_11 = FUNC_3(VAR_9, 60);
 if (VAR_11) {
  FUNC_4(1);
  FUNC_7(VAR_4);
  return VAR_11;
 }

 FUNC_0(VAR_9, VAR_3, 0x0000, 1);
 FUNC_2 (VAR_9, 0x0000902d);
 FUNC_0(VAR_9, VAR_3, 0x0290, 1);
 FUNC_2 (VAR_9, 0);
 FUNC_0(VAR_9, VAR_3, 0x0888, 1);
 FUNC_2 (VAR_9, 1);
 FUNC_0(VAR_9, VAR_3, 0x02ac, 1);
 FUNC_2 (VAR_9, 3);
 FUNC_0(VAR_9, VAR_3, 0x02a0, 1);
 FUNC_2 (VAR_9, 0x55);
 FUNC_0(VAR_9, VAR_3, 0x08c0, 4);
 FUNC_2 (VAR_9, 0);
 FUNC_2 (VAR_9, 1);
 FUNC_2 (VAR_9, 0);
 FUNC_2 (VAR_9, 1);
 FUNC_0(VAR_9, VAR_3, 0x0580, 2);
 FUNC_2 (VAR_9, 4);
 FUNC_2 (VAR_9, VAR_12);
 FUNC_0(VAR_9, VAR_3, 0x02e8, 2);
 FUNC_2 (VAR_9, 2);
 FUNC_2 (VAR_9, 1);

 FUNC_0(VAR_9, VAR_3, 0x0804, 1);
 FUNC_2 (VAR_9, VAR_12);
 FUNC_0(VAR_9, VAR_3, 0x0800, 1);
 FUNC_2 (VAR_9, 1);
 FUNC_0(VAR_9, VAR_3, 0x0808, 3);
 FUNC_2 (VAR_9, 0);
 FUNC_2 (VAR_9, 0);
 FUNC_2 (VAR_9, 1);
 FUNC_0(VAR_9, VAR_3, 0x081c, 1);
 FUNC_2 (VAR_9, 1);
 FUNC_0(VAR_9, VAR_3, 0x0840, 4);
 FUNC_2 (VAR_9, 0);
 FUNC_2 (VAR_9, 1);
 FUNC_2 (VAR_9, 0);
 FUNC_2 (VAR_9, 1);
 FUNC_0(VAR_9, VAR_3, 0x0200, 10);
 FUNC_2 (VAR_9, VAR_12);
 FUNC_2 (VAR_9, 1);
 FUNC_2 (VAR_9, 0);
 FUNC_2 (VAR_9, 1);
 FUNC_2 (VAR_9, 0);
 FUNC_2 (VAR_9, VAR_4->fix.line_length);
 FUNC_2 (VAR_9, VAR_4->var.xres_virtual);
 FUNC_2 (VAR_9, VAR_4->var.yres_virtual);
 FUNC_2 (VAR_9, FUNC_10(VAR_7->vma.offset));
 FUNC_2 (VAR_9, FUNC_5(VAR_7->vma.offset));
 FUNC_0(VAR_9, VAR_3, 0x0230, 10);
 FUNC_2 (VAR_9, VAR_12);
 FUNC_2 (VAR_9, 1);
 FUNC_2 (VAR_9, 0);
 FUNC_2 (VAR_9, 1);
 FUNC_2 (VAR_9, 0);
 FUNC_2 (VAR_9, VAR_4->fix.line_length);
 FUNC_2 (VAR_9, VAR_4->var.xres_virtual);
 FUNC_2 (VAR_9, VAR_4->var.yres_virtual);
 FUNC_2 (VAR_9, FUNC_10(VAR_7->vma.offset));
 FUNC_2 (VAR_9, FUNC_5(VAR_7->vma.offset));
 FUNC_1 (VAR_9);

 return 0;
}
