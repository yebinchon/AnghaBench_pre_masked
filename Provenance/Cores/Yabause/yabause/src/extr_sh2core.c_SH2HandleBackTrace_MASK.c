
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {int numbacktrace; int * addr; } ;
struct TYPE_5__ {int PC; } ;
struct TYPE_7__ {int instruction; TYPE_2__ bt; TYPE_1__ regs; } ;
typedef TYPE_3__ SH2_struct ;



void FUNC_0(SH2_struct *VAR_0)
{
   u16 VAR_1 = VAR_0->instruction;
   if ((VAR_1 & 0xF000) == 0xB000 ||
      (VAR_1 & 0xF0FF) == 0x0003 ||
      (VAR_1 & 0xF0FF) == 0x400B)
   {
      if (VAR_0->bt.numbacktrace < sizeof(VAR_0->bt.addr)/sizeof(u32))
      {
         VAR_0->bt.addr[VAR_0->bt.numbacktrace] = VAR_0->regs.PC;
         VAR_0->bt.numbacktrace++;
      }
   }
   else if (VAR_1 == 0x000B)
   {
      if (VAR_0->bt.numbacktrace > 0)
         VAR_0->bt.numbacktrace--;
   }
}
