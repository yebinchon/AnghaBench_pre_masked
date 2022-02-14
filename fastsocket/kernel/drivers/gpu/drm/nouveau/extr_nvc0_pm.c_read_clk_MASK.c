
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
 int FUNC_3 (struct drm_device*,int) ;

__attribute__((used)) static u32
FUNC_4(struct drm_device *VAR_0, int VAR_1)
{
 struct nouveau_device *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3 = FUNC_1(VAR_2, 0x137250 + (VAR_1 * 4));
 u32 VAR_4 = FUNC_1(VAR_2, 0x137100);
 u32 VAR_5, VAR_6;

 if (VAR_4 & (1 << VAR_1)) {
  if (VAR_1 < 7)
   VAR_5 = FUNC_3(VAR_0, 0x137000 + (VAR_1 * 0x20));
  else
   VAR_5 = FUNC_3(VAR_0, 0x1370e0);
  VAR_6 = ((VAR_3 & 0x00003f00) >> 8) + 2;
 } else {
  VAR_5 = FUNC_2(VAR_0, VAR_1, 0x137160, 0x1371d0);
  VAR_6 = ((VAR_3 & 0x0000003f) >> 0) + 2;
 }

 if (VAR_3 & 0x80000000)
  return (VAR_5 * 2) / VAR_6;
 return VAR_5;
}
