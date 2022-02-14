
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* regs; } ;
struct TYPE_3__ {short* pwm; scalar_t__* pwm_current; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*,int,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_3(int *VAR_5, int VAR_6, int VAR_7)
{
  short *VAR_8;
  int VAR_9;
  int VAR_10 = 0;
  int VAR_11;

  FUNC_1(((void*)0), FUNC_0());

  VAR_11 = VAR_1.regs[0x30 / 2] & 0x0f;
  if (VAR_11 == 0 || VAR_11 == 0x06 || VAR_11 == 0x09 || VAR_11 == 0x0f)
    goto out;
  if (VAR_4)
    return;

  VAR_9 = (VAR_3 << 16) / VAR_6;
  VAR_8 = VAR_2->pwm;

  if (VAR_7)
  {
    if (VAR_11 == 0x05) {

      while (VAR_6-- > 0) {
        *VAR_5++ += VAR_8[0];
        *VAR_5++ += VAR_8[1];

        VAR_10 += VAR_9;
        VAR_8 += (VAR_10 >> 16) * 2;
        VAR_10 &= 0xffff;
      }
    }
    else if (VAR_11 == 0x0a) {

      while (VAR_6-- > 0) {
        *VAR_5++ += VAR_8[1];
        *VAR_5++ += VAR_8[0];

        VAR_10 += VAR_9;
        VAR_8 += (VAR_10 >> 16) * 2;
        VAR_10 &= 0xffff;
      }
    }
    else {

      if (VAR_11 & 0x06)
        VAR_8++;
      if (VAR_11 & 0x0c)
        VAR_5++;
      while (VAR_6-- > 0) {
        *VAR_5 += *VAR_8;

        VAR_10 += VAR_9;
        VAR_8 += (VAR_10 >> 16) * 2;
        VAR_10 &= 0xffff;
        VAR_5 += 2;
      }
    }
  }
  else
  {

    while (VAR_6-- > 0) {
      *VAR_5++ += VAR_8[0];

      VAR_10 += VAR_9;
      VAR_8 += (VAR_10 >> 16) * 2;
      VAR_10 &= 0xffff;
    }
  }

  FUNC_2(VAR_0, "pwm_update: pwm_ptr %d, len %d, step %04x, done %d",
    VAR_3, VAR_6, VAR_9, (VAR_8 - VAR_2->pwm) / 2);

out:
  VAR_3 = 0;
  VAR_4 = VAR_2->pwm_current[0] == 0
    && VAR_2->pwm_current[1] == 0;
}
