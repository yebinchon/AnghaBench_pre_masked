
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_3__ {int emu_status; } ;
struct TYPE_4__ {TYPE_1__ ssp1601; scalar_t__ dram; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

void FUNC_0(uint32 VAR_3, uint32 VAR_4)
{
  *(uint16 *)(VAR_2->dram + (VAR_3 & 0x1fffe)) = VAR_4;
  if ((VAR_3 == 0x30fe06) && VAR_4) VAR_2->ssp1601.emu_status &= ~VAR_0;
  if ((VAR_3 == 0x30fe08) && VAR_4) VAR_2->ssp1601.emu_status &= ~VAR_1;
}
