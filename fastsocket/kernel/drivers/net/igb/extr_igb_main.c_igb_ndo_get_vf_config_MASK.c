
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct igb_adapter {int vfs_allocated_count; TYPE_1__* vf_data; } ;
struct ifla_vf_info {int vf; int qos; int vlan; int tx_rate; int mac; } ;
struct TYPE_2__ {int pf_qos; int pf_vlan; int tx_rate; int vf_mac_addresses; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 struct igb_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
     int VAR_3, struct ifla_vf_info *VAR_4)
{
 struct igb_adapter *VAR_5 = FUNC_1(VAR_2);
 if (VAR_3 >= VAR_5->vfs_allocated_count)
  return -VAR_0;
 VAR_4->vf = VAR_3;
 FUNC_0(&VAR_4->mac, VAR_5->vf_data[VAR_3].vf_mac_addresses, VAR_1);
 VAR_4->tx_rate = VAR_5->vf_data[VAR_3].tx_rate;
 VAR_4->vlan = VAR_5->vf_data[VAR_3].pf_vlan;
 VAR_4->qos = VAR_5->vf_data[VAR_3].pf_qos;
 return 0;
}
