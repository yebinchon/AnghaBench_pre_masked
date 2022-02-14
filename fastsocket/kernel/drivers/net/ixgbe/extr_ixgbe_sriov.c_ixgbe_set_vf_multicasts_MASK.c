
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int u16 ;
struct vf_data_storage {int num_vf_mc_hashes; int* vf_mc_hashes; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; struct vf_data_storage* vfinfo; } ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 size_t FUNC_1 (struct ixgbe_hw*,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (struct ixgbe_hw*,int ,size_t) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct ixgbe_adapter *VAR_3,
       u32 *VAR_4, u32 VAR_5)
{
 int VAR_6 = (VAR_4[0] & VAR_1)
         >> VAR_2;
 u16 *VAR_7 = (u16 *)&VAR_4[1];
 struct vf_data_storage *VAR_8 = &VAR_3->vfinfo[VAR_5];
 struct ixgbe_hw *VAR_9 = &VAR_3->hw;
 int VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;


 VAR_6 = FUNC_3(VAR_6, VAR_0);






 VAR_8->num_vf_mc_hashes = VAR_6;





 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_8->vf_mc_hashes[VAR_10] = VAR_7[VAR_10];
 }

 for (VAR_10 = 0; VAR_10 < VAR_8->num_vf_mc_hashes; VAR_10++) {
  VAR_12 = (VAR_8->vf_mc_hashes[VAR_10] >> 5) & 0x7F;
  VAR_11 = VAR_8->vf_mc_hashes[VAR_10] & 0x1F;
  VAR_13 = FUNC_1(VAR_9, FUNC_0(VAR_12));
  VAR_13 |= (1 << VAR_11);
  FUNC_2(VAR_9, FUNC_0(VAR_12), VAR_13);
 }

 return 0;
}
