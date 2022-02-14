
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {int chcr; int dar; scalar_t__ tcr; } ;
typedef int SH2 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct dma_chan*) ;
 int FUNC_1 (int *,struct dma_chan*) ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static void FUNC_3(SH2 *VAR_2, struct dma_chan *VAR_3)
{

  if ((VAR_3->chcr & 0xc308) != 0x0000)
    FUNC_2(VAR_0|VAR_1, "dreq1: bad control: %04x", VAR_3->chcr);
  if ((VAR_3->dar & ~0xf) != 0x20004030)
    FUNC_2(VAR_0|VAR_1, "dreq1: bad dar?: %08x\n", VAR_3->dar);

  FUNC_1(VAR_2, VAR_3);
  if (VAR_3->tcr == 0)
    FUNC_0(VAR_2, VAR_3);
}
