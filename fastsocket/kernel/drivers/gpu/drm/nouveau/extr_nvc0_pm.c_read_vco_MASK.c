
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;


 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct nouveau_device*,int) ;
 int FUNC_2 (struct drm_device*,int) ;

__attribute__((used)) static u32
FUNC_3(struct drm_device *VAR_0, u32 VAR_1)
{
 struct nouveau_device *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (!(VAR_3 & 0x00000100))
  return FUNC_2(VAR_0, 0x00e800);
 return FUNC_2(VAR_0, 0x00e820);
}
