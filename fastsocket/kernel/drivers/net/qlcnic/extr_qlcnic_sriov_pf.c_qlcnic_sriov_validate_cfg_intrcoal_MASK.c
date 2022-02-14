
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct qlcnic_vf_info {int rx_ctx_id; } ;
struct qlcnic_nic_intr_coalesce {int rx_packets; int rx_time_us; } ;
struct TYPE_3__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_4__ {struct qlcnic_nic_intr_coalesce coal; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct qlcnic_adapter *VAR_1,
           struct qlcnic_vf_info *VAR_2,
           struct qlcnic_cmd_args *VAR_3)
{
 struct qlcnic_nic_intr_coalesce *VAR_4 = &VAR_1->ahw->coal;
 u16 VAR_5, VAR_6, VAR_7;

 VAR_5 = VAR_3->req.arg[1] >> 16;
 VAR_6 = VAR_3->req.arg[2] & 0xffff;
 VAR_7 = VAR_3->req.arg[2] >> 16;

 if (VAR_5 != VAR_2->rx_ctx_id)
  return -VAR_0;
 if (VAR_6 > VAR_4->rx_packets)
  return -VAR_0;
 if (VAR_7 < VAR_4->rx_time_us)
  return -VAR_0;

 return 0;
}
