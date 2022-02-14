
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvbios_pll {int refclk; } ;
struct nouveau_device {int dummy; } ;
struct nouveau_bios {int dummy; } ;
struct drm_device {int dummy; } ;


 struct nouveau_bios* FUNC_0 (struct nouveau_device*) ;
 struct nouveau_device* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*,struct nvbios_pll*,int,int*,int *,int*,int*) ;
 int FUNC_3 (struct nouveau_bios*,int,struct nvbios_pll*) ;
 int FUNC_4 (struct drm_device*,int,int,int) ;

__attribute__((used)) static u32
FUNC_5(struct drm_device *VAR_0, int VAR_1, u32 VAR_2, u32 *VAR_3)
{
 struct nouveau_device *VAR_4 = FUNC_1(VAR_0);
 struct nouveau_bios *VAR_5 = FUNC_0(VAR_4);
 struct nvbios_pll VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_10 = FUNC_3(VAR_5, 0x137000 + (VAR_1 * 0x20), &VAR_6);
 if (VAR_10)
  return 0;

 VAR_6.refclk = FUNC_4(VAR_0, VAR_1, 0x137120, 0x137140);
 if (!VAR_6.refclk)
  return 0;

 VAR_10 = FUNC_2(VAR_0, &VAR_6, VAR_2, &VAR_7, ((void*)0), &VAR_8, &VAR_9);
 if (VAR_10 <= 0)
  return 0;

 *VAR_3 = (VAR_9 << 16) | (VAR_7 << 8) | VAR_8;
 return VAR_10;
}
