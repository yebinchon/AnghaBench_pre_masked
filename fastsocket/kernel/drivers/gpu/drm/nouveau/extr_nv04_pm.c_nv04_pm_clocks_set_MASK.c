
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ reg; } ;
struct TYPE_5__ {TYPE_1__ pll; } ;
struct nv04_pm_state {TYPE_2__ memory; TYPE_2__ core; } ;
struct nouveau_timer {int dummy; } ;
struct nouveau_device {scalar_t__ card_type; } ;
struct drm_device {int dummy; } ;
struct TYPE_6__ {int (* init ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct nv04_pm_state*) ;
 struct nouveau_device* FUNC_1 (struct drm_device*) ;
 struct nouveau_timer* FUNC_2 (struct nouveau_device*) ;
 int FUNC_3 (struct nouveau_device*,int,int ,int) ;
 int FUNC_4 (struct nouveau_timer*) ;
 TYPE_3__* FUNC_5 (struct nouveau_timer*) ;
 int FUNC_6 (struct drm_device*,TYPE_2__*) ;
 int FUNC_7 (int ) ;

int
FUNC_8(struct drm_device *VAR_2, void *VAR_3)
{
 struct nouveau_device *VAR_4 = FUNC_1(VAR_2);
 struct nouveau_timer *VAR_5 = FUNC_2(VAR_4);
 struct nv04_pm_state *VAR_6 = VAR_3;

 FUNC_6(VAR_2, &VAR_6->core);

 if (VAR_6->memory.pll.reg) {
  FUNC_6(VAR_2, &VAR_6->memory);
  if (VAR_4->card_type < VAR_1) {
   if (VAR_4->card_type == VAR_0)
    FUNC_3(VAR_4, 0x1002c4, 0, 1 << 20);


   FUNC_3(VAR_4, 0x1002c0, 0, 1 << 8);
  }
 }

 FUNC_5(VAR_5)->init(FUNC_4(VAR_5));

 FUNC_0(VAR_6);
 return 0;
}
