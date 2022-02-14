
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_framebuffer {int depth; int* pitches; } ;
struct nouveau_framebuffer {int r_format; int r_pitch; int r_dma; struct nouveau_bo* nvbo; struct drm_framebuffer base; } ;
struct nouveau_drm {int device; } ;
struct nouveau_bo {int tile_mode; } ;
struct drm_mode_fb_cmd2 {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ card_type; int chipset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct nouveau_drm*,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct drm_device*,struct drm_framebuffer*,int *) ;
 int FUNC_2 (struct drm_framebuffer*,struct drm_mode_fb_cmd2*) ;
 int FUNC_3 (struct nouveau_bo*) ;
 struct nouveau_drm* FUNC_4 (struct drm_device*) ;
 int VAR_7 ;
 TYPE_1__* FUNC_5 (int ) ;

int
FUNC_6(struct drm_device *VAR_8,
    struct nouveau_framebuffer *VAR_9,
    struct drm_mode_fb_cmd2 *VAR_10,
    struct nouveau_bo *VAR_11)
{
 struct nouveau_drm *VAR_12 = FUNC_4(VAR_8);
 struct drm_framebuffer *VAR_13 = &VAR_9->base;
 int VAR_14;

 FUNC_2(VAR_13, VAR_10);
 VAR_9->nvbo = VAR_11;

 if (FUNC_5(VAR_12->device)->card_type >= VAR_1) {
  u32 VAR_15 = FUNC_3(VAR_11);
  if (VAR_15 == 0x7a00 ||
      VAR_15 == 0xfe00)
   VAR_9->r_dma = VAR_5;
  else
  if (VAR_15 == 0x7000)
   VAR_9->r_dma = VAR_4;
  else
   VAR_9->r_dma = VAR_6;

  switch (VAR_13->depth) {
  case 8: VAR_9->r_format = 0x1e00; break;
  case 15: VAR_9->r_format = 0xe900; break;
  case 16: VAR_9->r_format = 0xe800; break;
  case 24:
  case 32: VAR_9->r_format = 0xcf00; break;
  case 30: VAR_9->r_format = 0xd100; break;
  default:
    FUNC_0(VAR_12, "unknown depth %d\n", VAR_13->depth);
    return -VAR_0;
  }

  if (FUNC_5(VAR_12->device)->chipset == 0x50)
   VAR_9->r_format |= (VAR_15 << 8);

  if (!VAR_15) {
   if (FUNC_5(VAR_12->device)->card_type < VAR_3)
    VAR_9->r_pitch = 0x00100000 | VAR_13->pitches[0];
   else
    VAR_9->r_pitch = 0x01000000 | VAR_13->pitches[0];
  } else {
   u32 VAR_16 = VAR_11->tile_mode;
   if (FUNC_5(VAR_12->device)->card_type >= VAR_2)
    VAR_16 >>= 4;
   VAR_9->r_pitch = ((VAR_13->pitches[0] / 4) << 4) | VAR_16;
  }
 }

 VAR_14 = FUNC_1(VAR_8, VAR_13, &VAR_7);
 if (VAR_14) {
  return VAR_14;
 }

 return 0;
}
