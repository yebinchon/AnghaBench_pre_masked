
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_device {int dummy; } ;


 int* FUNC_0 (struct drm_device*,int) ;
 int* FUNC_1 (struct drm_device*) ;

u8 *
FUNC_2(struct drm_device *VAR_0)
{
 u8 *VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 && VAR_1[0] >= 0x30 && VAR_1[1] >= 0x16) {
  u8 *VAR_2 = FUNC_0(VAR_0, VAR_1[0x14]);
  if (VAR_2 && VAR_2[0] >= 0x30 && VAR_2[0] <= 0x40)
   return VAR_2;
 }
 return ((void*)0);
}
