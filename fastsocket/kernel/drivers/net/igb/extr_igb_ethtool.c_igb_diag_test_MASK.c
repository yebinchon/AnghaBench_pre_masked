
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef int u64 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int autoneg_wait_to_complete; int autoneg_advertised; } ;
struct TYPE_5__ {void* autoneg; void* forced_speed_duplex; } ;
struct TYPE_7__ {TYPE_2__ phy; TYPE_1__ mac; } ;
struct igb_adapter {int state; TYPE_4__* pdev; TYPE_3__ hw; } ;
struct ethtool_test {int flags; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct igb_adapter*,int *) ;
 scalar_t__ FUNC_5 (struct igb_adapter*,int *) ;
 scalar_t__ FUNC_6 (struct igb_adapter*,int *) ;
 scalar_t__ FUNC_7 (struct igb_adapter*,int *) ;
 int FUNC_8 (struct igb_adapter*) ;
 scalar_t__ FUNC_9 (struct igb_adapter*,int *) ;
 int FUNC_10 (struct igb_adapter*) ;
 int FUNC_11 (int) ;
 struct igb_adapter* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (int ,int *) ;

__attribute__((used)) static void FUNC_15(struct net_device *VAR_3,
     struct ethtool_test *VAR_4, u64 *VAR_5)
{
 struct igb_adapter *VAR_6 = FUNC_12(VAR_3);
 u16 VAR_7;
 u8 VAR_8, VAR_9;
 bool VAR_10 = FUNC_13(VAR_3);

 FUNC_14(VAR_2, &VAR_6->state);
 if (VAR_4->flags == VAR_1) {



  VAR_7 = VAR_6->hw.phy.autoneg_advertised;
  VAR_8 = VAR_6->hw.mac.forced_speed_duplex;
  VAR_9 = VAR_6->hw.mac.autoneg;

  FUNC_2(&VAR_6->pdev->dev, "offline testing starting\n");


  FUNC_8(VAR_6);




  if (FUNC_6(VAR_6, &VAR_5[4]))
   VAR_4->flags |= VAR_0;

  if (VAR_10)

   FUNC_1(VAR_3);
  else
   FUNC_10(VAR_6);

  if (FUNC_9(VAR_6, &VAR_5[0]))
   VAR_4->flags |= VAR_0;

  FUNC_10(VAR_6);
  if (FUNC_4(VAR_6, &VAR_5[1]))
   VAR_4->flags |= VAR_0;

  FUNC_10(VAR_6);
  if (FUNC_5(VAR_6, &VAR_5[2]))
   VAR_4->flags |= VAR_0;

  FUNC_10(VAR_6);

  FUNC_8(VAR_6);
  if (FUNC_7(VAR_6, &VAR_5[3]))
   VAR_4->flags |= VAR_0;


  VAR_6->hw.phy.autoneg_advertised = VAR_7;
  VAR_6->hw.mac.forced_speed_duplex = VAR_8;
  VAR_6->hw.mac.autoneg = VAR_9;


  VAR_6->hw.phy.autoneg_wait_to_complete = 1;
  FUNC_10(VAR_6);
  VAR_6->hw.phy.autoneg_wait_to_complete = 0;

  FUNC_0(VAR_2, &VAR_6->state);
  if (VAR_10)
   FUNC_3(VAR_3);
 } else {
  FUNC_2(&VAR_6->pdev->dev, "online testing starting\n");


  if (VAR_10 && FUNC_6(VAR_6, &VAR_5[4]))
   VAR_4->flags |= VAR_0;
  else
   VAR_5[4] = 0;


  VAR_5[0] = 0;
  VAR_5[1] = 0;
  VAR_5[2] = 0;
  VAR_5[3] = 0;

  FUNC_0(VAR_2, &VAR_6->state);
 }
 FUNC_11(4 * 1000);
}
