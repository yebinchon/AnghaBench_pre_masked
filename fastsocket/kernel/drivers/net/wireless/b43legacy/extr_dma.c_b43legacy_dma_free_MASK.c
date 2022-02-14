
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_dma {int * tx_ring0; int * tx_ring1; int * tx_ring2; int * tx_ring3; int * tx_ring4; int * tx_ring5; int * rx_ring0; int * rx_ring3; } ;
struct b43legacy_wldev {struct b43legacy_dma dma; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct b43legacy_wldev*) ;

void FUNC_2(struct b43legacy_wldev *VAR_0)
{
 struct b43legacy_dma *VAR_1;

 if (FUNC_1(VAR_0))
  return;
 VAR_1 = &VAR_0->dma;

 FUNC_0(VAR_1->rx_ring3);
 VAR_1->rx_ring3 = ((void*)0);
 FUNC_0(VAR_1->rx_ring0);
 VAR_1->rx_ring0 = ((void*)0);

 FUNC_0(VAR_1->tx_ring5);
 VAR_1->tx_ring5 = ((void*)0);
 FUNC_0(VAR_1->tx_ring4);
 VAR_1->tx_ring4 = ((void*)0);
 FUNC_0(VAR_1->tx_ring3);
 VAR_1->tx_ring3 = ((void*)0);
 FUNC_0(VAR_1->tx_ring2);
 VAR_1->tx_ring2 = ((void*)0);
 FUNC_0(VAR_1->tx_ring1);
 VAR_1->tx_ring1 = ((void*)0);
 FUNC_0(VAR_1->tx_ring0);
 VAR_1->tx_ring0 = ((void*)0);
}
