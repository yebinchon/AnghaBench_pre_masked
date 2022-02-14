
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {scalar_t__ rx_pending; scalar_t__ tx_pending; } ;
struct bnx2x {scalar_t__ recovery_state; scalar_t__ rx_ring_size; scalar_t__ tx_ring_size; scalar_t__ disable_tpa; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct net_device*) ;
 struct bnx2x* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_9,
          struct ethtool_ringparam *VAR_10)
{
 struct bnx2x *VAR_11 = FUNC_3(VAR_9);

 FUNC_0(VAR_0,
    "set ring params command parameters: rx_pending = %d, tx_pending = %d\n",
    VAR_10->rx_pending, VAR_10->tx_pending);

 if (VAR_11->recovery_state != VAR_1) {
  FUNC_0(VAR_0,
     "Handling parity error recovery. Try again later\n");
  return -VAR_2;
 }

 if ((VAR_10->rx_pending > VAR_4) ||
     (VAR_10->rx_pending < (VAR_11->disable_tpa ? VAR_7 :
          VAR_8)) ||
     (VAR_10->tx_pending > (FUNC_1(VAR_11) ? 0 : VAR_6)) ||
     (VAR_10->tx_pending <= VAR_5 + 4)) {
  FUNC_0(VAR_0, "Command parameters not supported\n");
  return -VAR_3;
 }

 VAR_11->rx_ring_size = VAR_10->rx_pending;
 VAR_11->tx_ring_size = VAR_10->tx_pending;

 return FUNC_2(VAR_9);
}
