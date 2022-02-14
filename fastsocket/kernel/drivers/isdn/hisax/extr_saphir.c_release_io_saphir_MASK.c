
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * function; } ;
struct TYPE_5__ {scalar_t__ cfg_reg; TYPE_3__ timer; } ;
struct TYPE_4__ {TYPE_2__ saphir; } ;
struct IsdnCardState {TYPE_1__ hw; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_3(struct IsdnCardState *VAR_1)
{
 FUNC_0(VAR_1->hw.saphir.cfg_reg + VAR_0, 0xff);
 FUNC_1(&VAR_1->hw.saphir.timer);
 VAR_1->hw.saphir.timer.function = ((void*)0);
 if (VAR_1->hw.saphir.cfg_reg)
  FUNC_2(VAR_1->hw.saphir.cfg_reg, 6);
}
