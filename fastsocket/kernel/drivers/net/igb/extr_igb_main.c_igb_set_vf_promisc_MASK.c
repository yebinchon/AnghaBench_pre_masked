
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct vf_data_storage {int flags; int num_vf_mc_hashes; int * vf_mc_hashes; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {struct vf_data_storage* vf_data; struct e1000_hw hw; } ;


 size_t VAR_0 ;
 int FUNC_0 (size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ,size_t) ;

__attribute__((used)) static int FUNC_4(struct igb_adapter *VAR_8, u32 *VAR_9, u32 VAR_10)
{
 struct e1000_hw *VAR_11 = &VAR_8->hw;
 u32 VAR_12 = FUNC_2(FUNC_0(VAR_10));
 struct vf_data_storage *VAR_13 = &VAR_8->vf_data[VAR_10];

 VAR_13->flags &= ~(VAR_7 |
       VAR_6);
 VAR_12 &= ~(VAR_3 | VAR_2 | VAR_1);

 if (*VAR_9 & VAR_0) {
  VAR_12 |= VAR_1;
  VAR_13->flags |= VAR_6;
  *VAR_9 &= ~VAR_0;
 } else {




  if (VAR_13->num_vf_mc_hashes > 30) {
   VAR_12 |= VAR_1;
  } else if (VAR_13->num_vf_mc_hashes) {
   int VAR_14;
   VAR_12 |= VAR_2;
   for (VAR_14 = 0; VAR_14 < VAR_13->num_vf_mc_hashes; VAR_14++)
    FUNC_1(VAR_11, VAR_13->vf_mc_hashes[VAR_14]);
  }
 }

 FUNC_3(FUNC_0(VAR_10), VAR_12);


 if (*VAR_9 & VAR_4)
  return -VAR_5;

 return 0;
}
