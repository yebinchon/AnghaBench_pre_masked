
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int HpetVec; int flags; scalar_t__ HpetCmp; int HpetCfg; TYPE_4__* Hpet; } ;
typedef TYPE_1__ x86_pkg_t ;
struct TYPE_8__ {int primary; TYPE_3__* core; } ;
typedef TYPE_2__ x86_lcpu_t ;
struct TYPE_9__ {int HpetVec; scalar_t__ HpetCmp; int HpetCfg; TYPE_4__* Hpet; TYPE_1__* package; } ;
typedef TYPE_3__ x86_core_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_10__ {int Config; } ;
typedef TYPE_4__ hpetTimer_t ;
struct TYPE_11__ {int TIM1_CONF; } ;
typedef TYPE_5__ hpetReg_t ;
typedef int boolean_t ;


 int FUNC_0 (char*,int,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;

void
FUNC_4(uint32_t VAR_4, uint32_t VAR_5)
{
 uint64_t *VAR_6;
 hpetTimer_t *VAR_7;
 x86_lcpu_t *VAR_8;
 x86_core_t *VAR_9;
 x86_pkg_t *VAR_10;
 boolean_t VAR_11;

 if(VAR_4 > 1) {
  FUNC_3("ml_hpet_cfg: invalid cpu = %d\n", VAR_4);
 }

 VAR_8 = FUNC_1(VAR_4);
 VAR_9 = VAR_8->core;
 VAR_10 = VAR_9->package;




 if (!VAR_8->primary)
     return;

 VAR_11 = FUNC_2(VAR_0);


 VAR_6 = (uint64_t *)(((uintptr_t)&(((hpetReg_t *)VAR_3)->TIM1_CONF)) + (VAR_4 << 5));
 VAR_7 = (hpetTimer_t *)VAR_6;

 FUNC_0("ml_hpet_cfg: HPET for cpu %d at %p, vector = %d\n",
      VAR_4, VAR_6, VAR_5);


 VAR_9->Hpet = VAR_7;
 VAR_9->HpetVec = VAR_5;




 VAR_9->Hpet->Config |= VAR_1;


 VAR_9->HpetCfg = VAR_9->Hpet->Config;
 VAR_9->HpetCmp = 0;





 VAR_10->Hpet = VAR_9->Hpet;
 VAR_10->HpetVec = VAR_9->HpetVec;
 VAR_10->HpetCfg = VAR_9->HpetCfg;
 VAR_10->HpetCmp = VAR_9->HpetCmp;
 VAR_10->flags |= VAR_2;

 FUNC_2(VAR_11);
}
