
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_6__ {int WTCSR; int RSTCSR; int VCRWDT; int IPRA; scalar_t__ WTCNT; } ;
struct TYPE_5__ {int shift; int leftover; scalar_t__ isinterval; int isenable; } ;
struct TYPE_7__ {TYPE_2__ onchip; TYPE_1__ wdt; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*,int,int) ;

void FUNC_2(u32 VAR_1) {
   u32 VAR_2;
   u32 VAR_3;

   if (!VAR_0->wdt.isenable || VAR_0->onchip.WTCSR & 0x80 || VAR_0->onchip.RSTCSR & 0x80)
      return;

   VAR_2 = (u32)VAR_0->onchip.WTCNT;
   VAR_3 = (1 << VAR_0->wdt.shift) - 1;
   VAR_2 += ((VAR_1 + VAR_0->wdt.leftover) >> VAR_0->wdt.shift);
   VAR_0->wdt.leftover = (VAR_1 + VAR_0->wdt.leftover) & VAR_3;


   if (VAR_2 > 0xFF)
   {



      if (VAR_0->wdt.isinterval)
      {



         VAR_0->onchip.WTCSR |= 0x80;


         FUNC_1(VAR_0, (VAR_0->onchip.VCRWDT >> 8) & 0x7F, (VAR_0->onchip.IPRA >> 4) & 0xF);
      }
      else
      {

         FUNC_0("Watchdog timer(WDT mode) overflow not implemented\n");
      }
   }


   VAR_0->onchip.WTCNT = (u8)VAR_2;
}
