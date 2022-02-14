
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int Rx_databuff; int tx_skb; } ;
struct ring_info {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 struct rtl8169_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct rtl8169_private*) ;
 int FUNC_3 (struct rtl8169_private*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2)
{
 struct rtl8169_private *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_3);

 FUNC_0(VAR_3->tx_skb, 0x0, VAR_1 * sizeof(struct ring_info));
 FUNC_0(VAR_3->Rx_databuff, 0x0, VAR_0 * sizeof(void *));

 return FUNC_3(VAR_3);
}
