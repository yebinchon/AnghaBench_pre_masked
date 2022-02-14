
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct de_private {int * rx_ring; int * tx_ring; int ring_dma; int pdev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct de_private*) ;
 int * FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_2 (struct de_private *VAR_3)
{
 VAR_3->rx_ring = FUNC_1(VAR_3->pdev, VAR_0, &VAR_3->ring_dma);
 if (!VAR_3->rx_ring)
  return -VAR_2;
 VAR_3->tx_ring = &VAR_3->rx_ring[VAR_1];
 return FUNC_0(VAR_3);
}
