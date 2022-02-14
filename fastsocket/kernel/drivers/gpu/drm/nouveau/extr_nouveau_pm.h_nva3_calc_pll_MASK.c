
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvbios_pll {int dummy; } ;
struct nouveau_pll_vals {int N1; int M1; int log2P; } ;
struct nouveau_device {int dummy; } ;
struct nouveau_clock {int (* pll_calc ) (struct nouveau_clock*,struct nvbios_pll*,int ,struct nouveau_pll_vals*) ;} ;
struct drm_device {int dummy; } ;


 struct nouveau_clock* FUNC_0 (struct nouveau_device*) ;
 struct nouveau_device* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct nouveau_clock*,struct nvbios_pll*,int ,struct nouveau_pll_vals*) ;

__attribute__((used)) static inline int
FUNC_3(struct drm_device *VAR_0, struct nvbios_pll *VAR_1, u32 VAR_2,
       int *VAR_3, int *VAR_4, int *VAR_5, int *VAR_6)
{
 struct nouveau_device *VAR_7 = FUNC_1(VAR_0);
 struct nouveau_clock *VAR_8 = FUNC_0(VAR_7);
 struct nouveau_pll_vals VAR_9;
 int VAR_10;

 VAR_10 = VAR_8->pll_calc(VAR_8, VAR_1, VAR_2, &VAR_9);
 *VAR_3 = VAR_9.N1;
 *VAR_5 = VAR_9.M1;
 *VAR_6 = VAR_9.log2P;
 return VAR_10;
}
