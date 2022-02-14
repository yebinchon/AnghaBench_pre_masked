
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ count; } ;
struct TYPE_3__ {scalar_t__ count; } ;
struct ixgbe_q_vector {void* itr; TYPE_2__ rx; TYPE_1__ tx; } ;
struct ixgbe_adapter {int rx_itr_setting; int tx_itr_setting; int num_q_vectors; struct ixgbe_q_vector** q_vector; } ;
struct ethtool_coalesce {int tx_coalesce_usecs; int rx_coalesce_usecs; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ixgbe_adapter*,struct ethtool_coalesce*) ;
 int FUNC_2 (struct ixgbe_q_vector*) ;
 struct ixgbe_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4,
                              struct ethtool_coalesce *VAR_5)
{
 struct ixgbe_adapter *VAR_6 = FUNC_3(VAR_4);
 struct ixgbe_q_vector *VAR_7;
 int VAR_8;
 u16 VAR_9, VAR_10;
 bool VAR_11 = 0;


 if (VAR_6->q_vector[0]->tx.count && VAR_6->q_vector[0]->rx.count
     && VAR_5->tx_coalesce_usecs)
  return -VAR_0;

 if ((VAR_5->rx_coalesce_usecs > (VAR_3 >> 2)) ||
     (VAR_5->tx_coalesce_usecs > (VAR_3 >> 2)))
  return -VAR_0;


 VAR_11 = FUNC_1(VAR_6, VAR_5);

 if (VAR_5->rx_coalesce_usecs > 1)
  VAR_6->rx_itr_setting = VAR_5->rx_coalesce_usecs << 2;
 else
  VAR_6->rx_itr_setting = VAR_5->rx_coalesce_usecs;

 if (VAR_6->rx_itr_setting == 1)
  VAR_10 = VAR_2;
 else
  VAR_10 = VAR_6->rx_itr_setting;

 if (VAR_5->tx_coalesce_usecs > 1)
  VAR_6->tx_itr_setting = VAR_5->tx_coalesce_usecs << 2;
 else
  VAR_6->tx_itr_setting = VAR_5->tx_coalesce_usecs;

 if (VAR_6->tx_itr_setting == 1)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_6->tx_itr_setting;

 for (VAR_8 = 0; VAR_8 < VAR_6->num_q_vectors; VAR_8++) {
  VAR_7 = VAR_6->q_vector[VAR_8];
  if (VAR_7->tx.count && !VAR_7->rx.count)

   VAR_7->itr = VAR_9;
  else

   VAR_7->itr = VAR_10;
  FUNC_2(VAR_7);
 }






 if (VAR_11)
  FUNC_0(VAR_4);

 return 0;
}
