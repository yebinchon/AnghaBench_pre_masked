
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int reg; } ;
struct nv04_pm_clock {int calc; TYPE_1__ pll; } ;
struct nouveau_device {scalar_t__ card_type; } ;
struct nouveau_clock {int (* pll_prog ) (struct nouveau_clock*,int,int *) ;} ;
struct drm_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct nouveau_clock* FUNC_0 (struct nouveau_device*) ;
 struct nouveau_device* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct nouveau_clock*,int,int *) ;

__attribute__((used)) static void
FUNC_3(struct drm_device *VAR_1, struct nv04_pm_clock *VAR_2)
{
 struct nouveau_device *VAR_3 = FUNC_1(VAR_1);
 struct nouveau_clock *VAR_4 = FUNC_0(VAR_3);
 u32 VAR_5 = VAR_2->pll.reg;


 if (VAR_3->card_type >= VAR_0)
  VAR_5 += 4;

 VAR_4->pll_prog(VAR_4, VAR_5, &VAR_2->calc);
}
