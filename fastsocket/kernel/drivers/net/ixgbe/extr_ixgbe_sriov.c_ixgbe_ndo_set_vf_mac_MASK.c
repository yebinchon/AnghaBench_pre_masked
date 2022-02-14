
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct ixgbe_adapter {int num_vfs; TYPE_2__* pdev; int state; TYPE_1__* vfinfo; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int pf_set_mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ixgbe_adapter*,int,int *) ;
 struct ixgbe_adapter* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct net_device *VAR_2, int VAR_3, u8 *VAR_4)
{
 struct ixgbe_adapter *VAR_5 = FUNC_4(VAR_2);
 if (!FUNC_2(VAR_4) || (VAR_3 >= VAR_5->num_vfs))
  return -VAR_0;
 VAR_5->vfinfo[VAR_3].pf_set_mac = 1;
 FUNC_0(&VAR_5->pdev->dev, "setting MAC %pM on VF %d\n", VAR_4, VAR_3);
 FUNC_0(&VAR_5->pdev->dev, "Reload the VF driver to make this"
          " change effective.");
 if (FUNC_5(VAR_1, &VAR_5->state)) {
  FUNC_1(&VAR_5->pdev->dev, "The VF MAC address has been set,"
    " but the PF device is not up.\n");
  FUNC_1(&VAR_5->pdev->dev, "Bring the PF device up before"
    " attempting to use the VF device.\n");
 }
 return FUNC_3(VAR_5, VAR_3, VAR_4);
}
