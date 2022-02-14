
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ max_freq; } ;
struct nvbios_pll {int refclk; TYPE_1__ vco2; } ;
struct nouveau_pll_vals {int N1; int M1; int log2P; } ;
struct nouveau_device {int dummy; } ;
struct nouveau_clock {int (* pll_calc ) (struct nouveau_clock*,struct nvbios_pll*,int,struct nouveau_pll_vals*) ;} ;
struct nouveau_bios {int dummy; } ;
struct drm_device {int dummy; } ;


 struct nouveau_bios* FUNC_0 (struct nouveau_device*) ;
 struct nouveau_clock* FUNC_1 (struct nouveau_device*) ;
 struct nouveau_device* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct nouveau_bios*,int,struct nvbios_pll*) ;
 int FUNC_4 (struct drm_device*,int) ;
 int FUNC_5 (struct nouveau_clock*,struct nvbios_pll*,int,struct nouveau_pll_vals*) ;

__attribute__((used)) static u32
FUNC_6(struct drm_device *VAR_0, u32 VAR_1, struct nvbios_pll *VAR_2,
  u32 VAR_3, int *VAR_4, int *VAR_5, int *VAR_6)
{
 struct nouveau_device *VAR_7 = FUNC_2(VAR_0);
 struct nouveau_bios *VAR_8 = FUNC_0(VAR_7);
 struct nouveau_clock *VAR_9 = FUNC_1(VAR_7);
 struct nouveau_pll_vals VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_8, VAR_1, VAR_2);
 if (VAR_11)
  return 0;

 VAR_2->vco2.max_freq = 0;
 VAR_2->refclk = FUNC_4(VAR_0, VAR_1);
 if (!VAR_2->refclk)
  return 0;

 VAR_11 = VAR_9->pll_calc(VAR_9, VAR_2, VAR_3, &VAR_10);
 if (VAR_11 == 0)
  return 0;

 *VAR_4 = VAR_10.N1;
 *VAR_5 = VAR_10.M1;
 *VAR_6 = VAR_10.log2P;
 return VAR_11;
}
