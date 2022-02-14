
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct qlcnic_vport {int max_tx_bw; int min_tx_bw; } ;
struct qlcnic_resources {int num_tx_queues; int num_rx_mcast_mac_filters; int num_tx_mac_filters; int num_destip; int num_rx_status_rings; int num_rx_buf_rings; int num_rx_queues; int num_lro_flows_supported; int max_remote_ipv6_addrs; int max_local_ipv6_addrs; int num_txvlan_keys; } ;
struct qlcnic_sriov {int num_vfs; TYPE_2__* vf_info; struct qlcnic_resources ff_max; } ;
struct qlcnic_info {int bit_offsets; int max_tx_ques; int max_rx_mcast_mac_filters; int max_rx_ucast_mac_filters; int max_tx_mac_filters; int max_rx_ip_addr; int max_rx_status_rings; int max_rx_buf_rings; int max_rx_ques; int max_rx_lro_flow; int max_remote_ipv6_addrs; int max_local_ipv6_addrs; int max_tx_vlan_keys; int max_tx_bw; int min_tx_bw; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_4__ {struct qlcnic_vport* vp; } ;
struct TYPE_3__ {scalar_t__ pci_func; struct qlcnic_sriov* sriov; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qlcnic_adapter*,scalar_t__) ;
 int FUNC_1 (struct qlcnic_adapter*,scalar_t__) ;
 int FUNC_2 (struct qlcnic_adapter*,struct qlcnic_info*,int) ;

__attribute__((used)) static int FUNC_3(struct qlcnic_adapter *VAR_4,
      struct qlcnic_info *VAR_5, u16 VAR_6)
{
 struct qlcnic_sriov *VAR_7 = VAR_4->ahw->sriov;
 struct qlcnic_resources *VAR_8 = &VAR_7->ff_max;
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13 = -VAR_1, VAR_14, VAR_15;
 struct qlcnic_vport *VAR_16;

 VAR_14 = FUNC_1(VAR_4, VAR_6);
 if (VAR_14 < 0)
  return -VAR_0;

 VAR_11 = VAR_7->num_vfs;
 VAR_12 = VAR_11 + 1;
 VAR_5->bit_offsets = 0xffff;
 VAR_5->max_tx_ques = VAR_8->num_tx_queues / VAR_12;
 VAR_5->max_rx_mcast_mac_filters = VAR_8->num_rx_mcast_mac_filters;
 VAR_10 = VAR_3;

 if (VAR_4->ahw->pci_func == VAR_6) {
  VAR_9 = VAR_8->num_rx_mcast_mac_filters - (VAR_11 * VAR_10);
  VAR_5->max_rx_ucast_mac_filters = VAR_9;
  VAR_9 = VAR_8->num_tx_mac_filters - (VAR_11 * VAR_10);
  VAR_5->max_tx_mac_filters = VAR_9;
  VAR_5->min_tx_bw = 0;
  VAR_5->max_tx_bw = VAR_2;
 } else {
  VAR_15 = FUNC_0(VAR_4, VAR_6);
  if (VAR_15 < 0)
   return VAR_15;
  VAR_16 = VAR_7->vf_info[VAR_15].vp;
  VAR_5->min_tx_bw = VAR_16->min_tx_bw;
  VAR_5->max_tx_bw = VAR_16->max_tx_bw;
  VAR_5->max_rx_ucast_mac_filters = VAR_10;
  VAR_5->max_tx_mac_filters = VAR_10;
 }

 VAR_5->max_rx_ip_addr = VAR_8->num_destip / VAR_12;
 VAR_5->max_rx_status_rings = VAR_8->num_rx_status_rings / VAR_12;
 VAR_5->max_rx_buf_rings = VAR_8->num_rx_buf_rings / VAR_12;
 VAR_5->max_rx_ques = VAR_8->num_rx_queues / VAR_12;
 VAR_5->max_rx_lro_flow = VAR_8->num_lro_flows_supported / VAR_12;
 VAR_5->max_tx_vlan_keys = VAR_8->num_txvlan_keys;
 VAR_5->max_local_ipv6_addrs = VAR_8->max_local_ipv6_addrs;
 VAR_5->max_remote_ipv6_addrs = VAR_8->max_remote_ipv6_addrs;

 VAR_13 = FUNC_2(VAR_4, VAR_5, VAR_14);
 if (VAR_13)
  return VAR_13;

 return 0;
}
