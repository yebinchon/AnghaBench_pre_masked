
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct queue_port_stats {int dummy; } ;
struct port_stats {int dummy; } ;
struct port_info {int tx_chan; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,struct port_info*,struct queue_port_stats*) ;
 struct port_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct adapter*,int ,struct port_stats*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0, struct ethtool_stats *VAR_1,
        u64 *VAR_2)
{
 struct port_info *VAR_3 = FUNC_1(VAR_0);
 struct adapter *VAR_4 = VAR_3->adapter;

 FUNC_2(VAR_4, VAR_3->tx_chan, (struct port_stats *)VAR_2);

 VAR_2 += sizeof(struct port_stats) / sizeof(u64);
 FUNC_0(VAR_4, VAR_3, (struct queue_port_stats *)VAR_2);
}
