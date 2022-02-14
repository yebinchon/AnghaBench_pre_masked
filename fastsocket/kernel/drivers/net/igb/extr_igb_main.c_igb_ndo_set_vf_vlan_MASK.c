
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct igb_adapter {int vfs_allocated_count; TYPE_2__* vf_data; TYPE_1__* pdev; int state; } ;
struct TYPE_4__ {int pf_vlan; int pf_qos; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct igb_adapter*,int,int) ;
 int FUNC_3 (struct igb_adapter*,int,int) ;
 int FUNC_4 (struct igb_adapter*,int,int,int) ;
 struct igb_adapter* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3,
          int VAR_4, u16 VAR_5, u8 VAR_6)
{
 int VAR_7 = 0;
 struct igb_adapter *VAR_8 = FUNC_5(VAR_3);

 if ((VAR_4 >= VAR_8->vfs_allocated_count) || (VAR_5 > 4095) || (VAR_6 > 7))
  return -VAR_0;
 if (VAR_5 || VAR_6) {
  VAR_7 = FUNC_4(VAR_8, VAR_5, !!VAR_5, VAR_4);
  if (VAR_7)
   goto out;
  FUNC_3(VAR_8, VAR_5 | (VAR_6 << VAR_1), VAR_4);
  FUNC_2(VAR_8, VAR_4, !VAR_5);
  VAR_8->vf_data[VAR_4].pf_vlan = VAR_5;
  VAR_8->vf_data[VAR_4].pf_qos = VAR_6;
  FUNC_0(&VAR_8->pdev->dev,
    "Setting VLAN %d, QOS 0x%x on VF %d\n", VAR_5, VAR_6, VAR_4);
  if (FUNC_6(VAR_2, &VAR_8->state)) {
   FUNC_1(&VAR_8->pdev->dev,
     "The VF VLAN has been set, but the PF device is not up.\n");
   FUNC_1(&VAR_8->pdev->dev,
     "Bring the PF device up before attempting to use the VF device.\n");
  }
 } else {
  FUNC_4(VAR_8, VAR_8->vf_data[VAR_4].pf_vlan,
        0, VAR_4);
  FUNC_3(VAR_8, VAR_5, VAR_4);
  FUNC_2(VAR_8, VAR_4, 1);
  VAR_8->vf_data[VAR_4].pf_vlan = 0;
  VAR_8->vf_data[VAR_4].pf_qos = 0;
 }
out:
 return VAR_7;
}
