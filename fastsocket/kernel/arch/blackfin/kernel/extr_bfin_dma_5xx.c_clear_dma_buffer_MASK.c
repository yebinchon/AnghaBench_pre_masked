
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* regs; } ;
struct TYPE_3__ {int cfg; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_2)
{
 VAR_1[VAR_2].regs->cfg |= VAR_0;
 FUNC_0();
 VAR_1[VAR_2].regs->cfg &= ~VAR_0;
}
