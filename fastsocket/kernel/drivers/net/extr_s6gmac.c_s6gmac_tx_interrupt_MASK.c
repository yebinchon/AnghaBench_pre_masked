
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct s6gmac {int tx_chan; int tx_dma; scalar_t__ tx_skb_o; int * tx_skb; scalar_t__ tx_skb_i; } ;
struct net_device {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 struct s6gmac* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1)
{
 struct s6gmac *VAR_2 = FUNC_1(VAR_1);
 while (((u8)(VAR_2->tx_skb_i - VAR_2->tx_skb_o)) >
   FUNC_4(VAR_2->tx_dma, VAR_2->tx_chan)) {
  FUNC_0(VAR_2->tx_skb[(VAR_2->tx_skb_o++) % VAR_0]);
 }
 if (!FUNC_3(VAR_2->tx_dma, VAR_2->tx_chan))
  FUNC_2(VAR_1);
}
