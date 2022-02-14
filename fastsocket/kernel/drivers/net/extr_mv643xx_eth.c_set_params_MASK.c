
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev_addr; } ;
struct mv643xx_eth_private {int rxq_count; int txq_count; int tx_desc_sram_size; int tx_desc_sram_addr; scalar_t__ tx_ring_size; int rx_desc_sram_size; int rx_desc_sram_addr; scalar_t__ rx_ring_size; struct net_device* dev; } ;
struct mv643xx_eth_platform_data {scalar_t__ tx_queue_count; int tx_sram_size; int tx_sram_addr; scalar_t__ tx_queue_size; scalar_t__ rx_queue_count; int rx_sram_size; int rx_sram_addr; scalar_t__ rx_queue_size; int mac_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct mv643xx_eth_private*,int ) ;

__attribute__((used)) static void FUNC_3(struct mv643xx_eth_private *VAR_2,
         struct mv643xx_eth_platform_data *VAR_3)
{
 struct net_device *VAR_4 = VAR_2->dev;

 if (FUNC_0(VAR_3->mac_addr))
  FUNC_1(VAR_4->dev_addr, VAR_3->mac_addr, 6);
 else
  FUNC_2(VAR_2, VAR_4->dev_addr);

 VAR_2->rx_ring_size = VAR_0;
 if (VAR_3->rx_queue_size)
  VAR_2->rx_ring_size = VAR_3->rx_queue_size;
 VAR_2->rx_desc_sram_addr = VAR_3->rx_sram_addr;
 VAR_2->rx_desc_sram_size = VAR_3->rx_sram_size;

 VAR_2->rxq_count = VAR_3->rx_queue_count ? : 1;

 VAR_2->tx_ring_size = VAR_1;
 if (VAR_3->tx_queue_size)
  VAR_2->tx_ring_size = VAR_3->tx_queue_size;
 VAR_2->tx_desc_sram_addr = VAR_3->tx_sram_addr;
 VAR_2->tx_desc_sram_size = VAR_3->tx_sram_size;

 VAR_2->txq_count = VAR_3->tx_queue_count ? : 1;
}
