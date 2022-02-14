
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int* s68k_regs; scalar_t__ prg_ram; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_0(u32 VAR_1, u32 VAR_2)
{
  if (VAR_1 >= (VAR_0->s68k_regs[2] << 9))
    *(u16 *)(VAR_0->prg_ram + VAR_1) = VAR_2;
}
