
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_device {int dummy; } ;


 int* FUNC_0 (struct drm_device*,int*) ;

__attribute__((used)) static u8 *
FUNC_1(struct drm_device *VAR_0, int VAR_1,
     u8 *VAR_2, u8 *VAR_3, u8 *VAR_4, u8 *VAR_5)
{
 u8 *VAR_6 = FUNC_0(VAR_0, VAR_2);
 if (VAR_6) {
  if (*VAR_2 >= 0x12 && *VAR_2 < 0x20 && VAR_1 < VAR_6[2]) {
   *VAR_3 = VAR_6[3];
   *VAR_4 = 0;
   *VAR_5 = 0;
   return VAR_6 + VAR_6[0] + VAR_1 * VAR_6[3];
  } else
  if (*VAR_2 >= 0x20 && *VAR_2 < 0x40 && VAR_1 < VAR_6[2]) {
   *VAR_3 = VAR_6[3];
   *VAR_4 = VAR_6[4];
   *VAR_5 = VAR_6[5];
   return VAR_6 + VAR_6[1] + VAR_1 * (*VAR_3 + (*VAR_4 * *VAR_5));
  } else
  if (*VAR_2 >= 0x40 && *VAR_2 < 0x41 && VAR_1 < VAR_6[5]) {
   *VAR_3 = VAR_6[2];
   *VAR_4 = VAR_6[4];
   *VAR_5 = VAR_6[3];
   return VAR_6 + VAR_6[1] + VAR_1 * (*VAR_3 + (*VAR_4 * *VAR_5));
  }
 }
 return ((void*)0);
}
