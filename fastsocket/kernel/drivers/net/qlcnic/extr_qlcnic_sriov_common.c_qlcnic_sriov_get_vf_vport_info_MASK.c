
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct qlcnic_info {void* max_remote_ipv6_addrs; void* max_local_ipv6_addrs; void* max_tx_vlan_keys; void* max_rx_ques; void* max_rx_buf_rings; void* max_rx_status_rings; void* max_rx_lro_flow; void* max_rx_ip_addr; void* max_rx_ucast_mac_filters; void* max_rx_mcast_mac_filters; void* max_tx_mac_filters; void* max_tx_ques; void* max_tx_bw; void* min_tx_bw; } ;
struct TYPE_6__ {int* arg; } ;
struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_3__ rsp; TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_2__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int VAR_10 ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*,void*,void*,void*,void*,void*,void*,void*,void*,void*,void*,void*,void*,void*,void*) ;
 int FUNC_4 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_5 (struct qlcnic_cmd_args*) ;
 int FUNC_6 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

int FUNC_7(struct qlcnic_adapter *VAR_11,
       struct qlcnic_info *VAR_12, u16 VAR_13)
{
 struct device *VAR_14 = &VAR_11->pdev->dev;
 struct qlcnic_cmd_args VAR_15;
 int VAR_16;
 u32 VAR_17;

 VAR_16 = FUNC_4(&VAR_15, VAR_11, VAR_10);
 if (VAR_16)
  return VAR_16;

 VAR_15.req.arg[1] = VAR_13 << 16 | 0x1;
 VAR_16 = FUNC_6(VAR_11, &VAR_15);
 if (VAR_16) {
  FUNC_2(&VAR_11->pdev->dev,
   "Failed to get vport info, err=%d\n", VAR_16);
  FUNC_5(&VAR_15);
  return VAR_16;
 }

 VAR_17 = VAR_15.rsp.arg[2] & 0xffff;
 if (VAR_17 & VAR_0)
  VAR_12->min_tx_bw = FUNC_1(VAR_15.rsp.arg[2]);
 if (VAR_17 & VAR_1)
  VAR_12->max_tx_bw = FUNC_0(VAR_15.rsp.arg[3]);
 if (VAR_17 & VAR_2)
  VAR_12->max_tx_ques = FUNC_1(VAR_15.rsp.arg[3]);
 if (VAR_17 & VAR_3)
  VAR_12->max_tx_mac_filters = FUNC_0(VAR_15.rsp.arg[4]);
 if (VAR_17 & VAR_4)
  VAR_12->max_rx_mcast_mac_filters = FUNC_1(VAR_15.rsp.arg[4]);
 if (VAR_17 & VAR_5)
  VAR_12->max_rx_ucast_mac_filters = FUNC_0(VAR_15.rsp.arg[5]);
 if (VAR_17 & VAR_6)
  VAR_12->max_rx_ip_addr = FUNC_1(VAR_15.rsp.arg[5]);
 if (VAR_17 & VAR_7)
  VAR_12->max_rx_lro_flow = FUNC_0(VAR_15.rsp.arg[6]);
 if (VAR_17 & VAR_8)
  VAR_12->max_rx_status_rings = FUNC_1(VAR_15.rsp.arg[6]);
 if (VAR_17 & VAR_9)
  VAR_12->max_rx_buf_rings = FUNC_0(VAR_15.rsp.arg[7]);

 VAR_12->max_rx_ques = FUNC_1(VAR_15.rsp.arg[7]);
 VAR_12->max_tx_vlan_keys = FUNC_0(VAR_15.rsp.arg[8]);
 VAR_12->max_local_ipv6_addrs = FUNC_1(VAR_15.rsp.arg[8]);
 VAR_12->max_remote_ipv6_addrs = FUNC_0(VAR_15.rsp.arg[9]);

 FUNC_3(VAR_14, "\n\tmin_tx_bw: %d, max_tx_bw: %d max_tx_ques: %d,\n"
   "\tmax_tx_mac_filters: %d max_rx_mcast_mac_filters: %d,\n"
   "\tmax_rx_ucast_mac_filters: 0x%x, max_rx_ip_addr: %d,\n"
   "\tmax_rx_lro_flow: %d max_rx_status_rings: %d,\n"
   "\tmax_rx_buf_rings: %d, max_rx_ques: %d, max_tx_vlan_keys %d\n"
   "\tlocal_ipv6_addr: %d, remote_ipv6_addr: %d\n",
   VAR_12->min_tx_bw, VAR_12->max_tx_bw,
   VAR_12->max_tx_ques, VAR_12->max_tx_mac_filters,
   VAR_12->max_rx_mcast_mac_filters,
   VAR_12->max_rx_ucast_mac_filters, VAR_12->max_rx_ip_addr,
   VAR_12->max_rx_lro_flow, VAR_12->max_rx_status_rings,
   VAR_12->max_rx_buf_rings, VAR_12->max_rx_ques,
   VAR_12->max_tx_vlan_keys, VAR_12->max_local_ipv6_addrs,
   VAR_12->max_remote_ipv6_addrs);

 FUNC_5(&VAR_15);
 return VAR_16;
}
