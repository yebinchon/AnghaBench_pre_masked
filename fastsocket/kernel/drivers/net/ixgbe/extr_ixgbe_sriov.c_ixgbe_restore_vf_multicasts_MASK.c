
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vf_data_storage {int num_vf_mc_hashes; int* vf_mc_hashes; } ;
struct TYPE_2__ {int mta_in_use; } ;
struct ixgbe_hw {TYPE_1__ addr_ctrl; } ;
struct ixgbe_adapter {int num_vfs; struct vf_data_storage* vfinfo; struct ixgbe_hw hw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int FUNC_3 (struct ixgbe_adapter*) ;

void FUNC_4(struct ixgbe_adapter *VAR_0)
{
 struct ixgbe_hw *VAR_1 = &VAR_0->hw;
 struct vf_data_storage *VAR_2;
 int VAR_3, VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_vfs; VAR_3++) {
  VAR_2 = &VAR_0->vfinfo[VAR_3];
  for (VAR_4 = 0; VAR_4 < VAR_2->num_vf_mc_hashes; VAR_4++) {
   VAR_1->addr_ctrl.mta_in_use++;
   VAR_6 = (VAR_2->vf_mc_hashes[VAR_4] >> 5) & 0x7F;
   VAR_5 = VAR_2->vf_mc_hashes[VAR_4] & 0x1F;
   VAR_7 = FUNC_1(VAR_1, FUNC_0(VAR_6));
   VAR_7 |= (1 << VAR_5);
   FUNC_2(VAR_1, FUNC_0(VAR_6), VAR_7);
  }
 }


 FUNC_3(VAR_0);
}
