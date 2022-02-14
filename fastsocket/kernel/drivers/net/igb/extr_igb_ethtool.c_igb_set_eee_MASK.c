
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_9__ {int eee_disable; } ;
struct TYPE_10__ {TYPE_4__ _82575; } ;
struct TYPE_7__ {scalar_t__ media_type; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_5__ dev_spec; TYPE_2__ phy; TYPE_1__ mac; } ;
struct igb_adapter {TYPE_3__* pdev; struct e1000_hw hw; } ;
struct ethtool_eee {scalar_t__ tx_lpi_enabled; scalar_t__ advertised; scalar_t__ eee_enabled; scalar_t__ tx_lpi_timer; } ;
typedef int s32 ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct net_device*,struct ethtool_eee*) ;
 int FUNC_2 (struct igb_adapter*) ;
 int FUNC_3 (struct igb_adapter*) ;
 int FUNC_4 (struct e1000_hw*) ;
 struct igb_adapter* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4,
         struct ethtool_eee *VAR_5)
{
 struct igb_adapter *VAR_6 = FUNC_5(VAR_4);
 struct e1000_hw *VAR_7 = &VAR_6->hw;
 struct ethtool_eee VAR_8;
 s32 VAR_9;

 if ((VAR_7->mac.type < VAR_2) ||
     (VAR_7->phy.media_type != VAR_3))
  return -VAR_1;

 VAR_9 = FUNC_1(VAR_4, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_8.eee_enabled) {
  if (VAR_8.tx_lpi_enabled != VAR_5->tx_lpi_enabled) {
   FUNC_0(&VAR_6->pdev->dev,
    "Setting EEE tx-lpi is not supported\n");
   return -VAR_0;
  }


  if (VAR_5->tx_lpi_timer) {
   FUNC_0(&VAR_6->pdev->dev,
    "Setting EEE Tx LPI timer is not supported\n");
   return -VAR_0;
  }

  if (VAR_8.advertised != VAR_5->advertised) {
   FUNC_0(&VAR_6->pdev->dev,
    "Setting EEE Advertisement is not supported\n");
   return -VAR_0;
  }

 } else if (!VAR_5->eee_enabled) {
  FUNC_0(&VAR_6->pdev->dev,
   "Setting EEE options are not supported with EEE disabled\n");
   return -VAR_0;
  }

 if (VAR_7->dev_spec._82575.eee_disable != !VAR_5->eee_enabled) {
  VAR_7->dev_spec._82575.eee_disable = !VAR_5->eee_enabled;
  FUNC_4(VAR_7);


  if (FUNC_6(VAR_4))
   FUNC_2(VAR_6);
  else
   FUNC_3(VAR_6);
 }

 return 0;
}
