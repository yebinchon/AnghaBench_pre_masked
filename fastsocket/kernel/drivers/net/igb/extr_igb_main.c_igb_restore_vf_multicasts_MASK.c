
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vf_data_storage {int num_vf_mc_hashes; int flags; int * vf_mc_hashes; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {int vfs_allocated_count; struct vf_data_storage* vf_data; struct e1000_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct igb_adapter *VAR_3)
{
 struct e1000_hw *VAR_4 = &VAR_3->hw;
 struct vf_data_storage *VAR_5;
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3->vfs_allocated_count; VAR_6++) {
  u32 VAR_8 = FUNC_2(FUNC_0(VAR_6));
  VAR_8 &= ~(VAR_1 | VAR_0);

  VAR_5 = &VAR_3->vf_data[VAR_6];

  if ((VAR_5->num_vf_mc_hashes > 30) ||
      (VAR_5->flags & VAR_2)) {
   VAR_8 |= VAR_0;
  } else if (VAR_5->num_vf_mc_hashes) {
   VAR_8 |= VAR_1;
   for (VAR_7 = 0; VAR_7 < VAR_5->num_vf_mc_hashes; VAR_7++)
    FUNC_1(VAR_4, VAR_5->vf_mc_hashes[VAR_7]);
  }
  FUNC_3(FUNC_0(VAR_6), VAR_8);
 }
}
