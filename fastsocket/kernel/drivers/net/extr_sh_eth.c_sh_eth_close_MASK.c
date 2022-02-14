
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sh_eth_txdesc {int dummy; } ;
struct sh_eth_rxdesc {int dummy; } ;
struct sh_eth_private {int tx_desc_dma; int tx_ring; int rx_desc_dma; int rx_ring; int timer; scalar_t__ phydev; } ;
struct net_device {int irq; scalar_t__ base_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int ,int ) ;
 int FUNC_3 (int ,struct net_device*) ;
 struct sh_eth_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_5)
{
 struct sh_eth_private *VAR_6 = FUNC_4(VAR_5);
 u32 VAR_7 = VAR_5->base_addr;
 int VAR_8;

 FUNC_5(VAR_5);


 FUNC_0(0x0000, VAR_7 + VAR_2);


 FUNC_0(0, VAR_7 + VAR_1);
 FUNC_0(0, VAR_7 + VAR_0);


 if (VAR_6->phydev) {
  FUNC_7(VAR_6->phydev);
  FUNC_6(VAR_6->phydev);
 }

 FUNC_3(VAR_5->irq, VAR_5);

 FUNC_1(&VAR_6->timer);


 FUNC_8(VAR_5);


 VAR_8 = sizeof(struct sh_eth_rxdesc) * VAR_3;
 FUNC_2(((void*)0), VAR_8, VAR_6->rx_ring, VAR_6->rx_desc_dma);


 VAR_8 = sizeof(struct sh_eth_txdesc) * VAR_4;
 FUNC_2(((void*)0), VAR_8, VAR_6->tx_ring, VAR_6->tx_desc_dma);

 return 0;
}
