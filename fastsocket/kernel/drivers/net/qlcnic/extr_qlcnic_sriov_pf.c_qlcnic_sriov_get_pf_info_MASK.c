
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qlcnic_info {int total_pf; int total_rss_engines; void* max_remote_ipv6_addrs; void* max_local_ipv6_addrs; void* max_tx_vlan_keys; void* max_rx_ques; void* max_rx_buf_rings; void* max_rx_status_rings; void* max_rx_lro_flow; void* max_rx_ip_addr; void* max_rx_ucast_mac_filters; void* max_rx_mcast_mac_filters; void* max_tx_mac_filters; void* max_tx_ques; void* max_vports; } ;
struct TYPE_5__ {int* arg; } ;
struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ rsp; TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_3__* pdev; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int,int,void*,void*,void*,void*,void*,void*,void*,void*,void*,void*,void*,void*,void*) ;
 scalar_t__ FUNC_4 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_5 (struct qlcnic_cmd_args*) ;
 int FUNC_6 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 int FUNC_7 (struct qlcnic_adapter*,struct qlcnic_info*) ;

__attribute__((used)) static int FUNC_8(struct qlcnic_adapter *VAR_2,
        struct qlcnic_info *VAR_3)
{
 int VAR_4;
 struct qlcnic_cmd_args VAR_5;

 if (FUNC_4(&VAR_5, VAR_2, VAR_1))
  return -VAR_0;

 VAR_5.req.arg[1] = 0x2;
 VAR_4 = FUNC_6(VAR_2, &VAR_5);
 if (VAR_4) {
  FUNC_2(&VAR_2->pdev->dev,
   "Failed to get PF info, err=%d\n", VAR_4);
  goto out;
 }

 VAR_3->total_pf = VAR_5.rsp.arg[2] & 0xff;
 VAR_3->total_rss_engines = (VAR_5.rsp.arg[2] >> 8) & 0xff;
 VAR_3->max_vports = FUNC_1(VAR_5.rsp.arg[2]);
 VAR_3->max_tx_ques = FUNC_0(VAR_5.rsp.arg[3]);
 VAR_3->max_tx_mac_filters = FUNC_1(VAR_5.rsp.arg[3]);
 VAR_3->max_rx_mcast_mac_filters = FUNC_0(VAR_5.rsp.arg[4]);
 VAR_3->max_rx_ucast_mac_filters = FUNC_1(VAR_5.rsp.arg[4]);
 VAR_3->max_rx_ip_addr = FUNC_0(VAR_5.rsp.arg[5]);
 VAR_3->max_rx_lro_flow = FUNC_1(VAR_5.rsp.arg[5]);
 VAR_3->max_rx_status_rings = FUNC_0(VAR_5.rsp.arg[6]);
 VAR_3->max_rx_buf_rings = FUNC_1(VAR_5.rsp.arg[6]);
 VAR_3->max_rx_ques = FUNC_0(VAR_5.rsp.arg[7]);
 VAR_3->max_tx_vlan_keys = FUNC_1(VAR_5.rsp.arg[7]);
 VAR_3->max_local_ipv6_addrs = FUNC_0(VAR_5.rsp.arg[8]);
 VAR_3->max_remote_ipv6_addrs = FUNC_1(VAR_5.rsp.arg[8]);

 FUNC_7(VAR_2, VAR_3);
 FUNC_3(&VAR_2->pdev->dev,
   "\n\ttotal_pf: %d,\n"
   "\n\ttotal_rss_engines: %d max_vports: %d max_tx_ques %d,\n"
   "\tmax_tx_mac_filters: %d max_rx_mcast_mac_filters: %d,\n"
   "\tmax_rx_ucast_mac_filters: 0x%x, max_rx_ip_addr: %d,\n"
   "\tmax_rx_lro_flow: %d max_rx_status_rings: %d,\n"
   "\tmax_rx_buf_rings: %d, max_rx_ques: %d, max_tx_vlan_keys %d\n"
   "\tmax_local_ipv6_addrs: %d, max_remote_ipv6_addrs: %d\n",
   VAR_3->total_pf, VAR_3->total_rss_engines,
   VAR_3->max_vports, VAR_3->max_tx_ques,
   VAR_3->max_tx_mac_filters,
   VAR_3->max_rx_mcast_mac_filters,
   VAR_3->max_rx_ucast_mac_filters, VAR_3->max_rx_ip_addr,
   VAR_3->max_rx_lro_flow, VAR_3->max_rx_status_rings,
   VAR_3->max_rx_buf_rings, VAR_3->max_rx_ques,
   VAR_3->max_tx_vlan_keys, VAR_3->max_local_ipv6_addrs,
   VAR_3->max_remote_ipv6_addrs);

out:
 FUNC_5(&VAR_5);
 return VAR_4;
}
