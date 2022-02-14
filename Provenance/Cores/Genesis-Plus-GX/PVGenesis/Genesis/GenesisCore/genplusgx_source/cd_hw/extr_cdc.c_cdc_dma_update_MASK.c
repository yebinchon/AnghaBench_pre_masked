
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int w; } ;
struct TYPE_10__ {int ifstat; int ifctrl; TYPE_3__ dbc; int (* dma_w ) (int) ;} ;
struct TYPE_9__ {int pending; TYPE_2__* regs; } ;
struct TYPE_6__ {int l; int h; } ;
struct TYPE_7__ {TYPE_1__ byte; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__ VAR_5 ;
 int FUNC_0 (int) ;
 TYPE_4__ VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

void FUNC_3(void)
{

  int VAR_7 = VAR_4;


  if (VAR_5.dbc.w < VAR_4)
  {

    VAR_5.dma_w((VAR_5.dbc.w + 1) >> 1);


    VAR_5.dbc.w = 0xf000;


    VAR_5.ifstat |= (VAR_0 | VAR_3);


    VAR_5.ifstat &= ~VAR_1;


    if (VAR_5.ifctrl & VAR_2)
    {

      VAR_6.pending |= (1 << 5);


      if (VAR_6.regs[0x32>>1].byte.l & 0x20)
      {

        FUNC_0((VAR_6.pending & VAR_6.regs[0x32>>1].byte.l) >> 1);
      }
    }


    VAR_6.regs[0x04>>1].byte.h = (VAR_6.regs[0x04>>1].byte.h & 0x07) | 0x80;


    VAR_5.dma_w = 0;
  }
  else
  {

    VAR_5.dma_w(VAR_4 >> 1);


    VAR_5.dbc.w -= VAR_7;
  }
}
