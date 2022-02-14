
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s6gmac {scalar_t__ tx_skb_i; scalar_t__ tx_skb_o; scalar_t__ rx_skb_i; scalar_t__ rx_skb_o; int lock; int * rx_skb; int * tx_skb; int phydev; } ;
struct net_device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 struct s6gmac* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2)
{
 struct s6gmac *VAR_3 = FUNC_1(VAR_2);
 unsigned long VAR_4;
 FUNC_2(VAR_2);
 FUNC_3(VAR_3->phydev);
 FUNC_6(&VAR_3->lock, VAR_4);
 FUNC_4(VAR_2);
 FUNC_5(VAR_2);
 while (VAR_3->tx_skb_i != VAR_3->tx_skb_o)
  FUNC_0(VAR_3->tx_skb[(VAR_3->tx_skb_o++) % VAR_1]);
 while (VAR_3->rx_skb_i != VAR_3->rx_skb_o)
  FUNC_0(VAR_3->rx_skb[(VAR_3->rx_skb_o++) % VAR_0]);
 FUNC_7(&VAR_3->lock, VAR_4);
 return 0;
}
