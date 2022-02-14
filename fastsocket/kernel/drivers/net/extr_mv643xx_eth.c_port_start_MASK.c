
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tx_queue {int dummy; } ;
struct rx_queue {int rx_curr_desc; scalar_t__ rx_desc_dma; } ;
struct rx_desc {int dummy; } ;
struct mv643xx_eth_private {int txq_count; int rxq_count; struct rx_queue* rxq; int dev; struct tx_queue* txq; int * phy; } ;
struct ethtool_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int ,struct ethtool_cmd*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct ethtool_cmd*) ;
 int FUNC_4 (struct mv643xx_eth_private*) ;
 int FUNC_5 (struct mv643xx_eth_private*,int ) ;
 int FUNC_6 (struct rx_queue*) ;
 int FUNC_7 (struct mv643xx_eth_private*,int,int) ;
 int FUNC_8 (struct tx_queue*) ;
 int FUNC_9 (struct tx_queue*) ;
 int FUNC_10 (struct tx_queue*,int,int) ;
 int FUNC_11 (struct mv643xx_eth_private*,int ,int) ;

__attribute__((used)) static void FUNC_12(struct mv643xx_eth_private *VAR_6)
{
 u32 VAR_7;
 int VAR_8;




 if (VAR_6->phy != ((void*)0)) {
  struct ethtool_cmd VAR_9;

  FUNC_1(VAR_6->dev, &VAR_9);
  FUNC_4(VAR_6);
  FUNC_3(VAR_6->dev, &VAR_9);
 }




 VAR_7 = FUNC_5(VAR_6, VAR_4);

 VAR_7 |= VAR_5;
 FUNC_11(VAR_6, VAR_4, VAR_7);

 VAR_7 |= VAR_0;
 if (VAR_6->phy == ((void*)0))
  VAR_7 |= VAR_1;
 FUNC_11(VAR_6, VAR_4, VAR_7);




 FUNC_7(VAR_6, 1000000000, 16777216);
 for (VAR_8 = 0; VAR_8 < VAR_6->txq_count; VAR_8++) {
  struct tx_queue *VAR_10 = VAR_6->txq + VAR_8;

  FUNC_8(VAR_10);
  FUNC_10(VAR_10, 1000000000, 16777216);
  FUNC_9(VAR_10);
 }






 FUNC_11(VAR_6, VAR_2, 0x02000000);




 FUNC_11(VAR_6, VAR_3, 0x00000000);




 FUNC_2(VAR_6->dev);




 for (VAR_8 = 0; VAR_8 < VAR_6->rxq_count; VAR_8++) {
  struct rx_queue *VAR_11 = VAR_6->rxq + VAR_8;
  u32 VAR_12;

  VAR_12 = (u32)VAR_11->rx_desc_dma;
  VAR_12 += VAR_11->rx_curr_desc * sizeof(struct rx_desc);
  FUNC_11(VAR_6, FUNC_0(VAR_8), VAR_12);

  FUNC_6(VAR_11);
 }
}
