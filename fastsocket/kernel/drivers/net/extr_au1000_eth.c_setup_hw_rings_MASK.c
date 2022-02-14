
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int tx_dma_t ;
struct au1000_private {int volatile** tx_dma_ring; int volatile** rx_dma_ring; } ;
typedef int rx_dma_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct au1000_private *VAR_2, u32 VAR_3, u32 VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_2->rx_dma_ring[VAR_5] =
   (volatile rx_dma_t *) (VAR_3 + sizeof(rx_dma_t)*VAR_5);
 }
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_2->tx_dma_ring[VAR_5] =
   (volatile tx_dma_t *) (VAR_4 + sizeof(tx_dma_t)*VAR_5);
 }
}
