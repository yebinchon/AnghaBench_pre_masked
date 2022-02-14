
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;


 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct nouveau_device*,int) ;
 int FUNC_2 (struct drm_device*,int,int,int) ;

__attribute__((used)) static u32
FUNC_3(struct drm_device *VAR_0, u32 VAR_1)
{
 struct nouveau_device *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3 = FUNC_1(VAR_2, VAR_1 + 0);
 u32 VAR_4 = FUNC_1(VAR_2, VAR_1 + 4);
 u32 VAR_5 = (VAR_4 & 0x003f0000) >> 16;
 u32 VAR_6 = (VAR_4 & 0x0000ff00) >> 8;
 u32 VAR_7 = (VAR_4 & 0x000000ff) >> 0;
 u32 VAR_8, VAR_9;

 if (!(VAR_3 & 0x00000001))
  return 0;

 switch (VAR_1 & 0xfff000) {
 case 0x00e000:
  VAR_8 = 27000;
  VAR_5 = 1;
  break;
 case 0x137000:
  VAR_9 = (VAR_1 - 0x137000) / 0x20;
  VAR_8 = FUNC_2(VAR_0, VAR_9, 0x137120, 0x137140);
  break;
 case 0x132000:
  switch (VAR_1) {
  case 0x132000:
   VAR_8 = FUNC_3(VAR_0, 0x132020);
   break;
  case 0x132020:
   VAR_8 = FUNC_2(VAR_0, 0, 0x137320, 0x137330);
   break;
  default:
   return 0;
  }
  break;
 default:
  return 0;
 }

 return VAR_8 * VAR_6 / VAR_7 / VAR_5;
}
