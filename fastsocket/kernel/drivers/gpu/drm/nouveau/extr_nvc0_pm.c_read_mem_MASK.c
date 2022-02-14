
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;


 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct nouveau_device*,int) ;
 int FUNC_2 (struct drm_device*,int ,int,int) ;
 int FUNC_3 (struct drm_device*,int) ;

__attribute__((used)) static u32
FUNC_4(struct drm_device *VAR_0)
{
 struct nouveau_device *VAR_1 = FUNC_0(VAR_0);
 u32 VAR_2 = FUNC_1(VAR_1, 0x1373f0);
 if (VAR_2 & 0x00000001)
  return FUNC_2(VAR_0, 0, 0x137300, 0x137310);
 return FUNC_3(VAR_0, 0x132000);
}
