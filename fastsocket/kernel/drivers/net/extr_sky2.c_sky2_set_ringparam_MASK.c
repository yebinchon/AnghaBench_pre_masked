
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_port {int rx_pending; scalar_t__ tx_pending; int tx_ring_size; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int rx_pending; scalar_t__ tx_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sky2_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4,
         struct ethtool_ringparam *VAR_5)
{
 struct sky2_port *VAR_6 = FUNC_0(VAR_4);

 if (VAR_5->rx_pending > VAR_1 ||
     VAR_5->rx_pending < 8 ||
     VAR_5->tx_pending < VAR_3 ||
     VAR_5->tx_pending > VAR_2)
  return -VAR_0;

 FUNC_2(VAR_4);

 VAR_6->rx_pending = VAR_5->rx_pending;
 VAR_6->tx_pending = VAR_5->tx_pending;
 VAR_6->tx_ring_size = FUNC_1(VAR_6->tx_pending+1);

 return FUNC_3(VAR_4);
}
