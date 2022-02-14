
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_esw_func_cfg {scalar_t__ vlan_id; scalar_t__ discard_tagged; } ;
struct qlcnic_adapter {scalar_t__ tx_pvid; scalar_t__ rx_pvid; int flags; } ;


 int VAR_0 ;

void FUNC_0(struct qlcnic_adapter *VAR_1,
       struct qlcnic_esw_func_cfg *VAR_2)
{
 if (VAR_2->discard_tagged)
  VAR_1->flags &= ~VAR_0;
 else
  VAR_1->flags |= VAR_0;

 if (VAR_2->vlan_id) {
  VAR_1->rx_pvid = VAR_2->vlan_id;
  VAR_1->tx_pvid = VAR_2->vlan_id;
 } else {
  VAR_1->rx_pvid = 0;
  VAR_1->tx_pvid = 0;
 }
}
