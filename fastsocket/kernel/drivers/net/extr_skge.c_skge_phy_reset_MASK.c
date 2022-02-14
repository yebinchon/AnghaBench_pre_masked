
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_port {int port; int netdev; struct skge_hw* hw; } ;
struct skge_hw {scalar_t__ chip_id; int phy_lock; struct net_device** dev; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct skge_hw*,int) ;
 int FUNC_1 (struct skge_hw*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct skge_hw*,int) ;
 int FUNC_8 (struct skge_hw*,int) ;

__attribute__((used)) static void FUNC_9(struct skge_port *VAR_1)
{
 struct skge_hw *VAR_2 = VAR_1->hw;
 int VAR_3 = VAR_1->port;
 struct net_device *VAR_4 = VAR_2->dev[VAR_3];

 FUNC_3(VAR_1->netdev);
 FUNC_2(VAR_1->netdev);

 FUNC_5(&VAR_2->phy_lock);
 if (VAR_2->chip_id == VAR_0) {
  FUNC_1(VAR_2, VAR_3);
  FUNC_0(VAR_2, VAR_3);
 } else {
  FUNC_8(VAR_2, VAR_3);
  FUNC_7(VAR_2, VAR_3);
 }
 FUNC_6(&VAR_2->phy_lock);

 FUNC_4(VAR_4);
}
