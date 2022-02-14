
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nouveau_drm {int device; } ;
struct drm_device {int dummy; } ;
struct bit_entry {int version; int * data; } ;
struct TYPE_2__ {int chipset; } ;


 int FUNC_0 (int) ;
 int* FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (struct drm_device*,char,struct bit_entry*) ;
 struct nouveau_drm* FUNC_3 (struct drm_device*) ;
 int* FUNC_4 (struct drm_device*,int ,int*,int*,int*,int*) ;
 TYPE_1__* FUNC_5 (int ) ;

u8 *
FUNC_6(struct drm_device *VAR_0, u32 VAR_1,
      u8 *VAR_2, u8 *VAR_3, u8 *VAR_4, u8 *VAR_5)
{
 struct nouveau_drm *VAR_6 = FUNC_3(VAR_0);
 struct bit_entry VAR_7;
 u8 *VAR_8, VAR_9 = 0;

 if (!FUNC_2(VAR_0, 'P', &VAR_7) && VAR_7.version == 2) {
  u8 *VAR_10 = FUNC_1(VAR_0, VAR_7.data[4]);
  if (VAR_10) {
   u8 *VAR_11 = VAR_10 + VAR_10[1];

   *VAR_2 = VAR_10[0];
   *VAR_3 = VAR_10[2];
   *VAR_4 = VAR_10[4];
   *VAR_5 = VAR_10[3];

   VAR_1 /= 1000;
   for (VAR_9 = 0; VAR_9 < VAR_10[5]; VAR_9++) {
    if (VAR_1 >= FUNC_0(VAR_11[0]) &&
        VAR_1 <= FUNC_0(VAR_11[2]))
     return VAR_11;

    VAR_11 += *VAR_3 + (*VAR_4 * *VAR_5);
   }
  }

  return ((void*)0);
 }

 if (FUNC_5(VAR_6->device)->chipset == 0x49 ||
     FUNC_5(VAR_6->device)->chipset == 0x4b)
  VAR_1 /= 2;

 while ((VAR_8 = FUNC_4(VAR_0, VAR_9++, VAR_2, VAR_3, VAR_4, VAR_5))) {
  if (*VAR_2 >= 0x20 && *VAR_2 < 0x25) {
   if (VAR_8[0] != 0xff && VAR_1 <= FUNC_0(VAR_8[11]) * 1000)
    break;
  } else
  if (*VAR_2 >= 0x25 && *VAR_2 < 0x40) {
   if (VAR_8[0] != 0xff && VAR_1 <= FUNC_0(VAR_8[12]) * 1000)
    break;
  }
 }

 if (VAR_8) {
  u8 *VAR_12 = VAR_8 + *VAR_3;
  *VAR_2 = 0x00;
  *VAR_3 = 0;
  return VAR_12;
 }

 return ((void*)0);
}
