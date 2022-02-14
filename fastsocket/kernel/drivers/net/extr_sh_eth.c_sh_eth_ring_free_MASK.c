
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_eth_private {scalar_t__* tx_skbuff; scalar_t__* rx_skbuff; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;
 struct sh_eth_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2)
{
 struct sh_eth_private *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;


 if (VAR_3->rx_skbuff) {
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   if (VAR_3->rx_skbuff[VAR_4])
    FUNC_0(VAR_3->rx_skbuff[VAR_4]);
  }
 }
 FUNC_1(VAR_3->rx_skbuff);


 if (VAR_3->tx_skbuff) {
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   if (VAR_3->tx_skbuff[VAR_4])
    FUNC_0(VAR_3->tx_skbuff[VAR_4]);
  }
 }
 FUNC_1(VAR_3->tx_skbuff);
}
