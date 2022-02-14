
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct omap_mcbsp {int dma_tx_lch; int tx_dma_completion; int io_base; int dev; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(int VAR_1, u16 VAR_2, void *VAR_3)
{
 struct omap_mcbsp *VAR_4 = VAR_3;

 FUNC_2(VAR_4->dev, "TX DMA callback : 0x%x\n",
  FUNC_0(VAR_4->io_base, VAR_0));


 FUNC_3(VAR_4->dma_tx_lch);
 VAR_4->dma_tx_lch = -1;

 FUNC_1(&VAR_4->tx_dma_completion);
}
