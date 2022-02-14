
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct vf_data_storage {int flags; int pf_vlan; scalar_t__ last_nack; } ;
struct pci_dev {int dev; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {struct vf_data_storage* vf_data; struct e1000_hw hw; struct pci_dev* pdev; } ;
typedef int s32 ;


 int VAR_0 ;
 size_t VAR_1 ;





 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (struct e1000_hw*,size_t*,int,size_t) ;
 int FUNC_3 (struct igb_adapter*,size_t*,size_t) ;
 int FUNC_4 (struct igb_adapter*,size_t*,size_t) ;
 int FUNC_5 (struct igb_adapter*,size_t*,size_t) ;
 int FUNC_6 (struct igb_adapter*,size_t,size_t) ;
 int FUNC_7 (struct igb_adapter*,size_t*,size_t) ;
 int FUNC_8 (struct igb_adapter*,size_t) ;
 int FUNC_9 (struct e1000_hw*,size_t*,int,size_t) ;
 int VAR_9 ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct igb_adapter *VAR_10, u32 VAR_11)
{
 struct pci_dev *VAR_12 = VAR_10->pdev;
 u32 VAR_13[VAR_0];
 struct e1000_hw *VAR_14 = &VAR_10->hw;
 struct vf_data_storage *VAR_15 = &VAR_10->vf_data[VAR_11];
 s32 VAR_16;

 VAR_16 = FUNC_2(VAR_14, VAR_13, VAR_0, VAR_11);

 if (VAR_16) {

  FUNC_0(&VAR_12->dev, "Error receiving message from VF\n");
  VAR_15->flags &= ~VAR_7;
  if (!FUNC_10(VAR_9, VAR_15->last_nack + (2 * VAR_6)))
   return;
  goto out;
 }


 if (VAR_13[0] & (VAR_2 | VAR_4))
  return;




 if (VAR_13[0] == VAR_1) {
  FUNC_8(VAR_10, VAR_11);
  return;
 }

 if (!(VAR_15->flags & VAR_7)) {
  if (!FUNC_10(VAR_9, VAR_15->last_nack + (2 * VAR_6)))
   return;
  VAR_16 = -1;
  goto out;
 }

 switch ((VAR_13[0] & 0xFFFF)) {
 case 131:
  VAR_16 = -VAR_5;
  if (!(VAR_15->flags & VAR_8))
   VAR_16 = FUNC_3(VAR_10, VAR_13, VAR_11);
  else
   FUNC_1(&VAR_12->dev,
     "VF %d attempted to override administratively set MAC address\nReload the VF driver to resume operations\n",
     VAR_11);
  break;
 case 129:
  VAR_16 = FUNC_5(VAR_10, VAR_13, VAR_11);
  break;
 case 130:
  VAR_16 = FUNC_4(VAR_10, VAR_13, VAR_11);
  break;
 case 132:
  VAR_16 = FUNC_6(VAR_10, VAR_13[1], VAR_11);
  break;
 case 128:
  VAR_16 = -1;
  if (VAR_15->pf_vlan)
   FUNC_1(&VAR_12->dev,
     "VF %d attempted to override administratively set VLAN tag\nReload the VF driver to resume operations\n",
     VAR_11);
  else
   VAR_16 = FUNC_7(VAR_10, VAR_13, VAR_11);
  break;
 default:
  FUNC_0(&VAR_12->dev, "Unhandled Msg %08x\n", VAR_13[0]);
  VAR_16 = -1;
  break;
 }

 VAR_13[0] |= VAR_3;
out:

 if (VAR_16)
  VAR_13[0] |= VAR_4;
 else
  VAR_13[0] |= VAR_2;

 FUNC_9(VAR_14, VAR_13, 1, VAR_11);
}
