
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_tx_le {int dummy; } ;
struct sky2_port {int tx_ring_size; int * rx_ring; int * tx_ring; int * tx_le; int tx_le_map; int * rx_le; int rx_le_map; struct sky2_hw* hw; } ;
struct sky2_hw {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct sky2_port *VAR_1)
{
 struct sky2_hw *VAR_2 = VAR_1->hw;

 if (VAR_1->rx_le) {
  FUNC_1(VAR_2->pdev, VAR_0,
        VAR_1->rx_le, VAR_1->rx_le_map);
  VAR_1->rx_le = ((void*)0);
 }
 if (VAR_1->tx_le) {
  FUNC_1(VAR_2->pdev,
        VAR_1->tx_ring_size * sizeof(struct sky2_tx_le),
        VAR_1->tx_le, VAR_1->tx_le_map);
  VAR_1->tx_le = ((void*)0);
 }
 FUNC_0(VAR_1->tx_ring);
 FUNC_0(VAR_1->rx_ring);

 VAR_1->tx_ring = ((void*)0);
 VAR_1->rx_ring = ((void*)0);
}
