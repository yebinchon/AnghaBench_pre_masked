
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ring_info {int dummy; } ;
struct sky2_tx_le {int dummy; } ;
struct sky2_port {int tx_ring_size; int rx_pending; void* rx_ring; void* rx_le; int rx_le_map; void* tx_ring; void* tx_le; int tx_le_map; struct sky2_hw* hw; } ;
struct sky2_hw {int pdev; } ;
struct rx_ring_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int,int ) ;
 int FUNC_1 (void*,int ,int) ;
 void* FUNC_2 (int ,int,int *) ;

__attribute__((used)) static int FUNC_3(struct sky2_port *VAR_3)
{
 struct sky2_hw *VAR_4 = VAR_3->hw;


 VAR_3->tx_le = FUNC_2(VAR_4->pdev,
        VAR_3->tx_ring_size *
        sizeof(struct sky2_tx_le),
        &VAR_3->tx_le_map);
 if (!VAR_3->tx_le)
  goto nomem;

 VAR_3->tx_ring = FUNC_0(VAR_3->tx_ring_size, sizeof(struct tx_ring_info),
    VAR_1);
 if (!VAR_3->tx_ring)
  goto nomem;

 VAR_3->rx_le = FUNC_2(VAR_4->pdev, VAR_2,
        &VAR_3->rx_le_map);
 if (!VAR_3->rx_le)
  goto nomem;
 FUNC_1(VAR_3->rx_le, 0, VAR_2);

 VAR_3->rx_ring = FUNC_0(VAR_3->rx_pending, sizeof(struct rx_ring_info),
    VAR_1);
 if (!VAR_3->rx_ring)
  goto nomem;

 return 0;
nomem:
 return -VAR_0;
}
