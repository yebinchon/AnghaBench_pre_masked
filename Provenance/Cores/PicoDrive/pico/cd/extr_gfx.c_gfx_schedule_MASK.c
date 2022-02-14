
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* s68k_regs; } ;
struct TYPE_3__ {int y_step; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(void)
{
  int VAR_4, VAR_5, VAR_6;
  int VAR_7;

  VAR_4 = (VAR_1->s68k_regs[0x62] << 8) | VAR_1->s68k_regs[0x63];
  VAR_5 = (VAR_1->s68k_regs[0x64] << 8) | VAR_1->s68k_regs[0x65];

  VAR_6 = 5 * VAR_4 * VAR_5;
  if (VAR_6 > VAR_2)
    VAR_7 = (VAR_2 + 5 * VAR_4 - 1) / (5 * VAR_4);
  else
    VAR_7 = VAR_5;

  VAR_3.y_step = VAR_7;
  FUNC_0(VAR_0, 5 * VAR_4 * VAR_7);
}
