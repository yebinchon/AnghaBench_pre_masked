
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nv50_sync {int addr; int data; } ;
struct nouveau_framebuffer {int r_dma; int r_pitch; int r_format; TYPE_2__* nvbo; } ;
struct nouveau_crtc {int index; } ;
struct nouveau_channel {int vram; int object; } ;
struct drm_framebuffer {int height; int width; } ;
struct drm_crtc {int dev; } ;
struct TYPE_3__ {int offset; } ;
struct TYPE_4__ {TYPE_1__ bo; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int ,int) ;
 int FUNC_1 (struct nouveau_channel*,int ,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct nouveau_channel*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct nouveau_channel*,int) ;
 int FUNC_4 (struct nouveau_channel*,int) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int*,struct nv50_sync*) ;
 int FUNC_7 (int*,int,int) ;
 int FUNC_8 (int ) ;
 int* FUNC_9 (struct nv50_sync*,int) ;
 int FUNC_10 (int) ;
 struct nouveau_crtc* FUNC_11 (struct drm_crtc*) ;
 struct nouveau_framebuffer* FUNC_12 (struct drm_framebuffer*) ;
 struct nv50_sync* FUNC_13 (struct drm_crtc*) ;
 scalar_t__ FUNC_14 (struct nv50_sync*) ;
 int FUNC_15 (struct nouveau_channel*,int) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int) ;

int
FUNC_19(struct drm_crtc *VAR_13, struct drm_framebuffer *VAR_14,
         struct nouveau_channel *VAR_15, u32 VAR_16)
{
 struct nouveau_framebuffer *VAR_17 = FUNC_12(VAR_14);
 struct nouveau_crtc *VAR_18 = FUNC_11(VAR_13);
 struct nv50_sync *VAR_19 = FUNC_13(VAR_13);
 int VAR_20 = VAR_18->index, VAR_21;
 u32 *VAR_22;

 VAR_16 <<= 4;
 if (VAR_16 == 0)
  VAR_16 |= 0x100;
 if (VAR_15 == ((void*)0))
  FUNC_8(VAR_13->dev);

 VAR_22 = FUNC_9(VAR_19, 128);
 if (FUNC_17(VAR_22 == ((void*)0)))
  return -VAR_0;

 if (VAR_15 && FUNC_16(VAR_15->object) < VAR_4) {
  VAR_21 = FUNC_4(VAR_15, 8);
  if (VAR_21)
   return VAR_21;

  FUNC_0(VAR_15, 0, VAR_1, 2);
  FUNC_3 (VAR_15, VAR_11 + VAR_20);
  FUNC_3 (VAR_15, VAR_19->addr ^ 0x10);
  FUNC_0(VAR_15, 0, VAR_3, 1);
  FUNC_3 (VAR_15, VAR_19->data + 1);
  FUNC_0(VAR_15, 0, VAR_2, 2);
  FUNC_3 (VAR_15, VAR_19->addr);
  FUNC_3 (VAR_15, VAR_19->data);
 } else
 if (VAR_15 && FUNC_16(VAR_15->object) < VAR_8) {
  u64 VAR_23 = FUNC_15(VAR_15, VAR_20) + VAR_19->addr;
  VAR_21 = FUNC_4(VAR_15, 12);
  if (VAR_21)
   return VAR_21;

  FUNC_0(VAR_15, 0, VAR_1, 1);
  FUNC_3 (VAR_15, VAR_15->vram);
  FUNC_0(VAR_15, 0, VAR_5, 4);
  FUNC_3 (VAR_15, FUNC_18(VAR_23 ^ 0x10));
  FUNC_3 (VAR_15, FUNC_10(VAR_23 ^ 0x10));
  FUNC_3 (VAR_15, VAR_19->data + 1);
  FUNC_3 (VAR_15, VAR_7);
  FUNC_0(VAR_15, 0, VAR_5, 4);
  FUNC_3 (VAR_15, FUNC_18(VAR_23));
  FUNC_3 (VAR_15, FUNC_10(VAR_23));
  FUNC_3 (VAR_15, VAR_19->data);
  FUNC_3 (VAR_15, VAR_6);
 } else
 if (VAR_15) {
  u64 VAR_24 = FUNC_15(VAR_15, VAR_20) + VAR_19->addr;
  VAR_21 = FUNC_4(VAR_15, 10);
  if (VAR_21)
   return VAR_21;

  FUNC_1(VAR_15, 0, VAR_5, 4);
  FUNC_3 (VAR_15, FUNC_18(VAR_24 ^ 0x10));
  FUNC_3 (VAR_15, FUNC_10(VAR_24 ^ 0x10));
  FUNC_3 (VAR_15, VAR_19->data + 1);
  FUNC_3 (VAR_15, VAR_7 |
     VAR_9);
  FUNC_1(VAR_15, 0, VAR_5, 4);
  FUNC_3 (VAR_15, FUNC_18(VAR_24));
  FUNC_3 (VAR_15, FUNC_10(VAR_24));
  FUNC_3 (VAR_15, VAR_19->data);
  FUNC_3 (VAR_15, VAR_6 |
     VAR_9);
 }

 if (VAR_15) {
  VAR_19->addr ^= 0x10;
  VAR_19->data++;
  FUNC_2 (VAR_15);
 }


 FUNC_7(VAR_22, 0x0100, 1);
 FUNC_5(VAR_22, 0xfffe0000);
 FUNC_7(VAR_22, 0x0084, 1);
 FUNC_5(VAR_22, VAR_16);
 if (!(VAR_16 & 0x00000100)) {
  FUNC_7(VAR_22, 0x00e0, 1);
  FUNC_5(VAR_22, 0x40000000);
 }
 FUNC_7(VAR_22, 0x0088, 4);
 FUNC_5(VAR_22, VAR_19->addr);
 FUNC_5(VAR_22, VAR_19->data++);
 FUNC_5(VAR_22, VAR_19->data);
 FUNC_5(VAR_22, VAR_12);
 FUNC_7(VAR_22, 0x00a0, 2);
 FUNC_5(VAR_22, 0x00000000);
 FUNC_5(VAR_22, 0x00000000);
 FUNC_7(VAR_22, 0x00c0, 1);
 FUNC_5(VAR_22, VAR_17->r_dma);
 FUNC_7(VAR_22, 0x0110, 2);
 FUNC_5(VAR_22, 0x00000000);
 FUNC_5(VAR_22, 0x00000000);
 if (FUNC_14(VAR_19) < VAR_10) {
  FUNC_7(VAR_22, 0x0800, 5);
  FUNC_5(VAR_22, VAR_17->nvbo->bo.offset >> 8);
  FUNC_5(VAR_22, 0);
  FUNC_5(VAR_22, (VAR_14->height << 16) | VAR_14->width);
  FUNC_5(VAR_22, VAR_17->r_pitch);
  FUNC_5(VAR_22, VAR_17->r_format);
 } else {
  FUNC_7(VAR_22, 0x0400, 5);
  FUNC_5(VAR_22, VAR_17->nvbo->bo.offset >> 8);
  FUNC_5(VAR_22, 0);
  FUNC_5(VAR_22, (VAR_14->height << 16) | VAR_14->width);
  FUNC_5(VAR_22, VAR_17->r_pitch);
  FUNC_5(VAR_22, VAR_17->r_format);
 }
 FUNC_7(VAR_22, 0x0080, 1);
 FUNC_5(VAR_22, 0x00000000);
 FUNC_6(VAR_22, VAR_19);
 return 0;
}
