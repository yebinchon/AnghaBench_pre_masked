
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct et131x_adapter {scalar_t__ linkspeed; TYPE_4__* regs; } ;
struct TYPE_6__ {int value; } ;
struct TYPE_5__ {int value; } ;
struct TYPE_7__ {TYPE_2__ num_pkt_done; TYPE_1__ max_pkt_time; } ;
struct TYPE_8__ {TYPE_3__ rxdma; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int *) ;

void FUNC_1(struct et131x_adapter *VAR_2)
{



 if ((VAR_2->linkspeed == VAR_0) ||
     (VAR_2->linkspeed == VAR_1)) {
  FUNC_0(0, &VAR_2->regs->rxdma.max_pkt_time.value);
  FUNC_0(1, &VAR_2->regs->rxdma.num_pkt_done.value);
 }
}
