
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_vf_info {scalar_t__ rx_ctx_id; } ;
struct TYPE_3__ {scalar_t__* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_4__ {scalar_t__ max_mtu; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct qlcnic_adapter *VAR_1,
         struct qlcnic_vf_info *VAR_2,
         struct qlcnic_cmd_args *VAR_3)
{
 if (VAR_3->req.arg[1] != VAR_2->rx_ctx_id)
  return -VAR_0;

 if (VAR_3->req.arg[2] > VAR_1->ahw->max_mtu)
  return -VAR_0;

 return 0;
}
