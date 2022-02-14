
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int emu_status; } ;
struct TYPE_4__ {scalar_t__ dram; TYPE_1__ ssp1601; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static void FUNC_0(u32 VAR_3, u32 VAR_4)
{
  VAR_3 &= ~0xfe0000;

  if (VAR_4 != 0) {
    if (VAR_3 == 0xfe06)
      VAR_2->ssp1601.emu_status &= ~VAR_0;
    else if (VAR_3 == 0xfe08)
      VAR_2->ssp1601.emu_status &= ~VAR_1;
  }

  ((u16 *)VAR_2->dram)[VAR_3 / 2] = VAR_4;
}
