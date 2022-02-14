
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_drm {int device; } ;
struct nouveau_device {int crystal; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int chipset; } ;


 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (struct nouveau_device*,int) ;
 int FUNC_4 (struct drm_device*,int) ;

__attribute__((used)) static u32
FUNC_5(struct drm_device *VAR_0, int VAR_1, bool VAR_2)
{
 struct nouveau_device *VAR_3 = FUNC_0(VAR_0);
 struct nouveau_drm *VAR_4 = FUNC_1(VAR_0);
 u32 VAR_5, VAR_6, VAR_7;


 if (VAR_1 >= 0x40) {
  if (FUNC_2(VAR_4->device)->chipset == 0xaf) {

   return FUNC_3(VAR_3, 0x00471c) * 1000;
  }

  return VAR_3->crystal;
 }

 VAR_5 = FUNC_3(VAR_3, 0x4120 + (VAR_1 * 4));
 if (!VAR_2 && !(VAR_5 & 0x00000100))
  return 0;

 switch (VAR_5 & 0x00003000) {
 case 0x00000000:
  return VAR_3->crystal;
 case 0x00002000:
  if (VAR_5 & 0x00000040)
   return 108000;
  return 100000;
 case 0x00003000:
  VAR_7 = FUNC_4(VAR_0, VAR_1);
  VAR_6 = ((VAR_5 & 0x003f0000) >> 16) + 2;
  return (VAR_7 * 2) / VAR_6;
 default:
  return 0;
 }
}
