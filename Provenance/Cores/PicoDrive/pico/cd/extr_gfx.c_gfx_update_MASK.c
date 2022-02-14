
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* s68k_regs; } ;
struct TYPE_3__ {int y_step; int bufferStart; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (unsigned int,int ,int) ;

void FUNC_4(unsigned int VAR_8)
{
  int VAR_9, VAR_10;
  int VAR_11;

  if (!(VAR_6->s68k_regs[0x58] & 0x80))
    return;

  VAR_11 = (VAR_6->s68k_regs[0x62] << 8) | VAR_6->s68k_regs[0x63];
  VAR_9 = (VAR_6->s68k_regs[0x64] << 8) | VAR_6->s68k_regs[0x65];
  VAR_10 = VAR_9 - VAR_7.y_step;

  if (VAR_10 <= 0) {
    VAR_6->s68k_regs[0x58] = 0;
    VAR_6->s68k_regs[0x64] =
    VAR_6->s68k_regs[0x65] = 0;

    if (VAR_6->s68k_regs[0x33] & VAR_2) {
      FUNC_1(VAR_1|VAR_0, "s68k: gfx_cd irq 1");
      FUNC_0(1);
    }
  }
  else {
    VAR_6->s68k_regs[0x64] = VAR_10 >> 8;
    VAR_6->s68k_regs[0x65] = VAR_10;

    if (VAR_9 > VAR_7.y_step)
      VAR_9 = VAR_7.y_step;

    FUNC_3(VAR_8, VAR_3, 5 * VAR_11 * VAR_9);
  }

  if (VAR_5 & VAR_4)
  {

    while (VAR_9--)
    {

      FUNC_2(VAR_7.bufferStart, VAR_11);


      VAR_7.bufferStart += 8;
    }
  }
}
