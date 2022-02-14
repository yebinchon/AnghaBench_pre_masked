
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
struct nouveau_fbdev {struct drm_device* dev; struct nouveau_framebuffer nouveau_fb; } ;
struct nouveau_drm {struct nouveau_channel* channel; } ;
struct nouveau_channel {int cli; } ;
struct TYPE_5__ {int length; } ;
struct TYPE_7__ {int bits_per_pixel; int xres_virtual; int yres_virtual; TYPE_1__ transp; } ;
struct TYPE_6__ {int line_length; } ;
struct fb_info {TYPE_3__ var; TYPE_2__ fix; struct nouveau_fbdev* par; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nouveau_channel*,int) ;
 int FUNC_2 (struct nouveau_channel*,int) ;
 int FUNC_3 (int ) ;
 struct nouveau_drm* FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct fb_info*) ;
 int FUNC_6 (int ,int ,int,int,int *,int ,struct nouveau_object**) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int
FUNC_9(struct fb_info *VAR_5)
{
 struct nouveau_fbdev *VAR_6 = VAR_5->par;
 struct nouveau_framebuffer *VAR_7 = &VAR_6->nouveau_fb;
 struct drm_device *VAR_8 = VAR_6->dev;
 struct nouveau_drm *VAR_9 = FUNC_4(VAR_8);
 struct nouveau_channel *VAR_10 = VAR_9->channel;
 struct nouveau_object *VAR_11;
 int VAR_12, VAR_13;

 switch (VAR_5->var.bits_per_pixel) {
 case 8:
  VAR_13 = 0xf3;
  break;
 case 15:
  VAR_13 = 0xf8;
  break;
 case 16:
  VAR_13 = 0xe8;
  break;
 case 32:
  switch (VAR_5->var.transp.length) {
  case 0:
  case 8:
   VAR_13 = 0xe6;
   break;
  case 2:
   VAR_13 = 0xd1;
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }

 VAR_12 = FUNC_6(FUNC_7(VAR_10->cli), VAR_1, VAR_2,
     0x502d, ((void*)0), 0, &VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_2(VAR_10, 59);
 if (VAR_12) {
  FUNC_5(VAR_5);
  return VAR_12;
 }

 FUNC_0(VAR_10, VAR_4, 0x0000, 1);
 FUNC_1(VAR_10, VAR_2);
 FUNC_0(VAR_10, VAR_4, 0x0184, 3);
 FUNC_1(VAR_10, VAR_3);
 FUNC_1(VAR_10, VAR_3);
 FUNC_1(VAR_10, VAR_3);
 FUNC_0(VAR_10, VAR_4, 0x0290, 1);
 FUNC_1(VAR_10, 0);
 FUNC_0(VAR_10, VAR_4, 0x0888, 1);
 FUNC_1(VAR_10, 1);
 FUNC_0(VAR_10, VAR_4, 0x02ac, 1);
 FUNC_1(VAR_10, 3);
 FUNC_0(VAR_10, VAR_4, 0x02a0, 1);
 FUNC_1(VAR_10, 0x55);
 FUNC_0(VAR_10, VAR_4, 0x08c0, 4);
 FUNC_1(VAR_10, 0);
 FUNC_1(VAR_10, 1);
 FUNC_1(VAR_10, 0);
 FUNC_1(VAR_10, 1);
 FUNC_0(VAR_10, VAR_4, 0x0580, 2);
 FUNC_1(VAR_10, 4);
 FUNC_1(VAR_10, VAR_13);
 FUNC_0(VAR_10, VAR_4, 0x02e8, 2);
 FUNC_1(VAR_10, 2);
 FUNC_1(VAR_10, 1);
 FUNC_0(VAR_10, VAR_4, 0x0804, 1);
 FUNC_1(VAR_10, VAR_13);
 FUNC_0(VAR_10, VAR_4, 0x0800, 1);
 FUNC_1(VAR_10, 1);
 FUNC_0(VAR_10, VAR_4, 0x0808, 3);
 FUNC_1(VAR_10, 0);
 FUNC_1(VAR_10, 0);
 FUNC_1(VAR_10, 1);
 FUNC_0(VAR_10, VAR_4, 0x081c, 1);
 FUNC_1(VAR_10, 1);
 FUNC_0(VAR_10, VAR_4, 0x0840, 4);
 FUNC_1(VAR_10, 0);
 FUNC_1(VAR_10, 1);
 FUNC_1(VAR_10, 0);
 FUNC_1(VAR_10, 1);
 FUNC_0(VAR_10, VAR_4, 0x0200, 2);
 FUNC_1(VAR_10, VAR_13);
 FUNC_1(VAR_10, 1);
 FUNC_0(VAR_10, VAR_4, 0x0214, 5);
 FUNC_1(VAR_10, VAR_5->fix.line_length);
 FUNC_1(VAR_10, VAR_5->var.xres_virtual);
 FUNC_1(VAR_10, VAR_5->var.yres_virtual);
 FUNC_1(VAR_10, FUNC_8(VAR_7->vma.offset));
 FUNC_1(VAR_10, FUNC_3(VAR_7->vma.offset));
 FUNC_0(VAR_10, VAR_4, 0x0230, 2);
 FUNC_1(VAR_10, VAR_13);
 FUNC_1(VAR_10, 1);
 FUNC_0(VAR_10, VAR_4, 0x0244, 5);
 FUNC_1(VAR_10, VAR_5->fix.line_length);
 FUNC_1(VAR_10, VAR_5->var.xres_virtual);
 FUNC_1(VAR_10, VAR_5->var.yres_virtual);
 FUNC_1(VAR_10, FUNC_8(VAR_7->vma.offset));
 FUNC_1(VAR_10, FUNC_3(VAR_7->vma.offset));

 return 0;
}
