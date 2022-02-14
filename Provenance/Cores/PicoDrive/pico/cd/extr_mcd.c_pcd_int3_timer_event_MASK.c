
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* s68k_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (unsigned int,int ,int) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_5)
{
  if (VAR_4->s68k_regs[0x33] & VAR_2) {
    FUNC_1(VAR_1|VAR_0, "s68k: timer irq 3");
    FUNC_0(3);
  }

  if (VAR_4->s68k_regs[0x31] != 0)
    FUNC_2(VAR_5, VAR_3,
      VAR_4->s68k_regs[0x31] * 384);
}
