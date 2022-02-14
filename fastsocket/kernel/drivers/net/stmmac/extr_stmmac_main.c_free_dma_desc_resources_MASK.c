
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int dma_tx_size; int dma_rx_size; int tx_skbuff; int rx_skbuff; int rx_skbuff_dma; int dma_rx_phy; int dma_rx; int device; int dma_tx_phy; int dma_tx; } ;
struct dma_desc {int dummy; } ;


 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (struct stmmac_priv*) ;
 int FUNC_2 (struct stmmac_priv*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct stmmac_priv *VAR_0)
{

 FUNC_1(VAR_0);
 FUNC_2(VAR_0);



 FUNC_0(VAR_0->device,
     VAR_0->dma_tx_size * sizeof(struct dma_desc),
     VAR_0->dma_tx, VAR_0->dma_tx_phy);
 FUNC_0(VAR_0->device,
     VAR_0->dma_rx_size * sizeof(struct dma_desc),
     VAR_0->dma_rx, VAR_0->dma_rx_phy);
 FUNC_3(VAR_0->rx_skbuff_dma);
 FUNC_3(VAR_0->rx_skbuff);
 FUNC_3(VAR_0->tx_skbuff);

 return;
}
