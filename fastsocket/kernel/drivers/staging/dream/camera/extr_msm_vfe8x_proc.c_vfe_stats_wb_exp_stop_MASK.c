
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void* awbPingpongIrq; } ;
struct TYPE_4__ {void* axwEnable; } ;
struct TYPE_6__ {TYPE_2__ vfeImaskLocal; TYPE_1__ vfeStatsCmdLocal; } ;


 void* VAR_0 ;
 TYPE_3__* VAR_1 ;

void FUNC_0(void)
{
 VAR_1->vfeStatsCmdLocal.axwEnable = VAR_0;
 VAR_1->vfeImaskLocal.awbPingpongIrq = VAR_0;
}
