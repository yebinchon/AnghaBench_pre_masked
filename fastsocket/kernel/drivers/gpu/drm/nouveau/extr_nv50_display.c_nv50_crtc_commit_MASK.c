
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct nv50_mast {int dummy; } ;
struct TYPE_10__ {int visible; } ;
struct TYPE_9__ {TYPE_3__* nvbo; } ;
struct TYPE_6__ {int tile_flags; } ;
struct nouveau_crtc {int index; TYPE_5__ cursor; TYPE_4__ lut; TYPE_1__ fb; } ;
struct drm_crtc {int fb; int dev; } ;
struct TYPE_7__ {int offset; } ;
struct TYPE_8__ {TYPE_2__ bo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,struct nv50_mast*) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (struct nv50_mast*,int) ;
 struct nouveau_crtc* FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct nouveau_crtc*,int ,int) ;
 int FUNC_6 (struct drm_crtc*,int ,int *,int) ;
 struct nv50_mast* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct nv50_mast*) ;

__attribute__((used)) static void
FUNC_9(struct drm_crtc *VAR_4)
{
 struct nouveau_crtc *VAR_5 = FUNC_4(VAR_4);
 struct nv50_mast *VAR_6 = FUNC_7(VAR_4->dev);
 u32 *VAR_7;

 VAR_7 = FUNC_3(VAR_6, 32);
 if (VAR_7) {
  if (FUNC_8(VAR_6) < VAR_0) {
   FUNC_2(VAR_7, 0x0874 + (VAR_5->index * 0x400), 1);
   FUNC_0(VAR_7, VAR_3);
   FUNC_2(VAR_7, 0x0840 + (VAR_5->index * 0x400), 2);
   FUNC_0(VAR_7, 0xc0000000);
   FUNC_0(VAR_7, VAR_5->lut.nvbo->bo.offset >> 8);
  } else
  if (FUNC_8(VAR_6) < VAR_1) {
   FUNC_2(VAR_7, 0x0874 + (VAR_5->index * 0x400), 1);
   FUNC_0(VAR_7, VAR_5->fb.tile_flags);
   FUNC_2(VAR_7, 0x0840 + (VAR_5->index * 0x400), 2);
   FUNC_0(VAR_7, 0xc0000000);
   FUNC_0(VAR_7, VAR_5->lut.nvbo->bo.offset >> 8);
   FUNC_2(VAR_7, 0x085c + (VAR_5->index * 0x400), 1);
   FUNC_0(VAR_7, VAR_2);
  } else {
   FUNC_2(VAR_7, 0x0474 + (VAR_5->index * 0x300), 1);
   FUNC_0(VAR_7, VAR_5->fb.tile_flags);
   FUNC_2(VAR_7, 0x0440 + (VAR_5->index * 0x300), 4);
   FUNC_0(VAR_7, 0x83000000);
   FUNC_0(VAR_7, VAR_5->lut.nvbo->bo.offset >> 8);
   FUNC_0(VAR_7, 0x00000000);
   FUNC_0(VAR_7, 0x00000000);
   FUNC_2(VAR_7, 0x045c + (VAR_5->index * 0x300), 1);
   FUNC_0(VAR_7, VAR_2);
   FUNC_2(VAR_7, 0x0430 + (VAR_5->index * 0x300), 1);
   FUNC_0(VAR_7, 0xffffff00);
  }

  FUNC_1(VAR_7, VAR_6);
 }

 FUNC_5(VAR_5, VAR_5->cursor.visible, 1);
 FUNC_6(VAR_4, VAR_4->fb, ((void*)0), 1);
}
