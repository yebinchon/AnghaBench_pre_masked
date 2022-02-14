
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int dma_rx_size; int ** rx_skbuff; int dma_buf_sz; int * rx_skbuff_dma; int device; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct stmmac_priv *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->dma_rx_size; VAR_2++) {
  if (VAR_1->rx_skbuff[VAR_2]) {
   FUNC_1(VAR_1->device, VAR_1->rx_skbuff_dma[VAR_2],
      VAR_1->dma_buf_sz, VAR_0);
   FUNC_0(VAR_1->rx_skbuff[VAR_2]);
  }
  VAR_1->rx_skbuff[VAR_2] = ((void*)0);
 }
 return;
}
