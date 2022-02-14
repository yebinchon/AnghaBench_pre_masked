
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8180_priv {int rx_skb; int rx_skb_complete; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 struct r8180_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,int ,int) ;

void FUNC_6(struct net_device *VAR_3)
{
 u8 VAR_4;
 struct r8180_priv *VAR_5 = FUNC_2(VAR_3);

 VAR_4=FUNC_4(VAR_3,VAR_0);
 FUNC_5(VAR_3, VAR_0, VAR_4 &~ ((1<<VAR_1)|(1<<VAR_2)));

 FUNC_1(VAR_3);
 FUNC_3(10);

 if(!VAR_5->rx_skb_complete)
  FUNC_0(VAR_5->rx_skb);
}
