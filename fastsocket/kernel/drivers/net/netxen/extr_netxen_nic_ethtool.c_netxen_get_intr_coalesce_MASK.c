
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tx_packets; int rx_packets; int tx_time_us; int rx_time_us; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
struct TYPE_7__ {TYPE_2__ normal; } ;
struct TYPE_8__ {int revision_id; } ;
struct netxen_adapter {scalar_t__ is_up; TYPE_3__ coal; TYPE_4__ ahw; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int tx_max_coalesced_frames; int rx_max_coalesced_frames; int tx_coalesce_usecs; int rx_coalesce_usecs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 struct netxen_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
   struct ethtool_coalesce *VAR_3)
{
 struct netxen_adapter *VAR_4 = FUNC_1(VAR_2);

 if (!FUNC_0(VAR_4->ahw.revision_id))
  return -VAR_0;

 if (VAR_4->is_up != VAR_1)
  return -VAR_0;

 VAR_3->rx_coalesce_usecs = VAR_4->coal.normal.data.rx_time_us;
 VAR_3->tx_coalesce_usecs = VAR_4->coal.normal.data.tx_time_us;
 VAR_3->rx_max_coalesced_frames =
  VAR_4->coal.normal.data.rx_packets;
 VAR_3->tx_max_coalesced_frames =
  VAR_4->coal.normal.data.tx_packets;

 return 0;
}
