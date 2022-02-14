
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_eee {scalar_t__ tx_lpi_enabled; scalar_t__ tx_lpi_timer; int advertised; int eee_enabled; } ;
struct TYPE_3__ {int eee_disable; } ;
struct TYPE_4__ {TYPE_1__ ich8lan; } ;
struct e1000_hw {TYPE_2__ dev_spec; } ;
struct e1000_adapter {int eee_advert; struct e1000_hw hw; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,struct ethtool_eee*) ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 struct e1000_adapter* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3, struct ethtool_eee *VAR_4)
{
 struct e1000_adapter *VAR_5 = FUNC_5(VAR_3);
 struct e1000_hw *VAR_6 = &VAR_5->hw;
 struct ethtool_eee VAR_7;
 s32 VAR_8;

 VAR_8 = FUNC_0(VAR_3, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7.tx_lpi_enabled != VAR_4->tx_lpi_enabled) {
  FUNC_3("Setting EEE tx-lpi is not supported\n");
  return -VAR_2;
 }

 if (VAR_7.tx_lpi_timer != VAR_4->tx_lpi_timer) {
  FUNC_3("Setting EEE Tx LPI timer is not supported\n");
  return -VAR_2;
 }

 if (VAR_4->advertised & ~(VAR_1 | VAR_0)) {
  FUNC_3("EEE advertisement supports only 100TX and/or 1000T full-duplex\n");
  return -VAR_2;
 }

 VAR_5->eee_advert = FUNC_4(VAR_4->advertised);

 VAR_6->dev_spec.ich8lan.eee_disable = !VAR_4->eee_enabled;


 if (FUNC_6(VAR_3))
  FUNC_1(VAR_5);
 else
  FUNC_2(VAR_5);

 return 0;
}
