
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8180_priv {int rxringdma; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ,int) ;
 int FUNC_3 (struct net_device*,int ,int ) ;

void FUNC_4(struct net_device *VAR_3)
{
 u8 VAR_4;
 struct r8180_priv *VAR_5 = (struct r8180_priv *)FUNC_0(VAR_3);

 VAR_4=FUNC_1(VAR_3, VAR_0);
 FUNC_2(VAR_3, VAR_0, VAR_4 &~ (1<<VAR_1));

 FUNC_3(VAR_3, VAR_2,VAR_5->rxringdma);
}
