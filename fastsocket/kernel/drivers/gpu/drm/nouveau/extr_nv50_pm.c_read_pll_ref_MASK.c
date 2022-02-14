
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_drm {int dummy; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct nouveau_drm*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_device* FUNC_1 (struct drm_device*) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct nouveau_device*,int) ;
 int FUNC_4 (struct drm_device*,int ) ;
 int FUNC_5 (struct drm_device*,int) ;

__attribute__((used)) static u32
FUNC_6(struct drm_device *VAR_2, u32 VAR_3)
{
 struct nouveau_device *VAR_4 = FUNC_1(VAR_2);
 struct nouveau_drm *VAR_5 = FUNC_2(VAR_2);
 u32 VAR_6, VAR_7 = FUNC_3(VAR_4, 0x00c040);

 switch (VAR_3) {
 case 0x004028:
  VAR_6 = !!(VAR_7 & 0x00200000);
  break;
 case 0x004020:
  VAR_6 = !!(VAR_7 & 0x00400000);
  break;
 case 0x004008:
  VAR_6 = !!(VAR_7 & 0x00010000);
  break;
 case 0x004030:
  VAR_6 = !!(VAR_7 & 0x02000000);
  break;
 case 0x00e810:
  return FUNC_4(VAR_2, VAR_0);
 default:
  FUNC_0(VAR_5, "bad pll 0x%06x\n", VAR_3);
  return 0;
 }

 if (VAR_6)
  return FUNC_4(VAR_2, VAR_1);
 return FUNC_5(VAR_2, VAR_3);
}
