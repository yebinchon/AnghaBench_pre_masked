
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev; } ;
struct mv643xx_eth_private {int tx_timeout_task; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,char*) ;
 struct mv643xx_eth_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct mv643xx_eth_private *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_0, &VAR_1->dev, "tx timeout\n");

 FUNC_2(&VAR_2->tx_timeout_task);
}
