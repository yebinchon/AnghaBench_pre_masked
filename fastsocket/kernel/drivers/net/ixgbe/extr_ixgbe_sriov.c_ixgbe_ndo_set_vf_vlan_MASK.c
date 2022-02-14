
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int (* set_vlan_anti_spoofing ) (struct ixgbe_hw*,int,int) ;} ;
struct TYPE_7__ {TYPE_2__ ops; } ;
struct ixgbe_hw {TYPE_3__ mac; } ;
struct ixgbe_adapter {int num_vfs; TYPE_4__* vfinfo; TYPE_1__* pdev; int state; scalar_t__ antispoofing_enabled; struct ixgbe_hw hw; } ;
struct TYPE_8__ {int pf_vlan; int pf_qos; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct ixgbe_adapter*,int) ;
 int FUNC_3 (struct ixgbe_adapter*,int,int,int) ;
 int FUNC_4 (struct ixgbe_hw*,int,int) ;
 int FUNC_5 (struct ixgbe_adapter*,int,int,int) ;
 struct ixgbe_adapter* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct ixgbe_hw*,int,int) ;
 int FUNC_8 (struct ixgbe_hw*,int,int) ;
 scalar_t__ FUNC_9 (int ,int *) ;

int FUNC_10(struct net_device *VAR_2, int VAR_3, u16 VAR_4, u8 VAR_5)
{
 int VAR_6 = 0;
 struct ixgbe_adapter *VAR_7 = FUNC_6(VAR_2);
 struct ixgbe_hw *VAR_8 = &VAR_7->hw;

 if ((VAR_3 >= VAR_7->num_vfs) || (VAR_4 > 4095) || (VAR_5 > 7))
  return -VAR_0;
 if (VAR_4 || VAR_5) {
  if (VAR_7->vfinfo[VAR_3].pf_vlan)
   VAR_6 = FUNC_3(VAR_7, 0,
      VAR_7->vfinfo[VAR_3].pf_vlan,
      VAR_3);
  if (VAR_6)
   goto out;
  VAR_6 = FUNC_3(VAR_7, 1, VAR_4, VAR_3);
  if (VAR_6)
   goto out;
  FUNC_5(VAR_7, VAR_4, VAR_5, VAR_3);
  FUNC_4(VAR_8, VAR_3, 0);
  if (VAR_7->antispoofing_enabled)
   VAR_8->mac.ops.set_vlan_anti_spoofing(VAR_8, 1, VAR_3);
  VAR_7->vfinfo[VAR_3].pf_vlan = VAR_4;
  VAR_7->vfinfo[VAR_3].pf_qos = VAR_5;
  FUNC_0(&VAR_7->pdev->dev,
    "Setting VLAN %d, QOS 0x%x on VF %d\n", VAR_4, VAR_5, VAR_3);
  if (FUNC_9(VAR_1, &VAR_7->state)) {
   FUNC_1(&VAR_7->pdev->dev,
     "The VF VLAN has been set,"
     " but the PF device is not up.\n");
   FUNC_1(&VAR_7->pdev->dev,
     "Bring the PF device up before"
     " attempting to use the VF device.\n");
  }
 } else {
  VAR_6 = FUNC_3(VAR_7, 0,
     VAR_7->vfinfo[VAR_3].pf_vlan, VAR_3);
  FUNC_2(VAR_7, VAR_3);
  FUNC_4(VAR_8, VAR_3, 1);
  VAR_8->mac.ops.set_vlan_anti_spoofing(VAR_8, 0, VAR_3);
  VAR_7->vfinfo[VAR_3].pf_vlan = 0;
  VAR_7->vfinfo[VAR_3].pf_qos = 0;
       }
out:
       return VAR_6;
}
