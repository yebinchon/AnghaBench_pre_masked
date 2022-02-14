
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;


 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct nouveau_device*,int) ;
 int FUNC_2 (struct drm_device*,int) ;

__attribute__((used)) static u32
FUNC_3(struct drm_device *VAR_0, int VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct nouveau_device *VAR_4 = FUNC_0(VAR_0);
 u32 VAR_5 = FUNC_1(VAR_4, VAR_2 + (VAR_1 * 4));
 u32 VAR_6 = FUNC_1(VAR_4, VAR_3 + (VAR_1 * 4));

 switch (VAR_5 & 0x00000003) {
 case 0:
  if ((VAR_5 & 0x00030000) != 0x00030000)
   return 27000;
  return 108000;
 case 2:
  return 100000;
 case 3:
  if (VAR_6 & 0x80000000) {
   u32 VAR_7 = FUNC_2(VAR_0, VAR_2 + (VAR_1 * 4));
   u32 VAR_8 = (VAR_6 & 0x0000003f) + 2;
   return (VAR_7 * 2) / VAR_8;
  }

  return FUNC_2(VAR_0, VAR_2 + (VAR_1 * 4));
 default:
  return 0;
 }
}
