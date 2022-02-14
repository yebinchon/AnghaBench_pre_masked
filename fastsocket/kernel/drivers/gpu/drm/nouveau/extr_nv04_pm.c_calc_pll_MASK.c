
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv04_pm_clock {int calc; int pll; } ;
struct nouveau_device {int dummy; } ;
struct nouveau_clock {int (* pll_calc ) (struct nouveau_clock*,int *,int,int *) ;} ;
struct nouveau_bios {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct nouveau_bios* FUNC_0 (struct nouveau_device*) ;
 struct nouveau_clock* FUNC_1 (struct nouveau_device*) ;
 struct nouveau_device* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct nouveau_bios*,int ,int *) ;
 int FUNC_4 (struct nouveau_clock*,int *,int,int *) ;

__attribute__((used)) static int
FUNC_5(struct drm_device *VAR_1, u32 VAR_2, int VAR_3, struct nv04_pm_clock *VAR_4)
{
 struct nouveau_device *VAR_5 = FUNC_2(VAR_1);
 struct nouveau_bios *VAR_6 = FUNC_0(VAR_5);
 struct nouveau_clock *VAR_7 = FUNC_1(VAR_5);
 int VAR_8;

 VAR_8 = FUNC_3(VAR_6, VAR_2, &VAR_4->pll);
 if (VAR_8)
  return VAR_8;

 VAR_8 = VAR_7->pll_calc(VAR_7, &VAR_4->pll, VAR_3, &VAR_4->calc);
 if (!VAR_8)
  return -VAR_0;

 return 0;
}
