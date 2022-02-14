
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint16_t ;
struct nvbios {int* data; } ;
struct nouveau_drm {int device; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_drm*,char*) ;
 int FUNC_1 (struct nouveau_drm*,char*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 struct nouveau_drm* FUNC_3 (struct drm_device*) ;
 struct nouveau_device* FUNC_4 (int ) ;
 int FUNC_5 (struct nouveau_device*,int) ;
 int FUNC_6 (struct nouveau_device*,int,int) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_3, struct nvbios *VAR_4, uint16_t VAR_5, int VAR_6)
{
 struct nouveau_drm *VAR_7 = FUNC_3(VAR_3);
 struct nouveau_device *VAR_8 = FUNC_4(VAR_7->device);
 uint8_t VAR_9;
 uint16_t VAR_10;
 int VAR_11;

 if (VAR_4->data[VAR_5] <= VAR_6) {
  FUNC_0(VAR_7, "Too few entries in HW sequencer table for "
    "requested entry\n");
  return -VAR_1;
 }

 VAR_9 = VAR_4->data[VAR_5 + 1];

 if (VAR_9 != 36) {
  FUNC_0(VAR_7, "Unknown HW sequencer entry size\n");
  return -VAR_0;
 }

 FUNC_1(VAR_7, "Loading NV17 power sequencing microcode\n");

 VAR_10 = VAR_5 + 2 + VAR_6 * VAR_9;


 FUNC_6(VAR_8, 0x00001304, FUNC_2(VAR_4->data[VAR_10]));
 VAR_9 -= 4;


 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11 += 4)
  FUNC_6(VAR_8, 0x00001400 + VAR_11, FUNC_2(VAR_4->data[VAR_10 + VAR_11 + 4]));


 FUNC_6(VAR_8, VAR_2, FUNC_5(VAR_8, VAR_2) | 0x18);

 return 0;
}
