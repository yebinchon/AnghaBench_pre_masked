
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct qlcnic_vport {int vlan; int qos; int vlan_mode; } ;
struct qlcnic_vf_info {int state; struct qlcnic_vport* vp; } ;
struct qlcnic_sriov {int num_vfs; struct qlcnic_vf_info* vf_info; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct qlcnic_sriov* sriov; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*,char*,int) ;
 int FUNC_1 (struct net_device*,char*,int,int,int) ;
 struct qlcnic_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

int FUNC_5(struct net_device *VAR_7, int VAR_8,
        u16 VAR_9, u8 VAR_10)
{
 struct qlcnic_adapter *VAR_11 = FUNC_2(VAR_7);
 struct qlcnic_sriov *VAR_12 = VAR_11->ahw->sriov;
 struct qlcnic_vf_info *VAR_13;
 struct qlcnic_vport *VAR_14;

 if (!FUNC_3(VAR_11))
  return -VAR_1;

 if (VAR_8 >= VAR_12->num_vfs || VAR_10 > 7)
  return -VAR_0;

 if (VAR_9 > VAR_2) {
  FUNC_0(VAR_7,
      "Invalid VLAN ID, allowed range is [0 - %d]\n",
      VAR_2);
  return -VAR_0;
 }

 VAR_13 = &VAR_12->vf_info[VAR_8];
 VAR_14 = VAR_13->vp;
 if (FUNC_4(VAR_3, &VAR_13->state)) {
  FUNC_0(VAR_7,
      "VLAN change failed for VF %d, as VF driver is loaded. Please unload VF driver and retry the operation\n",
      VAR_8);
  return -VAR_1;
 }

 switch (VAR_9) {
 case 4095:
  VAR_14->vlan_mode = VAR_4;
  break;
 case 0:
  VAR_14->vlan_mode = VAR_5;
  VAR_14->vlan = 0;
  VAR_14->qos = 0;
  break;
 default:
  VAR_14->vlan_mode = VAR_6;
  VAR_14->vlan = VAR_9;
  VAR_14->qos = VAR_10;
 }

 FUNC_1(VAR_7, "Setting VLAN %d, QoS %d, for VF %d\n",
      VAR_9, VAR_10, VAR_8);
 return 0;
}
