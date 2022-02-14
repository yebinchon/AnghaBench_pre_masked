
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int ifstat; int ifctrl; int* ctrl; int* stat; int** head; scalar_t__ dma_w; scalar_t__ cycles; } ;
struct TYPE_7__ {int pending; TYPE_2__* regs; } ;
struct TYPE_5__ {int l; } ;
struct TYPE_6__ {TYPE_1__ byte; } ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_3__ VAR_1 ;

void FUNC_1(void)
{

  VAR_1.regs[0x04>>1].byte.l = 0x00;


  VAR_0.ifstat = 0xff;
  VAR_0.ifctrl = 0x00;
  VAR_0.ctrl[0] = 0x00;
  VAR_0.ctrl[1] = 0x00;
  VAR_0.stat[0] = 0x00;
  VAR_0.stat[1] = 0x00;
  VAR_0.stat[2] = 0x00;
  VAR_0.stat[3] = 0x80;
  VAR_0.head[0][0] = 0x00;
  VAR_0.head[0][1] = 0x00;
  VAR_0.head[0][2] = 0x00;
  VAR_0.head[0][3] = 0x01;
  VAR_0.head[1][0] = 0x00;
  VAR_0.head[1][1] = 0x00;
  VAR_0.head[1][2] = 0x00;
  VAR_0.head[1][3] = 0x00;


  VAR_0.cycles = 0;


  VAR_0.dma_w = 0;


  if (VAR_1.pending & (1 << 5))
  {

    VAR_1.pending &= ~(1 << 5);


    FUNC_0((VAR_1.pending & VAR_1.regs[0x32>>1].byte.l) >> 1);
  }
}
