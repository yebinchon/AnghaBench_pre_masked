
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_port {int dummy; } ;
struct skge_hw {int ports; scalar_t__ chip_id; scalar_t__ phy_type; int hw_lock; int intr_mask; int phy_lock; struct net_device** dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct skge_port*) ;
 struct skge_port* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct skge_hw*,int ) ;
 int FUNC_4 (struct skge_hw*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct skge_port*) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_4)
{
 struct skge_hw *VAR_5 = (struct skge_hw *) VAR_4;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->ports; VAR_6++) {
  struct net_device *VAR_7 = VAR_5->dev[VAR_6];

  if (FUNC_2(VAR_7)) {
   struct skge_port *VAR_8 = FUNC_1(VAR_7);

   FUNC_5(&VAR_5->phy_lock);
   if (VAR_5->chip_id != VAR_1)
    FUNC_9(VAR_8);
   else if (VAR_5->phy_type == VAR_3)
    FUNC_0(VAR_8);
   FUNC_7(&VAR_5->phy_lock);
  }
 }

 FUNC_6(&VAR_5->hw_lock);
 VAR_5->intr_mask |= VAR_2;
 FUNC_4(VAR_5, VAR_0, VAR_5->intr_mask);
 FUNC_3(VAR_5, VAR_0);
 FUNC_8(&VAR_5->hw_lock);
}
