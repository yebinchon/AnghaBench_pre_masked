
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct et131x_adapter {TYPE_2__* regs; } ;
struct TYPE_7__ {int value; } ;
struct TYPE_8__ {TYPE_3__ cfg1; } ;
struct TYPE_5__ {int sw_reset; } ;
struct TYPE_6__ {TYPE_4__ mac; TYPE_1__ global; } ;


 int FUNC_0 (int,int *) ;

void FUNC_1(struct et131x_adapter *VAR_0)
{

 FUNC_0(0xc00f0000, &VAR_0->regs->mac.cfg1.value);


 FUNC_0(0x7F, &VAR_0->regs->global.sw_reset);
 FUNC_0(0x000f0000, &VAR_0->regs->mac.cfg1.value);
 FUNC_0(0x00000000, &VAR_0->regs->mac.cfg1.value);
}
