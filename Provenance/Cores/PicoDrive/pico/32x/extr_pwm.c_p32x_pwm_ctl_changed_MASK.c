
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* regs; int pwm_irq_cnt; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(void)
{
  int VAR_4 = VAR_0.regs[0x30 / 2];
  int VAR_5 = VAR_0.regs[0x32 / 2];

  VAR_5 = (VAR_5 - 1) & 0x0fff;
  VAR_1 = VAR_5;



  VAR_3 = 0;
  if ((VAR_4 & 0x0f) != 0)
    VAR_3 = 0x10000 / VAR_5;

  VAR_2 = (VAR_4 & 0x0f00) >> 8;
  VAR_2 = ((VAR_2 - 1) & 0x0f) + 1;

  if (VAR_0.pwm_irq_cnt == 0)
    VAR_0.pwm_irq_cnt = VAR_2;
}
