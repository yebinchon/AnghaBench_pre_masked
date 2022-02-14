
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* statsPingpongReload; } ;
struct TYPE_5__ {int statsEnable; } ;
struct TYPE_7__ {int autoFocusEnable; int axwEnable; } ;
struct TYPE_8__ {TYPE_2__ vfeBusCmdLocal; void* vfeStatsPingPongReloadFlag; TYPE_1__ vfeModuleEnableLocal; int vfeImaskPacked; int vfeImaskLocal; TYPE_3__ vfeStatsCmdLocal; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(void)
{
 VAR_3->vfeModuleEnableLocal.statsEnable =
  VAR_3->vfeStatsCmdLocal.autoFocusEnable |
  VAR_3->vfeStatsCmdLocal.axwEnable;

 FUNC_5(&VAR_3->vfeModuleEnableLocal);

 FUNC_3(&VAR_3->vfeStatsCmdLocal);

 VAR_3->vfeImaskPacked = FUNC_0(VAR_3->vfeImaskLocal);
 FUNC_1(VAR_3->vfeImaskPacked);

 if ((VAR_3->vfeModuleEnableLocal.statsEnable == VAR_1) &&
   (VAR_3->vfeStatsPingPongReloadFlag == VAR_0)) {
  VAR_3->vfeStatsPingPongReloadFlag = VAR_1;

  VAR_3->vfeBusCmdLocal.statsPingpongReload = VAR_1;
  FUNC_4(&VAR_3->vfeBusCmdLocal);
 }

 FUNC_2(VAR_2);
}
