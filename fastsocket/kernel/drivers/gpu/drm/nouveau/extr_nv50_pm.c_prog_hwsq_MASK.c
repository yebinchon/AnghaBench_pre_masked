
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_drm {int device; } ;
struct nouveau_device {int dummy; } ;
struct TYPE_3__ {int* u32; } ;
struct hwsq_ucode {int len; TYPE_1__ ptr; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {int chipset; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_drm*,char*,...) ;
 struct nouveau_device* FUNC_1 (struct drm_device*) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (struct nouveau_device*,int,int,int) ;
 int FUNC_5 (struct nouveau_device*,int) ;
 int FUNC_6 (struct nouveau_device*,int,int,int) ;
 int FUNC_7 (struct nouveau_device*,int,int) ;

__attribute__((used)) static int
FUNC_8(struct drm_device *VAR_1, struct hwsq_ucode *VAR_2)
{
 struct nouveau_device *VAR_3 = FUNC_1(VAR_1);
 struct nouveau_drm *VAR_4 = FUNC_2(VAR_1);
 u32 VAR_5, VAR_6;
 int VAR_7;

 if (FUNC_3(VAR_4->device)->chipset < 0x94) {
  VAR_5 = 0x001400;
  VAR_6 = 0x00000003;
 } else {
  VAR_5 = 0x080000;
  VAR_6 = 0x00000001;
 }

 FUNC_4(VAR_3, 0x001098, 0x00000008, 0x00000000);
 FUNC_7(VAR_3, 0x001304, 0x00000000);
 if (FUNC_3(VAR_4->device)->chipset >= 0x92)
  FUNC_7(VAR_3, 0x001318, 0x00000000);
 for (VAR_7 = 0; VAR_7 < VAR_2->len / 4; VAR_7++)
  FUNC_7(VAR_3, VAR_5 + (VAR_7 * 4), VAR_2->ptr.u32[VAR_7]);
 FUNC_4(VAR_3, 0x001098, 0x00000018, 0x00000018);


 FUNC_7(VAR_3, 0x00130c, VAR_6);
 if (!FUNC_6(VAR_3, 0x001308, 0x00000100, 0x00000000)) {
  FUNC_0(VAR_4, "hwsq ucode exec timed out\n");
  FUNC_0(VAR_4, "0x001308: 0x%08x\n", FUNC_5(VAR_3, 0x001308));
  for (VAR_7 = 0; VAR_7 < VAR_2->len / 4; VAR_7++) {
   FUNC_0(VAR_4, "0x%06x: 0x%08x\n", 0x1400 + (VAR_7 * 4),
     FUNC_5(VAR_3, 0x001400 + (VAR_7 * 4)));
  }

  return -VAR_0;
 }

 return 0;
}
