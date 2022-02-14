
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nouveau_pll_vals {int dummy; } ;
struct drm_device {int pci_device; } ;
typedef enum nvbios_pll_type { ____Placeholder_nvbios_pll_type } nvbios_pll_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,int,struct nouveau_pll_vals*) ;
 int FUNC_1 (struct nouveau_pll_vals*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int*) ;

int
FUNC_4(struct drm_device *VAR_3, enum nvbios_pll_type VAR_4)
{
 struct nouveau_pll_vals VAR_5;
 int VAR_6;

 if (VAR_4 == VAR_2 &&
     (VAR_3->pci_device & 0x0ff0) == VAR_0) {
  uint32_t VAR_7;

  FUNC_3(FUNC_2(0, 3), 0x6c, &VAR_7);
  if (!VAR_7)
   VAR_7 = 4;

  return 400000 / VAR_7;
 } else
 if (VAR_4 == VAR_2 &&
     (VAR_3->pci_device & 0xff0) == VAR_1) {
  uint32_t VAR_8;

  FUNC_3(FUNC_2(0, 5), 0x4c, &VAR_8);
  return VAR_8;
 }

 VAR_6 = FUNC_0(VAR_3, VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;

 return FUNC_1(&VAR_5);
}
