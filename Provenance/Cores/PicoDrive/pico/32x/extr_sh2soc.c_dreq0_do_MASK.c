
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct dma_chan {unsigned short tcr; int chcr; int sar; int dar; } ;
struct TYPE_9__ {unsigned short* regs; int dmac0_fifo_ptr; int * dmac_fifo; } ;
struct TYPE_8__ {int state; } ;
typedef TYPE_1__ SH2 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 TYPE_7__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,struct dma_chan*) ;
 int FUNC_1 (int,char*,int,...) ;
 int FUNC_2 (TYPE_1__*,int,char*,int,int ,unsigned short) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int,int ,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_6(SH2 *VAR_5, struct dma_chan *VAR_6)
{
  unsigned short VAR_7 = VAR_3.regs[0x10 / 2];
  int VAR_8;


  if (VAR_6->tcr < VAR_7 || VAR_6->tcr > VAR_7 + 4)
    FUNC_1(VAR_0|VAR_1, "dreq0: tcr0/len inconsistent: %d/%d",
      VAR_6->tcr, VAR_7);

  if ((VAR_6->chcr & 0x3f08) != 0x0400)
    FUNC_1(VAR_0|VAR_1, "dreq0: bad control: %04x", VAR_6->chcr);
  if ((VAR_6->sar & ~0x20000000) != 0x00004012)
    FUNC_1(VAR_0|VAR_1, "dreq0: bad sar?: %08x", VAR_6->sar);


  VAR_5->state |= VAR_4;

  for (VAR_8 = 0; VAR_8 < VAR_3.dmac0_fifo_ptr && VAR_6->tcr > 0; VAR_8++) {
    FUNC_2(VAR_5, VAR_0, "dreq0 [%08x] %04x, dreq_len %d",
      VAR_6->dar, VAR_3.dmac_fifo[VAR_8], VAR_7);
    FUNC_4(VAR_6->dar, VAR_3.dmac_fifo[VAR_8], VAR_5);
    VAR_6->dar += 2;
    VAR_6->tcr--;
  }

  if (VAR_3.dmac0_fifo_ptr != VAR_8)
    FUNC_3(VAR_3.dmac_fifo, &VAR_3.dmac_fifo[VAR_8],
      (VAR_3.dmac0_fifo_ptr - VAR_8) * 2);
  VAR_3.dmac0_fifo_ptr -= VAR_8;

  VAR_3.regs[6 / 2] &= ~VAR_2;
  if (VAR_6->tcr == 0)
    FUNC_0(VAR_5, VAR_6);
  else
    FUNC_5(VAR_5, 16);
}
