
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ count; } ;
struct TYPE_3__ {scalar_t__ count; } ;
struct skge_port {TYPE_2__ tx_ring; TYPE_1__ rx_ring; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {scalar_t__ rx_pending; scalar_t__ tx_pending; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 struct skge_port* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4,
          struct ethtool_ringparam *VAR_5)
{
 struct skge_port *VAR_6 = FUNC_1(VAR_4);
 int VAR_7 = 0;

 if (VAR_5->rx_pending == 0 || VAR_5->rx_pending > VAR_1 ||
     VAR_5->tx_pending < VAR_3 || VAR_5->tx_pending > VAR_2)
  return -VAR_0;

 VAR_6->rx_ring.count = VAR_5->rx_pending;
 VAR_6->tx_ring.count = VAR_5->tx_pending;

 if (FUNC_2(VAR_4)) {
  FUNC_3(VAR_4);
  VAR_7 = FUNC_4(VAR_4);
  if (VAR_7)
   FUNC_0(VAR_4);
 }

 return VAR_7;
}
