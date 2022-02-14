
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ dma_w; } ;
struct TYPE_13__ {int cycles; } ;
struct TYPE_12__ {unsigned int cycles; } ;
struct TYPE_11__ {scalar_t__ cycles; } ;
struct TYPE_10__ {scalar_t__ cycles; int pending; scalar_t__ timer; TYPE_2__* regs; } ;
struct TYPE_8__ {int l; int h; } ;
struct TYPE_9__ {TYPE_1__ byte; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__ VAR_2 ;
 int FUNC_0 () ;
 TYPE_6__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 TYPE_5__ VAR_4 ;
 int FUNC_3 (unsigned int) ;
 TYPE_4__ VAR_5 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 TYPE_3__ VAR_6 ;

void FUNC_6(unsigned int VAR_7)
{

  if (VAR_2.dma_w)
  {
    FUNC_0();
  }


  do
  {
    FUNC_3(VAR_7);
    FUNC_4(VAR_6.cycles + VAR_0);
  }
  while ((VAR_4.cycles < VAR_7) || (VAR_5.cycles < (VAR_6.cycles + VAR_0)));


  VAR_6.cycles += VAR_0;


  VAR_3.cycles += (VAR_0 * 3);
  if (VAR_3.cycles >= (500000 * 4))
  {

    VAR_3.cycles -= (500000 * 4);


    FUNC_1();


    if (!(VAR_6.regs[0x4a>>1].byte.l & 0xf0))
    {

      VAR_6.regs[0x4a>>1].byte.l = 0xf0;


      VAR_6.pending |= (1 << 4);


      if (VAR_6.regs[0x32>>1].byte.l & 0x10)
      {

        FUNC_5((VAR_6.pending & VAR_6.regs[0x32>>1].byte.l) >> 1);
      }
    }
  }


  if (VAR_6.timer)
  {

    VAR_6.timer -= VAR_0;
    if (VAR_6.timer <= 0)
    {

      VAR_6.timer += (VAR_6.regs[0x30>>1].byte.l * VAR_1);


      if (VAR_6.regs[0x32>>1].byte.l & 0x08)
      {

        VAR_6.pending |= (1 << 3);


        FUNC_5((VAR_6.pending & VAR_6.regs[0x32>>1].byte.l) >> 1);
      }
    }
  }


  if (VAR_6.regs[0x58>>1].byte.h & 0x80)
  {

    FUNC_2(VAR_6.cycles);
  }
}
