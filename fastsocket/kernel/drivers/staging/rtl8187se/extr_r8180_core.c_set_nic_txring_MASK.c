
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {int txbeaconringdma; int txhpringdma; int txvopringdma; int txvipringdma; int txbepringdma; int txbkpringdma; int txmapringdma; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ,int ) ;

void FUNC_2(struct net_device *VAR_7)
{
 struct r8180_priv *VAR_8 = (struct r8180_priv *)FUNC_0(VAR_7);

 FUNC_1(VAR_7, VAR_4, VAR_8->txmapringdma);
 FUNC_1(VAR_7, VAR_2, VAR_8->txbkpringdma);
 FUNC_1(VAR_7, VAR_1, VAR_8->txbepringdma);
 FUNC_1(VAR_7, VAR_5, VAR_8->txvipringdma);
 FUNC_1(VAR_7, VAR_6, VAR_8->txvopringdma);
 FUNC_1(VAR_7, VAR_3, VAR_8->txhpringdma);
 FUNC_1(VAR_7, VAR_0, VAR_8->txbeaconringdma);
}
