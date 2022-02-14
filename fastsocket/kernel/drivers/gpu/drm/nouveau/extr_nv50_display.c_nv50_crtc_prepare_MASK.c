
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv50_mast {int dummy; } ;
struct nouveau_crtc {int index; } ;
struct drm_crtc {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,struct nv50_mast*) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (struct nv50_mast*,int) ;
 struct nouveau_crtc* FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct nouveau_crtc*,int,int) ;
 int FUNC_6 (struct drm_crtc*) ;
 struct nv50_mast* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct nv50_mast*) ;

__attribute__((used)) static void
FUNC_9(struct drm_crtc *VAR_2)
{
 struct nouveau_crtc *VAR_3 = FUNC_4(VAR_2);
 struct nv50_mast *VAR_4 = FUNC_7(VAR_2->dev);
 u32 *VAR_5;

 FUNC_6(VAR_2);

 VAR_5 = FUNC_3(VAR_4, 2);
 if (VAR_5) {
  if (FUNC_8(VAR_4) < VAR_0) {
   FUNC_2(VAR_5, 0x0874 + (VAR_3->index * 0x400), 1);
   FUNC_0(VAR_5, 0x00000000);
   FUNC_2(VAR_5, 0x0840 + (VAR_3->index * 0x400), 1);
   FUNC_0(VAR_5, 0x40000000);
  } else
  if (FUNC_8(VAR_4) < VAR_1) {
   FUNC_2(VAR_5, 0x0874 + (VAR_3->index * 0x400), 1);
   FUNC_0(VAR_5, 0x00000000);
   FUNC_2(VAR_5, 0x0840 + (VAR_3->index * 0x400), 1);
   FUNC_0(VAR_5, 0x40000000);
   FUNC_2(VAR_5, 0x085c + (VAR_3->index * 0x400), 1);
   FUNC_0(VAR_5, 0x00000000);
  } else {
   FUNC_2(VAR_5, 0x0474 + (VAR_3->index * 0x300), 1);
   FUNC_0(VAR_5, 0x00000000);
   FUNC_2(VAR_5, 0x0440 + (VAR_3->index * 0x300), 1);
   FUNC_0(VAR_5, 0x03000000);
   FUNC_2(VAR_5, 0x045c + (VAR_3->index * 0x300), 1);
   FUNC_0(VAR_5, 0x00000000);
  }

  FUNC_1(VAR_5, VAR_4);
 }

 FUNC_5(VAR_3, 0, 0);
}
