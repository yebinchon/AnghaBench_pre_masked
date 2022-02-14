
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* s68k_regs; } ;
struct TYPE_3__ {int ifstat; int ifctrl; int* ctrl; int* stat; int** head; scalar_t__ dma_w; scalar_t__ cycles; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_0(void)
{

  VAR_0->s68k_regs[0x04+1] = 0x00;


  VAR_1.ifstat = 0xff;
  VAR_1.ifctrl = 0x00;
  VAR_1.ctrl[0] = 0x00;
  VAR_1.ctrl[1] = 0x00;
  VAR_1.stat[0] = 0x00;
  VAR_1.stat[1] = 0x00;
  VAR_1.stat[2] = 0x00;
  VAR_1.stat[3] = 0x80;
  VAR_1.head[0][0] = 0x00;
  VAR_1.head[0][1] = 0x00;
  VAR_1.head[0][2] = 0x00;
  VAR_1.head[0][3] = 0x01;
  VAR_1.head[1][0] = 0x00;
  VAR_1.head[1][1] = 0x00;
  VAR_1.head[1][2] = 0x00;
  VAR_1.head[1][3] = 0x00;


  VAR_1.cycles = 0;


  VAR_1.dma_w = 0;
}
