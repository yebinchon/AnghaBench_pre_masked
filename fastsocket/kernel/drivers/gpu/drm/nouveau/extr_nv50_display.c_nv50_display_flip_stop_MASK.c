
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv50_display_flip {int chan; int disp; } ;
struct nouveau_device {int dummy; } ;
struct drm_crtc {int dev; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (int ,int) ;
 struct nouveau_device* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (struct drm_crtc*) ;
 int FUNC_7 (struct nouveau_device*,int ,struct nv50_display_flip*) ;

void
FUNC_8(struct drm_crtc *VAR_1)
{
 struct nouveau_device *VAR_2 = FUNC_4(VAR_1->dev);
 struct nv50_display_flip VAR_3 = {
  .disp = FUNC_5(VAR_1->dev),
  .chan = FUNC_6(VAR_1),
 };
 u32 *VAR_4;

 VAR_4 = FUNC_3(VAR_3.chan, 8);
 if (VAR_4) {
  FUNC_2(VAR_4, 0x0084, 1);
  FUNC_0(VAR_4, 0x00000000);
  FUNC_2(VAR_4, 0x0094, 1);
  FUNC_0(VAR_4, 0x00000000);
  FUNC_2(VAR_4, 0x00c0, 1);
  FUNC_0(VAR_4, 0x00000000);
  FUNC_2(VAR_4, 0x0080, 1);
  FUNC_0(VAR_4, 0x00000000);
  FUNC_1(VAR_4, VAR_3.chan);
 }

 FUNC_7(VAR_2, VAR_0, &VAR_3);
}
