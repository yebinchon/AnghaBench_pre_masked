
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_7__ {int eee_disable; } ;
struct TYPE_8__ {TYPE_3__ _82575; } ;
struct TYPE_6__ {int type; } ;
struct TYPE_5__ {scalar_t__ media_type; } ;
struct e1000_hw {TYPE_4__ dev_spec; TYPE_2__ mac; TYPE_1__ phy; } ;
struct igb_adapter {scalar_t__ link_duplex; struct e1000_hw hw; } ;
struct ethtool_eee {int supported; int eee_active; int eee_enabled; int tx_lpi_enabled; int advertised; void* lp_advertised; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;



 scalar_t__ VAR_16 ;
 int FUNC_0 (struct e1000_hw*,int ,int *) ;
 int FUNC_1 (struct e1000_hw*,int ,int ,int *) ;
 void* FUNC_2 (int ) ;
 struct igb_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_17, struct ethtool_eee *VAR_18)
{
 struct igb_adapter *VAR_19 = FUNC_3(VAR_17);
 struct e1000_hw *VAR_20 = &VAR_19->hw;
 u32 VAR_21, VAR_22, VAR_23;
 u16 VAR_24;

 if ((VAR_20->mac.type < 128) ||
     (VAR_20->phy.media_type != VAR_16))
  return -VAR_12;

 VAR_18->supported = (VAR_14 |
       VAR_15);

 VAR_21 = FUNC_4(VAR_8);
 VAR_22 = FUNC_4(VAR_2);


 if (VAR_21 & VAR_10)
  VAR_18->advertised = VAR_0;

 if (VAR_21 & VAR_9)
  VAR_18->advertised |= VAR_1;


 switch (VAR_20->mac.type) {
 case 128:
  VAR_23 = FUNC_0(VAR_20, VAR_6,
        &VAR_24);
  if (VAR_23)
   return -VAR_11;

  VAR_18->lp_advertised = FUNC_2(VAR_24);

  break;
 case 130:
 case 129:
  VAR_23 = FUNC_1(VAR_20, VAR_5,
          VAR_7,
          &VAR_24);
  if (VAR_23)
   return -VAR_11;

  VAR_18->lp_advertised = FUNC_2(VAR_24);

  break;
 default:
  break;
 }

 if (VAR_22 & VAR_3)
  VAR_18->eee_active = 1;

 VAR_18->eee_enabled = !VAR_20->dev_spec._82575.eee_disable;

 if (VAR_22 & VAR_4)
  VAR_18->tx_lpi_enabled = 1;




 if (VAR_19->link_duplex == VAR_13) {
  VAR_18->eee_enabled = 0;
  VAR_18->eee_active = 0;
  VAR_18->tx_lpi_enabled = 0;
  VAR_18->advertised &= ~VAR_18->advertised;
 }

 return 0;
}
