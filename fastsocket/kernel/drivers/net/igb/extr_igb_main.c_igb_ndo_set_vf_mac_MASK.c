
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct igb_adapter {int vfs_allocated_count; TYPE_2__* pdev; int state; TYPE_1__* vf_data; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct igb_adapter*,int,int *) ;
 int FUNC_3 (int *) ;
 struct igb_adapter* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3, int VAR_4, u8 *VAR_5)
{
 struct igb_adapter *VAR_6 = FUNC_4(VAR_3);
 if (!FUNC_3(VAR_5) || (VAR_4 >= VAR_6->vfs_allocated_count))
  return -VAR_0;
 VAR_6->vf_data[VAR_4].flags |= VAR_1;
 FUNC_0(&VAR_6->pdev->dev, "setting MAC %pM on VF %d\n", VAR_5, VAR_4);
 FUNC_0(&VAR_6->pdev->dev,
   "Reload the VF driver to make this change effective.");
 if (FUNC_5(VAR_2, &VAR_6->state)) {
  FUNC_1(&VAR_6->pdev->dev,
    "The VF MAC address has been set, but the PF device is not up.\n");
  FUNC_1(&VAR_6->pdev->dev,
    "Bring the PF device up before attempting to use the VF device.\n");
 }
 return FUNC_2(VAR_6, VAR_4, VAR_5);
}
