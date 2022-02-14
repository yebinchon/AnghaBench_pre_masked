
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct qlcnic_npar_info {int offload_flags; void* promisc_mode; int discard_tagged; int mac_anti_spoof; void* mac_override; int pvid; int pci_func; } ;
struct qlcnic_esw_func_cfg {int offload_flags; void* promisc_mode; int discard_tagged; int mac_anti_spoof; void* mac_override; int vlan_id; int pci_func; } ;
struct qlcnic_adapter {struct qlcnic_npar_info* npars; TYPE_1__* ahw; scalar_t__ need_fw_reset; } ;
struct TYPE_2__ {size_t act_pci_func; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_esw_func_cfg*,int ,int) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*,struct qlcnic_esw_func_cfg*) ;

int FUNC_4(struct qlcnic_adapter *VAR_4)
{
 struct qlcnic_esw_func_cfg VAR_5;
 struct qlcnic_npar_info *VAR_6;
 u8 VAR_7;

 if (VAR_4->need_fw_reset)
  return 0;

 for (VAR_7 = 0; VAR_7 < VAR_4->ahw->act_pci_func; VAR_7++) {
  FUNC_1(&VAR_5, 0, sizeof(struct qlcnic_esw_func_cfg));
  VAR_5.pci_func = VAR_4->npars[VAR_7].pci_func;
  VAR_5.mac_override = VAR_0;
  VAR_5.promisc_mode = VAR_0;
  if (FUNC_2(VAR_4)) {
   VAR_5.offload_flags = VAR_0;
   if (FUNC_0(VAR_4))
    VAR_5.offload_flags |= (VAR_1 | VAR_2);
  }
  if (FUNC_3(VAR_4, &VAR_5))
   return -VAR_3;
  VAR_6 = &VAR_4->npars[VAR_7];
  VAR_6->pvid = VAR_5.vlan_id;
  VAR_6->mac_override = VAR_5.mac_override;
  VAR_6->mac_anti_spoof = VAR_5.mac_anti_spoof;
  VAR_6->discard_tagged = VAR_5.discard_tagged;
  VAR_6->promisc_mode = VAR_5.promisc_mode;
  VAR_6->offload_flags = VAR_5.offload_flags;
 }

 return 0;
}
