
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nv50_mast {int dummy; } ;
struct nouveau_framebuffer {int r_pitch; int r_format; int r_dma; TYPE_3__* nvbo; } ;
struct TYPE_8__ {int tile_flags; } ;
struct TYPE_5__ {int dev; } ;
struct nouveau_crtc {int index; TYPE_4__ fb; TYPE_1__ base; } ;
struct drm_framebuffer {int height; int width; } ;
struct TYPE_6__ {int offset; } ;
struct TYPE_7__ {TYPE_2__ bo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,struct nv50_mast*) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (struct nv50_mast*,int) ;
 struct nouveau_framebuffer* FUNC_4 (struct drm_framebuffer*) ;
 struct nv50_mast* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct nv50_mast*) ;

__attribute__((used)) static int
FUNC_7(struct nouveau_crtc *VAR_2, struct drm_framebuffer *VAR_3,
      int VAR_4, int VAR_5, bool VAR_6)
{
 struct nouveau_framebuffer *VAR_7 = FUNC_4(VAR_3);
 struct nv50_mast *VAR_8 = FUNC_5(VAR_2->base.dev);
 u32 *VAR_9;

 VAR_9 = FUNC_3(VAR_8, 16);
 if (VAR_9) {
  if (FUNC_6(VAR_8) < VAR_1) {
   FUNC_2(VAR_9, 0x0860 + (VAR_2->index * 0x400), 1);
   FUNC_0(VAR_9, VAR_7->nvbo->bo.offset >> 8);
   FUNC_2(VAR_9, 0x0868 + (VAR_2->index * 0x400), 3);
   FUNC_0(VAR_9, (VAR_3->height << 16) | VAR_3->width);
   FUNC_0(VAR_9, VAR_7->r_pitch);
   FUNC_0(VAR_9, VAR_7->r_format);
   FUNC_2(VAR_9, 0x08c0 + (VAR_2->index * 0x400), 1);
   FUNC_0(VAR_9, (VAR_5 << 16) | VAR_4);
   if (FUNC_6(VAR_8) > VAR_0) {
    FUNC_2(VAR_9, 0x0874 + (VAR_2->index * 0x400), 1);
    FUNC_0(VAR_9, VAR_7->r_dma);
   }
  } else {
   FUNC_2(VAR_9, 0x0460 + (VAR_2->index * 0x300), 1);
   FUNC_0(VAR_9, VAR_7->nvbo->bo.offset >> 8);
   FUNC_2(VAR_9, 0x0468 + (VAR_2->index * 0x300), 4);
   FUNC_0(VAR_9, (VAR_3->height << 16) | VAR_3->width);
   FUNC_0(VAR_9, VAR_7->r_pitch);
   FUNC_0(VAR_9, VAR_7->r_format);
   FUNC_0(VAR_9, VAR_7->r_dma);
   FUNC_2(VAR_9, 0x04b0 + (VAR_2->index * 0x300), 1);
   FUNC_0(VAR_9, (VAR_5 << 16) | VAR_4);
  }

  if (VAR_6) {
   FUNC_2(VAR_9, 0x0080, 1);
   FUNC_0(VAR_9, 0x00000000);
  }
  FUNC_1(VAR_9, VAR_8);
 }

 VAR_2->fb.tile_flags = VAR_7->r_dma;
 return 0;
}
