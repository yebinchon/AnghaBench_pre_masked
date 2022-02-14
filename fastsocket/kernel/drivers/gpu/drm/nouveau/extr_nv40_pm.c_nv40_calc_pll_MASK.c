
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ max_freq; } ;
struct TYPE_3__ {int max_freq; } ;
struct nvbios_pll {TYPE_2__ vco2; TYPE_1__ vco1; } ;
struct nouveau_pll_vals {int N1; int M1; int N2; int M2; int log2P; } ;
struct nouveau_device {int dummy; } ;
struct nouveau_clock {int (* pll_calc ) (struct nouveau_clock*,struct nvbios_pll*,int ,struct nouveau_pll_vals*) ;} ;
struct nouveau_bios {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct nouveau_bios* FUNC_0 (struct nouveau_device*) ;
 struct nouveau_clock* FUNC_1 (struct nouveau_device*) ;
 struct nouveau_device* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct nouveau_bios*,int ,struct nvbios_pll*) ;
 int FUNC_4 (struct nouveau_clock*,struct nvbios_pll*,int ,struct nouveau_pll_vals*) ;

__attribute__((used)) static int
FUNC_5(struct drm_device *VAR_1, u32 VAR_2, struct nvbios_pll *VAR_3,
       u32 VAR_4, int *VAR_5, int *VAR_6, int *VAR_7, int *VAR_8, int *VAR_9)
{
 struct nouveau_device *VAR_10 = FUNC_2(VAR_1);
 struct nouveau_bios *VAR_11 = FUNC_0(VAR_10);
 struct nouveau_clock *VAR_12 = FUNC_1(VAR_10);
 struct nouveau_pll_vals VAR_13;
 int VAR_14;

 VAR_14 = FUNC_3(VAR_11, VAR_2, VAR_3);
 if (VAR_14)
  return VAR_14;

 if (VAR_4 < VAR_3->vco1.max_freq)
  VAR_3->vco2.max_freq = 0;

 VAR_12->pll_calc(VAR_12, VAR_3, VAR_4, &VAR_13);
 if (VAR_14 == 0)
  return -VAR_0;

 *VAR_5 = VAR_13.N1;
 *VAR_6 = VAR_13.M1;
 if (VAR_7 && VAR_8) {
  if (VAR_3->vco2.max_freq) {
   *VAR_7 = VAR_13.N2;
   *VAR_8 = VAR_13.M2;
  } else {
   *VAR_7 = 1;
   *VAR_8 = 1;
  }
 }
 *VAR_9 = VAR_13.log2P;
 return 0;
}
