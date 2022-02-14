
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_vport {int handle; scalar_t__ vlan_mode; int vlan; } ;
struct qlcnic_vf_info {int pci_func; struct qlcnic_vport* vp; } ;
struct qlcnic_macvlan_mbx {int mac_addr0; } ;
struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ req; } ;
struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct qlcnic_adapter *VAR_8,
          struct qlcnic_vf_info *VAR_9,
          struct qlcnic_cmd_args *VAR_10)
{
 struct qlcnic_macvlan_mbx *VAR_11;
 struct qlcnic_vport *VAR_12 = VAR_9->vp;
 u8 VAR_13, VAR_14;

 if (!(VAR_10->req.arg[1] & VAR_2))
  return -VAR_3;

 VAR_10->req.arg[1] |= (VAR_9->vp->handle << 16);
 VAR_10->req.arg[1] |= VAR_1;

 VAR_11 = (struct qlcnic_macvlan_mbx *)&VAR_10->req.arg[2];
 if (!(VAR_11->mac_addr0 & VAR_0)) {
  FUNC_0(&VAR_8->pdev->dev,
   "MAC address change is not allowed from VF %d",
   VAR_9->pci_func);
  return -VAR_3;
 }

 if (VAR_12->vlan_mode == VAR_7) {
  VAR_13 = VAR_10->req.arg[1] & 0x7;
  VAR_10->req.arg[1] &= ~0x7;
  VAR_14 = (VAR_13 == VAR_4 || VAR_13 == VAR_5) ?
    VAR_5 : VAR_6;
  VAR_10->req.arg[3] |= VAR_12->vlan << 16;
  VAR_10->req.arg[1] |= VAR_14;
 }

 return 0;
}
