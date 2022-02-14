
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bcm_enet_priv {int napi; int tx_chan; int rx_chan; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bcm_enet_priv*,int ,int ) ;
 int FUNC_2 (int *) ;
 struct bcm_enet_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct net_device *VAR_3;
 struct bcm_enet_priv *VAR_4;

 VAR_3 = VAR_2;
 VAR_4 = FUNC_3(VAR_3);


 FUNC_1(VAR_4, 0, FUNC_0(VAR_4->rx_chan));
 FUNC_1(VAR_4, 0, FUNC_0(VAR_4->tx_chan));

 FUNC_2(&VAR_4->napi);

 return VAR_0;
}
