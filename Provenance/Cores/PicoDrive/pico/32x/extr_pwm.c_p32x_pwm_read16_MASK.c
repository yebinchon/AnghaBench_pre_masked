
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* regs; int* pwm_p; } ;
typedef int SH2 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int,unsigned int,int,int) ;

unsigned int FUNC_2(unsigned int VAR_4, SH2 *VAR_5,
  unsigned int VAR_6)
{
  unsigned int VAR_7 = 0;

  FUNC_0(VAR_5, VAR_6);

  VAR_4 &= 0x0e;
  switch (VAR_4) {
    case 0:
    case 2:
      VAR_7 = VAR_3.regs[(0x30 + VAR_4) / 2];
      break;

    case 4:
      if (VAR_3.pwm_p[0] == 3)
        VAR_7 |= VAR_2;
      else if (VAR_3.pwm_p[0] == 0)
        VAR_7 |= VAR_1;
      break;

    case 6:
    case 8:
      if (VAR_3.pwm_p[1] == 3)
        VAR_7 |= VAR_2;
      else if (VAR_3.pwm_p[1] == 0)
        VAR_7 |= VAR_1;
      break;
  }

  FUNC_1(VAR_0, "pwm: %u: r16 %02x %04x (p %d %d)",
    VAR_6, VAR_4, VAR_7, VAR_3.pwm_p[0], VAR_3.pwm_p[1]);
  return VAR_7;
}
