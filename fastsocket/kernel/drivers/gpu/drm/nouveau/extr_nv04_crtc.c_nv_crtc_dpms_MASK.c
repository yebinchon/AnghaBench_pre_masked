
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_drm {int dummy; } ;
struct nouveau_crtc {int last_dpms; int index; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;






 int FUNC_0 (struct drm_device*,int ,int ) ;
 int FUNC_1 (struct drm_device*,int ,int ) ;
 int FUNC_2 (struct drm_device*,int ) ;
 int FUNC_3 (struct drm_device*,int ,int) ;
 int FUNC_4 (struct drm_device*,int ,int ,unsigned char) ;
 int FUNC_5 (struct drm_device*,int ,int ,unsigned char) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (struct nouveau_drm*,char*,int,int ) ;
 int VAR_2 ;
 int FUNC_7 (int) ;
 struct nouveau_crtc* FUNC_8 (struct drm_crtc*) ;
 struct nouveau_drm* FUNC_9 (struct drm_device*) ;
 scalar_t__ FUNC_10 (struct drm_device*) ;

__attribute__((used)) static void
FUNC_11(struct drm_crtc *VAR_3, int VAR_4)
{
 struct nouveau_crtc *VAR_5 = FUNC_8(VAR_3);
 struct drm_device *VAR_6 = VAR_3->dev;
 struct nouveau_drm *VAR_7 = FUNC_9(VAR_6);
 unsigned char VAR_8 = 0, VAR_9 = 0;
 unsigned char VAR_10;

 FUNC_6(VAR_7, "Setting dpms mode %d on CRTC %d\n", VAR_4,
       VAR_5->index);

 if (VAR_5->last_dpms == VAR_4)
  return;

 VAR_5->last_dpms = VAR_4;

 if (FUNC_10(VAR_6))
  FUNC_2(VAR_6, VAR_5->index);


 VAR_10 = FUNC_0(VAR_6, VAR_5->index,
     VAR_0) & ~0xC0;
 switch (VAR_4) {
 case 129:

  VAR_8 = 0x20;
  VAR_9 = 0x80;
  VAR_10 |= 0x80;
  break;
 case 128:

  VAR_8 = 0x20;
  VAR_9 = 0x80;
  VAR_10 |= 0x40;
  break;
 case 131:

  VAR_8 = 0x20;
  VAR_9 = 0x00;
  VAR_10 |= 0xC0;
  break;
 case 130:
 default:

  VAR_8 = 0x00;
  VAR_9 = 0x80;
  break;
 }

 FUNC_3(VAR_6, VAR_5->index, 1);

 VAR_8 |= (FUNC_1(VAR_6, VAR_5->index, VAR_2) & ~0x20);
 FUNC_5(VAR_6, VAR_5->index, VAR_2, VAR_8);
 VAR_9 |= (FUNC_0(VAR_6, VAR_5->index, VAR_1) & ~0x80);
 FUNC_7(10);
 FUNC_4(VAR_6, VAR_5->index, VAR_1, VAR_9);
 FUNC_3(VAR_6, VAR_5->index, 0);

 FUNC_4(VAR_6, VAR_5->index, VAR_0, VAR_10);
}
