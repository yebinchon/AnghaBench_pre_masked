
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ ring; } ;
struct TYPE_3__ {int work_limit; } ;
struct igb_q_vector {int itr_val; int set_itr; TYPE_2__ rx; TYPE_1__ tx; } ;
struct igb_adapter {int flags; int rx_itr_setting; int tx_itr_setting; int num_q_vectors; int tx_work_limit; struct igb_q_vector** q_vector; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; int tx_coalesce_usecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct igb_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_6,
       struct ethtool_coalesce *VAR_7)
{
 struct igb_adapter *VAR_8 = FUNC_0(VAR_6);
 int VAR_9;

 if ((VAR_7->rx_coalesce_usecs > VAR_3) ||
     ((VAR_7->rx_coalesce_usecs > 3) &&
      (VAR_7->rx_coalesce_usecs < VAR_4)) ||
     (VAR_7->rx_coalesce_usecs == 2))
  return -VAR_0;

 if ((VAR_7->tx_coalesce_usecs > VAR_3) ||
     ((VAR_7->tx_coalesce_usecs > 3) &&
      (VAR_7->tx_coalesce_usecs < VAR_4)) ||
     (VAR_7->tx_coalesce_usecs == 2))
  return -VAR_0;

 if ((VAR_8->flags & VAR_2) && VAR_7->tx_coalesce_usecs)
  return -VAR_0;


 if (VAR_7->rx_coalesce_usecs == 0) {
  if (VAR_8->flags & VAR_1)
   VAR_8->flags &= ~VAR_1;
 }


 if (VAR_7->rx_coalesce_usecs && VAR_7->rx_coalesce_usecs <= 3)
  VAR_8->rx_itr_setting = VAR_7->rx_coalesce_usecs;
 else
  VAR_8->rx_itr_setting = VAR_7->rx_coalesce_usecs << 2;


 if (VAR_8->flags & VAR_2)
  VAR_8->tx_itr_setting = VAR_8->rx_itr_setting;
 else if (VAR_7->tx_coalesce_usecs && VAR_7->tx_coalesce_usecs <= 3)
  VAR_8->tx_itr_setting = VAR_7->tx_coalesce_usecs;
 else
  VAR_8->tx_itr_setting = VAR_7->tx_coalesce_usecs << 2;

 for (VAR_9 = 0; VAR_9 < VAR_8->num_q_vectors; VAR_9++) {
  struct igb_q_vector *VAR_10 = VAR_8->q_vector[VAR_9];
  VAR_10->tx.work_limit = VAR_8->tx_work_limit;
  if (VAR_10->rx.ring)
   VAR_10->itr_val = VAR_8->rx_itr_setting;
  else
   VAR_10->itr_val = VAR_8->tx_itr_setting;
  if (VAR_10->itr_val && VAR_10->itr_val <= 3)
   VAR_10->itr_val = VAR_5;
  VAR_10->set_itr = 1;
 }

 return 0;
}
