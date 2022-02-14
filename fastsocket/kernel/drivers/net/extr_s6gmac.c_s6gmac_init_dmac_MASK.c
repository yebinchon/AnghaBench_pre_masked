
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s6gmac {int rx_dma; int tx_dma; int rx_chan; int tx_chan; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct s6gmac* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static inline void FUNC_3(struct net_device *VAR_2)
{
 struct s6gmac *VAR_3 = FUNC_0(VAR_2);
 FUNC_1(VAR_3->tx_dma, VAR_3->tx_chan);
 FUNC_1(VAR_3->rx_dma, VAR_3->rx_chan);
 FUNC_2(VAR_3->tx_dma, 1 << VAR_1);
 FUNC_2(VAR_3->rx_dma, 1 << VAR_0);
}
