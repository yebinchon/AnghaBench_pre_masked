
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* pwm_p; int* regs; int pwm_irq_cnt; } ;
struct TYPE_3__ {unsigned short** pwm_fifo; } ;
typedef int SH2 ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int,unsigned int,int,int) ;
 int FUNC_2 () ;
 int VAR_3 ;

void FUNC_3(unsigned int VAR_4, unsigned int VAR_5,
  SH2 *VAR_6, unsigned int VAR_7)
{
  FUNC_1(VAR_0, "pwm: %u: w16 %02x %04x (p %d %d)",
    VAR_7, VAR_4 & 0x0e, VAR_5, VAR_1.pwm_p[0], VAR_1.pwm_p[1]);

  FUNC_0(VAR_6, VAR_7);

  VAR_4 &= 0x0e;
  if (VAR_4 == 0) {

    if ((VAR_1.regs[0x30 / 2] & 0x0f) == 0)
      VAR_2->pwm_fifo[0][0] = VAR_2->pwm_fifo[1][0] = 0;
    VAR_1.regs[0x30 / 2] = VAR_5;
    FUNC_2();
    VAR_1.pwm_irq_cnt = VAR_3;
  }
  else if (VAR_4 == 2) {
    VAR_1.regs[0x32 / 2] = VAR_5 & 0x0fff;
    FUNC_2();
  }
  else if (VAR_4 <= 8) {
    VAR_5 = (VAR_5 - 1) & 0x0fff;

    if (VAR_4 == 4 || VAR_4 == 8) {
      unsigned short *VAR_8 = VAR_2->pwm_fifo[0];
      if (VAR_1.pwm_p[0] < 3)
        VAR_1.pwm_p[0]++;
      else {
        VAR_8[1] = VAR_8[2];
        VAR_8[2] = VAR_8[3];
      }
      VAR_8[VAR_1.pwm_p[0]] = VAR_5;
    }
    if (VAR_4 == 6 || VAR_4 == 8) {
      unsigned short *VAR_9 = VAR_2->pwm_fifo[1];
      if (VAR_1.pwm_p[1] < 3)
        VAR_1.pwm_p[1]++;
      else {
        VAR_9[1] = VAR_9[2];
        VAR_9[2] = VAR_9[3];
      }
      VAR_9[VAR_1.pwm_p[1]] = VAR_5;
    }
  }
}
