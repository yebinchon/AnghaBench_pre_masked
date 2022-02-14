
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* fcoe_wwn_node_name_lo; void* fcoe_wwn_node_name_hi; void* fcoe_wwn_port_name_lo; void* fcoe_wwn_port_name_hi; } ;
struct bnx2x {TYPE_1__ cnic_eth_dev; } ;
struct TYPE_4__ {int fcoe_wwn_node_name_lower; int fcoe_wwn_node_name_upper; int fcoe_wwn_port_name_lower; int fcoe_wwn_port_name_upper; } ;


 void* FUNC_0 (struct bnx2x*,int ) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct bnx2x *VAR_1, int VAR_2)
{

 VAR_1->cnic_eth_dev.fcoe_wwn_port_name_hi =
  FUNC_0(VAR_1, VAR_0[VAR_2].fcoe_wwn_port_name_upper);
 VAR_1->cnic_eth_dev.fcoe_wwn_port_name_lo =
  FUNC_0(VAR_1, VAR_0[VAR_2].fcoe_wwn_port_name_lower);


 VAR_1->cnic_eth_dev.fcoe_wwn_node_name_hi =
  FUNC_0(VAR_1, VAR_0[VAR_2].fcoe_wwn_node_name_upper);
 VAR_1->cnic_eth_dev.fcoe_wwn_node_name_lo =
  FUNC_0(VAR_1, VAR_0[VAR_2].fcoe_wwn_node_name_lower);
}
