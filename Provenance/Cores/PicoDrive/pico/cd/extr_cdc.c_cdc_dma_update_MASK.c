
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* s68k_regs; } ;
struct TYPE_3__ {int dbc; int ifstat; int ifctrl; int (* dma_w ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_8 ;
 int FUNC_1 (int (*) (int),int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int) ;

void FUNC_4(void)
{


  {


    FUNC_1(VAR_8.dma_w, (VAR_8.dbc + 1) >> 1);


    VAR_8.dbc = 0xf000;


    VAR_8.ifstat |= (VAR_0 | VAR_3);


    VAR_8.ifstat &= ~VAR_1;


    if (VAR_8.ifctrl & VAR_2)
    {

      if (VAR_7->s68k_regs[0x32+1] & VAR_6)
      {

        FUNC_2(VAR_5, "cdc DTE irq 5");
        FUNC_0(5);
      }
    }


    VAR_7->s68k_regs[0x04+0] = (VAR_7->s68k_regs[0x04+0] & 0x07) | 0x80;


    VAR_8.dma_w = 0;
  }
}
