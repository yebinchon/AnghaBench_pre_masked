
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ port_type; int revision_id; } ;
struct netxen_adapter {scalar_t__ num_rxd; scalar_t__ num_txd; scalar_t__ num_jumbo_rxd; TYPE_1__ ahw; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; int rx_jumbo_pending; int rx_pending; scalar_t__ rx_mini_pending; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 struct netxen_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct netxen_adapter*) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,char*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_9,
  struct ethtool_ringparam *VAR_10)
{
 struct netxen_adapter *VAR_11 = FUNC_1(VAR_9);
 u16 VAR_12 = VAR_3;
 u16 VAR_13 = VAR_2;
 u16 VAR_14, VAR_15, VAR_16;

 if (FUNC_0(VAR_11->ahw.revision_id))
  return -VAR_0;

 if (VAR_10->rx_mini_pending)
  return -VAR_0;

 if (VAR_11->ahw.port_type == VAR_8) {
  VAR_12 = VAR_4;
  VAR_13 = VAR_2;
 }

 VAR_14 = FUNC_3(VAR_10->rx_pending,
   VAR_7, VAR_12, "rx");

 VAR_15 = FUNC_3(VAR_10->rx_jumbo_pending,
   VAR_6, VAR_13, "rx jumbo");

 VAR_16 = FUNC_3(VAR_10->tx_pending,
   VAR_5, VAR_1, "tx");

 if (VAR_14 == VAR_11->num_rxd && VAR_16 == VAR_11->num_txd &&
   VAR_15 == VAR_11->num_jumbo_rxd)
  return 0;

 VAR_11->num_rxd = VAR_14;
 VAR_11->num_jumbo_rxd = VAR_15;
 VAR_11->num_txd = VAR_16;

 return FUNC_2(VAR_11);
}
