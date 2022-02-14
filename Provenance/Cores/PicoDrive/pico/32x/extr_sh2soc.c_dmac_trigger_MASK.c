
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dma_chan {int sar; int dar; int tcr; int chcr; } ;
struct TYPE_8__ {int dmac0_fifo_ptr; } ;
struct TYPE_7__ {int pc; } ;
typedef TYPE_1__ SH2 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,struct dma_chan*) ;
 int FUNC_1 (TYPE_1__*,struct dma_chan*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (TYPE_1__*,int,char*,int,int,int,int,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(SH2 *VAR_4, struct dma_chan *VAR_5)
{
  FUNC_3(VAR_4, VAR_1, "DMA %08x->%08x, cnt %d, chcr %04x @%06x",
    VAR_5->sar, VAR_5->dar, VAR_5->tcr, VAR_5->chcr, VAR_4->pc);
  VAR_5->tcr &= 0xffffff;

  if (VAR_5->chcr & VAR_0) {

    while ((int)VAR_5->tcr > 0)
      FUNC_1(VAR_4, VAR_5);
    FUNC_0(VAR_4, VAR_5);
    return;
  }



  if ((VAR_5->sar & ~0x20000000) == 0x00004012) {
    if (VAR_3.dmac0_fifo_ptr && (VAR_3.dmac0_fifo_ptr & 3) == 0) {
      FUNC_2(VAR_1, "68k -> sh2 DMA");
      FUNC_4();
    }
    return;
  }


  if ((VAR_5->dar & 0xc7fffff0) == 0x00004030)
    return;

  FUNC_2(VAR_1|VAR_2, "unhandled DMA: "
    "%08x->%08x, cnt %d, chcr %04x @%06x",
    VAR_5->sar, VAR_5->dar, VAR_5->tcr, VAR_5->chcr, VAR_4->pc);
}
