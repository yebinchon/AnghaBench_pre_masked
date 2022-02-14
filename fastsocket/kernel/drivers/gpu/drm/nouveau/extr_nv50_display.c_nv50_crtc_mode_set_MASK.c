
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv50_mast {int dummy; } ;
struct nouveau_crtc {int index; } ;
struct nouveau_connector {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_display_mode {int flags; int htotal; int hsync_end; int hsync_start; int hdisplay; int vtotal; int vsync_end; int vsync_start; int vdisplay; int clock; } ;
struct drm_crtc {int fb; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,struct nv50_mast*) ;
 int FUNC_2 (int*,int,int) ;
 int* FUNC_3 (struct nv50_mast*,int) ;
 struct nouveau_crtc* FUNC_4 (struct drm_crtc*) ;
 struct nouveau_connector* FUNC_5 (struct nouveau_crtc*) ;
 int FUNC_6 (struct nouveau_crtc*,int) ;
 int FUNC_7 (struct nouveau_crtc*,int) ;
 int FUNC_8 (struct nouveau_crtc*,int ,int,int,int) ;
 int FUNC_9 (struct nouveau_crtc*,int) ;
 int FUNC_10 (struct drm_crtc*,struct drm_framebuffer*) ;
 struct nv50_mast* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (struct nv50_mast*) ;

__attribute__((used)) static int
FUNC_13(struct drm_crtc *VAR_3, struct drm_display_mode *VAR_4,
     struct drm_display_mode *VAR_5, int VAR_6, int VAR_7,
     struct drm_framebuffer *VAR_8)
{
 struct nv50_mast *VAR_9 = FUNC_11(VAR_3->dev);
 struct nouveau_crtc *VAR_10 = FUNC_4(VAR_3);
 struct nouveau_connector *VAR_11;
 u32 VAR_12 = (VAR_5->flags & VAR_1) ? 2 : 1;
 u32 VAR_13 = (VAR_5->flags & VAR_0) ? 2 : 1;
 u32 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 u32 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 u32 VAR_26 = 0, VAR_27 = 1;
 u32 *VAR_28;
 int VAR_29;

 VAR_14 = VAR_5->htotal;
 VAR_15 = VAR_5->hsync_end - VAR_5->hsync_start - 1;
 VAR_16 = VAR_5->htotal - VAR_5->hsync_end;
 VAR_18 = VAR_15 + VAR_16;
 VAR_17 = VAR_5->hsync_start - VAR_5->hdisplay;
 VAR_19 = VAR_5->htotal - VAR_17 - 1;

 VAR_20 = VAR_5->vtotal * VAR_13 / VAR_12;
 VAR_21 = ((VAR_5->vsync_end - VAR_5->vsync_start) * VAR_13 / VAR_12) - 1;
 VAR_22 = (VAR_5->vtotal - VAR_5->vsync_end) * VAR_13 / VAR_12;
 VAR_24 = VAR_21 + VAR_22;
 VAR_23 = (VAR_5->vsync_start - VAR_5->vdisplay) * VAR_13 / VAR_12;
 VAR_25 = VAR_20 - VAR_23 - 1;
 if (VAR_5->flags & VAR_1) {
  VAR_26 = VAR_20 + VAR_21 + VAR_22;
  VAR_27 = VAR_26 + (VAR_5->vdisplay * VAR_13 / VAR_12);
  VAR_20 = (VAR_20 * 2) + 1;
 }

 VAR_29 = FUNC_10(VAR_3, VAR_8);
 if (VAR_29)
  return VAR_29;

 VAR_28 = FUNC_3(VAR_9, 64);
 if (VAR_28) {
  if (FUNC_12(VAR_9) < VAR_2) {
   FUNC_2(VAR_28, 0x0804 + (VAR_10->index * 0x400), 2);
   FUNC_0(VAR_28, 0x00800000 | VAR_5->clock);
   FUNC_0(VAR_28, (VAR_12 == 2) ? 2 : 0);
   FUNC_2(VAR_28, 0x0810 + (VAR_10->index * 0x400), 6);
   FUNC_0(VAR_28, 0x00000000);
   FUNC_0(VAR_28, (VAR_20 << 16) | VAR_14);
   FUNC_0(VAR_28, ( VAR_21 << 16) | VAR_15);
   FUNC_0(VAR_28, (VAR_24 << 16) | VAR_18);
   FUNC_0(VAR_28, (VAR_25 << 16) | VAR_19);
   FUNC_0(VAR_28, (VAR_26 << 16) | VAR_27);
   FUNC_2(VAR_28, 0x082c + (VAR_10->index * 0x400), 1);
   FUNC_0(VAR_28, 0x00000000);
   FUNC_2(VAR_28, 0x0900 + (VAR_10->index * 0x400), 2);
   FUNC_0(VAR_28, 0x00000311);
   FUNC_0(VAR_28, 0x00000100);
  } else {
   FUNC_2(VAR_28, 0x0410 + (VAR_10->index * 0x300), 6);
   FUNC_0(VAR_28, 0x00000000);
   FUNC_0(VAR_28, (VAR_20 << 16) | VAR_14);
   FUNC_0(VAR_28, ( VAR_21 << 16) | VAR_15);
   FUNC_0(VAR_28, (VAR_24 << 16) | VAR_18);
   FUNC_0(VAR_28, (VAR_25 << 16) | VAR_19);
   FUNC_0(VAR_28, (VAR_26 << 16) | VAR_27);
   FUNC_2(VAR_28, 0x042c + (VAR_10->index * 0x300), 1);
   FUNC_0(VAR_28, 0x00000000);
   FUNC_2(VAR_28, 0x0450 + (VAR_10->index * 0x300), 3);
   FUNC_0(VAR_28, VAR_5->clock * 1000);
   FUNC_0(VAR_28, 0x00200000);
   FUNC_0(VAR_28, VAR_5->clock * 1000);
   FUNC_2(VAR_28, 0x04d0 + (VAR_10->index * 0x300), 2);
   FUNC_0(VAR_28, 0x00000311);
   FUNC_0(VAR_28, 0x00000100);
  }

  FUNC_1(VAR_28, VAR_9);
 }

 VAR_11 = FUNC_5(VAR_10);
 FUNC_7(VAR_10, 0);
 FUNC_9(VAR_10, 0);
 FUNC_6(VAR_10, 0);
 FUNC_8(VAR_10, VAR_3->fb, VAR_6, VAR_7, 0);
 return 0;
}
