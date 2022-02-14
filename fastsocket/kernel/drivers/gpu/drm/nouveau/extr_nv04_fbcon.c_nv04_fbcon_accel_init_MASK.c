
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nouveau_object {int dummy; } ;
struct nouveau_fbdev {struct drm_device* dev; } ;
struct nouveau_drm {int device; struct nouveau_channel* channel; } ;
struct nouveau_device {scalar_t__ card_type; int chipset; } ;
struct nouveau_channel {int cli; } ;
struct TYPE_5__ {int length; } ;
struct TYPE_8__ {int bits_per_pixel; int yres_virtual; int xres_virtual; TYPE_1__ transp; } ;
struct TYPE_6__ {int line_length; int smem_start; } ;
struct fb_info {TYPE_4__ var; TYPE_2__ fix; struct nouveau_fbdev* par; } ;
struct TYPE_7__ {int fb_base; } ;
struct drm_device {TYPE_3__ mode_config; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct nouveau_channel*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct nouveau_channel*,int) ;
 scalar_t__ FUNC_3 (struct nouveau_channel*,int) ;
 struct nouveau_drm* FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct fb_info*) ;
 int FUNC_6 (int ,int ,int,int,int *,int ,struct nouveau_object**) ;
 struct nouveau_device* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int
FUNC_9(struct fb_info *VAR_13)
{
 struct nouveau_fbdev *VAR_14 = VAR_13->par;
 struct drm_device *VAR_15 = VAR_14->dev;
 struct nouveau_drm *VAR_16 = FUNC_4(VAR_15);
 struct nouveau_channel *VAR_17 = VAR_16->channel;
 struct nouveau_device *VAR_18 = FUNC_7(VAR_16->device);
 struct nouveau_object *VAR_19;
 int VAR_20, VAR_21, VAR_22;
 int VAR_23;

 switch (VAR_13->var.bits_per_pixel) {
 case 8:
  VAR_20 = 1;
  VAR_21 = 3;
  VAR_22 = 3;
  break;
 case 16:
  VAR_20 = 4;
  VAR_21 = 1;
  VAR_22 = 1;
  break;
 case 32:
  switch (VAR_13->var.transp.length) {
  case 0:
  case 8:
   break;
  default:
   return -VAR_0;
  }

  VAR_20 = 6;
  VAR_21 = 3;
  VAR_22 = 3;
  break;
 default:
  return -VAR_0;
 }

 VAR_23 = FUNC_6(FUNC_8(VAR_17->cli), VAR_1, VAR_4,
     VAR_18->card_type >= VAR_2 ? 0x0062 : 0x0042,
     ((void*)0), 0, &VAR_19);
 if (VAR_23)
  return VAR_23;

 VAR_23 = FUNC_6(FUNC_8(VAR_17->cli), VAR_1, VAR_3,
     0x0019, ((void*)0), 0, &VAR_19);
 if (VAR_23)
  return VAR_23;

 VAR_23 = FUNC_6(FUNC_8(VAR_17->cli), VAR_1, VAR_9,
     0x0043, ((void*)0), 0, &VAR_19);
 if (VAR_23)
  return VAR_23;

 VAR_23 = FUNC_6(FUNC_8(VAR_17->cli), VAR_1, VAR_8,
     0x0044, ((void*)0), 0, &VAR_19);
 if (VAR_23)
  return VAR_23;

 VAR_23 = FUNC_6(FUNC_8(VAR_17->cli), VAR_1, VAR_6,
     0x004a, ((void*)0), 0, &VAR_19);
 if (VAR_23)
  return VAR_23;

 VAR_23 = FUNC_6(FUNC_8(VAR_17->cli), VAR_1, VAR_7,
     VAR_18->chipset >= 0x11 ? 0x009f : 0x005f,
     ((void*)0), 0, &VAR_19);
 if (VAR_23)
  return VAR_23;

 if (FUNC_3(VAR_17, 49)) {
  FUNC_5(VAR_13);
  return 0;
 }

 FUNC_0(VAR_17, VAR_10, 0x0000, 1);
 FUNC_2(VAR_17, VAR_4);
 FUNC_0(VAR_17, VAR_10, 0x0184, 2);
 FUNC_2(VAR_17, VAR_5);
 FUNC_2(VAR_17, VAR_5);
 FUNC_0(VAR_17, VAR_10, 0x0300, 4);
 FUNC_2(VAR_17, VAR_20);
 FUNC_2(VAR_17, VAR_13->fix.line_length | (VAR_13->fix.line_length << 16));
 FUNC_2(VAR_17, VAR_13->fix.smem_start - VAR_15->mode_config.fb_base);
 FUNC_2(VAR_17, VAR_13->fix.smem_start - VAR_15->mode_config.fb_base);

 FUNC_0(VAR_17, VAR_10, 0x0000, 1);
 FUNC_2(VAR_17, VAR_9);
 FUNC_0(VAR_17, VAR_10, 0x0300, 1);
 FUNC_2(VAR_17, 0x55);

 FUNC_0(VAR_17, VAR_10, 0x0000, 1);
 FUNC_2(VAR_17, VAR_8);
 FUNC_0(VAR_17, VAR_10, 0x0300, 8);
 FUNC_2(VAR_17, VAR_21);



 FUNC_2(VAR_17, 1);

 FUNC_2(VAR_17, 0);
 FUNC_2(VAR_17, 1);
 FUNC_2(VAR_17, ~0);
 FUNC_2(VAR_17, ~0);
 FUNC_2(VAR_17, ~0);
 FUNC_2(VAR_17, ~0);

 FUNC_0(VAR_17, VAR_10, 0x0000, 1);
 FUNC_2(VAR_17, VAR_3);
 FUNC_0(VAR_17, VAR_10, 0x0300, 2);
 FUNC_2(VAR_17, 0);
 FUNC_2(VAR_17, (VAR_13->var.yres_virtual << 16) | VAR_13->var.xres_virtual);

 FUNC_0(VAR_17, VAR_12, 0x0000, 1);
 FUNC_2(VAR_17, VAR_7);
 FUNC_0(VAR_17, VAR_12, 0x019c, 1);
 FUNC_2(VAR_17, VAR_4);
 FUNC_0(VAR_17, VAR_12, 0x02fc, 1);
 FUNC_2(VAR_17, 3);

 FUNC_0(VAR_17, VAR_11, 0x0000, 1);
 FUNC_2(VAR_17, VAR_6);
 FUNC_0(VAR_17, VAR_11, 0x0198, 1);
 FUNC_2(VAR_17, VAR_4);
 FUNC_0(VAR_17, VAR_11, 0x0188, 2);
 FUNC_2(VAR_17, VAR_8);
 FUNC_2(VAR_17, VAR_9);
 FUNC_0(VAR_17, VAR_11, 0x0304, 1);
 FUNC_2(VAR_17, 1);
 FUNC_0(VAR_17, VAR_11, 0x0300, 1);
 FUNC_2(VAR_17, VAR_22);
 FUNC_0(VAR_17, VAR_11, 0x02fc, 1);
 FUNC_2(VAR_17, 3);

 FUNC_1(VAR_17);

 return 0;
}
