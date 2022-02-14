
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qlcnic_esw_func_cfg {int pci_func; int op_mode; int offload_flags; int vlan_id; int mac_anti_spoof; int mac_override; int promisc_mode; int discard_tagged; } ;
struct TYPE_8__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_4__ req; } ;
struct qlcnic_adapter {TYPE_3__* ahw; TYPE_2__* npars; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_7__ {scalar_t__ op_mode; int capabilities; } ;
struct TYPE_6__ {int phy_port; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;

 int VAR_10 ;
 scalar_t__ VAR_11 ;

 int VAR_12 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*,int*,int*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_4 (struct qlcnic_cmd_args*) ;
 int FUNC_5 (struct qlcnic_adapter*,int) ;
 int FUNC_6 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

int FUNC_7(struct qlcnic_adapter *VAR_13,
  struct qlcnic_esw_func_cfg *VAR_14)
{
 struct device *VAR_15 = &VAR_13->pdev->dev;
 struct qlcnic_cmd_args VAR_16;
 int VAR_17 = -VAR_8, VAR_18;
 u32 VAR_19, VAR_20 = 0;
 u8 VAR_21;

 if (VAR_13->ahw->op_mode != VAR_11)
  return VAR_17;
 VAR_21 = VAR_14->pci_func;
 VAR_18 = FUNC_5(VAR_13, VAR_21);
 if (VAR_18 < 0)
  return VAR_17;
 VAR_19 = (VAR_13->npars[VAR_18].phy_port & VAR_0);
 VAR_19 |= (VAR_21 << 8);

 if (FUNC_0(VAR_13, &VAR_19, &VAR_20))
  return VAR_17;
 VAR_19 &= ~(0x0ff << 8);
 VAR_19 |= (VAR_21 << 8);
 VAR_19 &= ~(VAR_2 | VAR_3);
 switch (VAR_14->op_mode) {
 case 128:
  VAR_19 |= (VAR_4 | VAR_6 | VAR_7);
  VAR_20 |= (VAR_0 | VAR_1);
  if (VAR_13->ahw->capabilities & VAR_10)
   VAR_20 |= (VAR_2 | VAR_3);
  if (!(VAR_14->discard_tagged))
   VAR_19 &= ~VAR_4;
  if (!(VAR_14->promisc_mode))
   VAR_19 &= ~VAR_6;
  if (!(VAR_14->mac_override))
   VAR_19 &= ~VAR_7;
  if (!(VAR_14->mac_anti_spoof))
   VAR_20 &= ~VAR_0;
  if (!(VAR_14->offload_flags & VAR_0))
   VAR_20 &= ~(VAR_1 | VAR_2 | VAR_3);
  if (!(VAR_14->offload_flags & VAR_1))
   VAR_20 &= ~VAR_2;
  if (!(VAR_14->offload_flags & VAR_2))
   VAR_20 &= ~VAR_3;
  break;
 case 130:
   VAR_19 |= (VAR_2 | VAR_5);
   VAR_19 |= (VAR_14->vlan_id << 16);
   break;
 case 129:
   VAR_19 |= (VAR_3 | VAR_5);
   VAR_19 &= ~(0x0ffff << 16);
   break;
 default:
  return VAR_17;
 }

 FUNC_3(&VAR_16, VAR_13, VAR_9);
 VAR_16.req.arg[1] = VAR_19;
 VAR_16.req.arg[2] = VAR_20;
 VAR_17 = FUNC_6(VAR_13, &VAR_16);
 FUNC_4(&VAR_16);

 if (VAR_17 != VAR_12)
  FUNC_1(VAR_15, "Failed to configure eswitch for vNIC function %d\n",
   VAR_21);
 else
  FUNC_2(VAR_15, "Configured eSwitch for vNIC function %d\n",
    VAR_21);

 return VAR_17;
}
