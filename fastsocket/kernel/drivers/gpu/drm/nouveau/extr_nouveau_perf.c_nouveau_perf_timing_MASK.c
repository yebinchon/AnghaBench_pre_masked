
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvbios {scalar_t__ type; } ;
struct nouveau_drm {struct nvbios vbios; } ;
struct drm_device {int dummy; } ;
struct bit_entry {int version; int * data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int* FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (struct drm_device*,char,struct bit_entry*) ;
 struct nouveau_drm* FUNC_3 (struct drm_device*) ;
 int* FUNC_4 (struct drm_device*,int ,int*,int*,int*,int*) ;
 int* FUNC_5 (struct drm_device*,int,int*,int*) ;

u8 *
FUNC_6(struct drm_device *VAR_1, u32 VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 struct nouveau_drm *VAR_5 = FUNC_3(VAR_1);
 struct nvbios *VAR_6 = &VAR_5->vbios;
 struct bit_entry VAR_7;
 u8 *VAR_8, *VAR_9 = ((void*)0);
 u8 VAR_10 = 0, VAR_11, VAR_12;

 if (VAR_6->type == VAR_0) {
  while ((VAR_8 = FUNC_4(VAR_1, VAR_10++, VAR_3, &VAR_11, &VAR_12,
        VAR_4)) && *VAR_3 == 0x15) {
   if (VAR_2 <= FUNC_0(VAR_8[5]) * 20) {
    *VAR_3 = 0x00;
    *VAR_4 = 14;
    return VAR_8 + 41;
   }
  }
  return ((void*)0);
 }

 if (!FUNC_2(VAR_1, 'P', &VAR_7)) {
  if (VAR_7.version == 1)
   VAR_9 = FUNC_1(VAR_1, VAR_7.data[4]);
  else
  if (VAR_7.version == 2)
   VAR_9 = FUNC_1(VAR_1, VAR_7.data[8]);
 }

 if (VAR_9 && VAR_9[0] == 0x10) {
  u8 *VAR_13 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4);
  if (VAR_13 && VAR_13[1] < VAR_9[2]) {
   *VAR_3 = VAR_9[0];
   *VAR_4 = VAR_9[3];
   return VAR_9 + VAR_9[1] + (VAR_13[1] * VAR_9[3]);
  }
 }

 return ((void*)0);
}
