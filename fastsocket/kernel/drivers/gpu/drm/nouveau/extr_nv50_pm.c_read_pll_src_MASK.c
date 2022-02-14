
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_drm {int device; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int chipset; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nouveau_drm*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_device* FUNC_2 (struct drm_device*) ;
 struct nouveau_drm* FUNC_3 (struct drm_device*) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (struct nouveau_device*,int) ;
 int FUNC_6 (struct drm_device*,int ) ;

__attribute__((used)) static u32
FUNC_7(struct drm_device *VAR_2, u32 VAR_3)
{
 struct nouveau_device *VAR_4 = FUNC_2(VAR_2);
 struct nouveau_drm *VAR_5 = FUNC_3(VAR_2);
 u32 VAR_6, VAR_7 = FUNC_6(VAR_2, VAR_0);
 u32 VAR_8 = FUNC_5(VAR_4, 0x00e18c);
 int VAR_9, VAR_10, VAR_11, VAR_12;

 switch (FUNC_4(VAR_5->device)->chipset) {
 case 0x50:
 case 0xa0:
  switch (VAR_3) {
  case 0x4020:
  case 0x4028: VAR_12 = !!(VAR_8 & 0x00000004); break;
  case 0x4008: VAR_12 = !!(VAR_8 & 0x00000008); break;
  case 0x4030: VAR_12 = 0; break;
  default:
   FUNC_1(VAR_5, "ref: bad pll 0x%06x\n", VAR_3);
   return 0;
  }

  VAR_6 = FUNC_5(VAR_4, 0x00e81c + (VAR_12 * 0x0c));
  VAR_7 *= (VAR_6 & 0x01000000) ? 2 : 4;
  VAR_9 = (VAR_6 & 0x00070000) >> 16;
  VAR_10 = ((VAR_6 & 0x0000ff00) >> 8) + 1;
  VAR_11 = ((VAR_6 & 0x000000ff) >> 0) + 1;
  break;
 case 0x84:
 case 0x86:
 case 0x92:
  VAR_6 = FUNC_5(VAR_4, 0x00e81c);
  VAR_9 = (VAR_6 & 0x00070000) >> 16;
  VAR_10 = (VAR_6 & 0x0000ff00) >> 8;
  VAR_11 = (VAR_6 & 0x000000ff) >> 0;
  break;
 case 0x94:
 case 0x96:
 case 0x98:
  VAR_8 = FUNC_5(VAR_4, 0x00c050);
  switch (VAR_3) {
  case 0x4020: VAR_8 = (VAR_8 & 0x00000003) >> 0; break;
  case 0x4008: VAR_8 = (VAR_8 & 0x0000000c) >> 2; break;
  case 0x4028: VAR_8 = (VAR_8 & 0x00001800) >> 11; break;
  case 0x4030: VAR_8 = 3; break;
  default:
   FUNC_1(VAR_5, "ref: bad pll 0x%06x\n", VAR_3);
   return 0;
  }

  switch (VAR_8) {
  case 0: VAR_12 = 1; break;
  case 1: return FUNC_6(VAR_2, VAR_0);
  case 2: return FUNC_6(VAR_2, VAR_1);
  case 3: VAR_12 = 0; break;
  }

  VAR_6 = FUNC_5(VAR_4, 0x00e81c + (VAR_12 * 0x28));
  VAR_9 = (FUNC_5(VAR_4, 0x00e824 + (VAR_12 * 0x28)) >> 16) & 7;
  VAR_9 += (VAR_6 & 0x00070000) >> 16;
  VAR_10 = (VAR_6 & 0x0000ff00) >> 8;
  VAR_11 = (VAR_6 & 0x000000ff) >> 0;
  break;
 default:
  FUNC_0(1);
 }

 if (VAR_11)
  return (VAR_7 * VAR_10 / VAR_11) >> VAR_9;
 return 0;
}
