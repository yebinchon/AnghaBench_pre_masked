
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ min_m; scalar_t__ max_m; scalar_t__ min_n; scalar_t__ max_n; } ;
struct nvbios_pll {scalar_t__ max_p; scalar_t__ max_p_usable; int reg; TYPE_1__ vco1; } ;
struct nouveau_pll_vals {scalar_t__ M1; scalar_t__ N1; scalar_t__ log2P; } ;
struct nouveau_drm {int device; } ;
struct nouveau_device {int dummy; } ;
struct nouveau_clock {int (* pll_prog ) (struct nouveau_clock*,int ,struct nouveau_pll_vals*) ;} ;
struct nouveau_bios {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum nvbios_pll_type { ____Placeholder_nvbios_pll_type } nvbios_pll_type ;


 int FUNC_0 (struct nouveau_drm*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_bios* FUNC_1 (struct nouveau_device*) ;
 struct nouveau_clock* FUNC_2 (struct nouveau_device*) ;
 struct nouveau_drm* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*,int,struct nouveau_pll_vals*) ;
 struct nouveau_device* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct nouveau_bios*,int,struct nvbios_pll*) ;
 int FUNC_7 (struct nouveau_clock*,int ,struct nouveau_pll_vals*) ;

__attribute__((used)) static void
FUNC_8(struct drm_device *VAR_2, int VAR_3)
{






 struct nouveau_drm *VAR_4 = FUNC_3(VAR_2);
 struct nouveau_device *VAR_5 = FUNC_5(VAR_4->device);
 struct nouveau_clock *VAR_6 = FUNC_2(VAR_5);
 struct nouveau_bios *VAR_7 = FUNC_1(VAR_5);
 struct nvbios_pll VAR_8;
 struct nouveau_pll_vals VAR_9;
 enum nvbios_pll_type VAR_10 = VAR_3 ? VAR_1 : VAR_0;

 if (FUNC_6(VAR_7, VAR_10, &VAR_8))
  return;
 FUNC_4(VAR_2, VAR_10, &VAR_9);

 if (VAR_9.M1 >= VAR_8.vco1.min_m && VAR_9.M1 <= VAR_8.vco1.max_m &&
     VAR_9.N1 >= VAR_8.vco1.min_n && VAR_9.N1 <= VAR_8.vco1.max_n &&
     VAR_9.log2P <= VAR_8.max_p)
  return;

 FUNC_0(VAR_4, "VPLL %d outwith limits, attempting to fix\n", VAR_3 + 1);


 VAR_9.M1 = VAR_8.vco1.max_m;
 VAR_9.N1 = VAR_8.vco1.min_n;
 VAR_9.log2P = VAR_8.max_p_usable;
 VAR_6->pll_prog(VAR_6, VAR_8.reg, &VAR_9);
}
