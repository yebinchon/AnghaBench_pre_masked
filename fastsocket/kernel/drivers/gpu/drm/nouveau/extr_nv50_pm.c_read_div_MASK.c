
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


 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (struct nouveau_device*,int) ;

__attribute__((used)) static u32
FUNC_4(struct drm_device *VAR_0)
{
 struct nouveau_device *VAR_1 = FUNC_0(VAR_0);
 struct nouveau_drm *VAR_2 = FUNC_1(VAR_0);

 switch (FUNC_2(VAR_2->device)->chipset) {
 case 0x50:
 case 0x84:
 case 0x86:
 case 0x98:
 case 0xa0:
  return FUNC_3(VAR_1, 0x004700);
 case 0x92:
 case 0x94:
 case 0x96:
  return FUNC_3(VAR_1, 0x004800);
 default:
  return 0x00000000;
 }
}
