
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_drm {int device; } ;
struct nouveau_device {int crystal; } ;
struct drm_device {int dummy; } ;
typedef enum clk_src { ____Placeholder_clk_src } clk_src ;
struct TYPE_2__ {int chipset; } ;


 int FUNC_0 (struct nouveau_drm*,char*,int,int) ;
 struct nouveau_device* FUNC_1 (struct drm_device*) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (struct nouveau_device*,int) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*,int) ;

__attribute__((used)) static u32
FUNC_7(struct drm_device *VAR_0, enum clk_src VAR_1)
{
 struct nouveau_device *VAR_2 = FUNC_1(VAR_0);
 struct nouveau_drm *VAR_3 = FUNC_2(VAR_0);
 u32 VAR_4 = FUNC_4(VAR_2, 0x00c040);
 u32 VAR_5 = 0;

 switch (VAR_1) {
 case 138:
  return VAR_2->crystal;
 case 132:
  return 100000;
 case 136:
  return FUNC_7(VAR_0, 132) * 27778 / 10000;
 case 135:
  return FUNC_7(VAR_0, 136) * 3;
 case 134:
  return FUNC_7(VAR_0, 136) * 3 / 2;
 case 133:
  switch (VAR_4 & 0x30000000) {
  case 0x00000000: return FUNC_7(VAR_0, 132);
  case 0x10000000: break;
  case 0x20000000:
  case 0x30000000: return FUNC_7(VAR_0, 136);
  }
  break;
 case 130:
  if (!(VAR_4 & 0x00100000))
   VAR_5 = (FUNC_4(VAR_2, 0x004028) & 0x00070000) >> 16;
  switch (VAR_4 & 0x00000003) {
  case 0x00000000: return FUNC_7(VAR_0, 138) >> VAR_5;
  case 0x00000001: return FUNC_7(VAR_0, 137);
  case 0x00000002: return FUNC_6(VAR_0, 0x004020) >> VAR_5;
  case 0x00000003: return FUNC_6(VAR_0, 0x004028) >> VAR_5;
  }
  break;
 case 129:
  VAR_5 = (FUNC_4(VAR_2, 0x004020) & 0x00070000) >> 16;
  switch (VAR_4 & 0x00000030) {
  case 0x00000000:
   if (VAR_4 & 0x00000080)
    return FUNC_7(VAR_0, 133) >> VAR_5;
   return FUNC_7(VAR_0, 138) >> VAR_5;
  case 0x00000010: break;
  case 0x00000020: return FUNC_6(VAR_0, 0x004028) >> VAR_5;
  case 0x00000030: return FUNC_6(VAR_0, 0x004020) >> VAR_5;
  }
  break;
 case 131:
  VAR_5 = (FUNC_4(VAR_2, 0x004008) & 0x00070000) >> 16;
  if (FUNC_4(VAR_2, 0x004008) & 0x00000200) {
   switch (VAR_4 & 0x0000c000) {
   case 0x00000000:
    return FUNC_7(VAR_0, 138) >> VAR_5;
   case 0x00008000:
   case 0x0000c000:
    return FUNC_7(VAR_0, 132) >> VAR_5;
   }
  } else {
   return FUNC_6(VAR_0, 0x004008) >> VAR_5;
  }
  break;
 case 128:
  VAR_5 = (FUNC_5(VAR_0) & 0x00000700) >> 8;
  switch (FUNC_3(VAR_3->device)->chipset) {
  case 0x84:
  case 0x86:
  case 0x92:
  case 0x94:
  case 0x96:
  case 0xa0:
   switch (VAR_4 & 0x00000c00) {
   case 0x00000000:
    if (FUNC_3(VAR_3->device)->chipset == 0xa0)
     return FUNC_7(VAR_0, 130) >> VAR_5;
    return FUNC_7(VAR_0, 138) >> VAR_5;
   case 0x00000400:
    return 0;
   case 0x00000800:
    if (VAR_4 & 0x01000000)
     return FUNC_6(VAR_0, 0x004028) >> VAR_5;
    return FUNC_6(VAR_0, 0x004030) >> VAR_5;
   case 0x00000c00:
    return FUNC_7(VAR_0, 130) >> VAR_5;
   }
   break;
  case 0x98:
   switch (VAR_4 & 0x00000c00) {
   case 0x00000000:
    return FUNC_7(VAR_0, 130) >> VAR_5;
   case 0x00000400:
    return 0;
   case 0x00000800:
    return FUNC_7(VAR_0, 134) >> VAR_5;
   case 0x00000c00:
    return FUNC_7(VAR_0, 131) >> VAR_5;
   }
   break;
  }
  break;
 case 137:
  switch (FUNC_3(VAR_3->device)->chipset) {
  case 0x50:
  case 0xa0:
   return FUNC_6(VAR_0, 0x00e810) >> 2;
  case 0x84:
  case 0x86:
  case 0x92:
  case 0x94:
  case 0x96:
  case 0x98:
   VAR_5 = (FUNC_5(VAR_0) & 0x00000007) >> 0;
   switch (VAR_4 & 0x0c000000) {
   case 0x00000000: return FUNC_7(VAR_0, 132);
   case 0x04000000: break;
   case 0x08000000: return FUNC_7(VAR_0, 136);
   case 0x0c000000:
    return FUNC_7(VAR_0, 135) >> VAR_5;
   }
   break;
  default:
   break;
  }
 default:
  break;
 }

 FUNC_0(VAR_3, "unknown clock source %d 0x%08x\n", VAR_1, VAR_4);
 return 0;
}
