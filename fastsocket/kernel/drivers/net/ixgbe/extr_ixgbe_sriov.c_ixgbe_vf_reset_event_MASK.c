
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct vf_data_storage {int vf_api; scalar_t__ num_vf_mc_hashes; int pf_vlan; scalar_t__ pf_qos; } ;
struct TYPE_3__ {int (* clear_rar ) (struct ixgbe_hw*,int) ;} ;
struct TYPE_4__ {size_t num_rar_entries; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {struct vf_data_storage* vfinfo; int netdev; scalar_t__ default_up; struct ixgbe_hw hw; } ;


 int FUNC_0 (struct ixgbe_adapter*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ixgbe_adapter*,int,int ,size_t) ;
 int FUNC_3 (struct ixgbe_hw*,size_t,int) ;
 int FUNC_4 (struct ixgbe_adapter*,int ,scalar_t__,size_t) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ixgbe_hw*,int) ;

__attribute__((used)) static inline void FUNC_7(struct ixgbe_adapter *VAR_1, u32 VAR_2)
{
 struct ixgbe_hw *VAR_3 = &VAR_1->hw;
 struct vf_data_storage *VAR_4 = &VAR_1->vfinfo[VAR_2];
 int VAR_5 = VAR_3->mac.num_rar_entries - (VAR_2 + 1);
 u8 VAR_6 = FUNC_5(VAR_1->netdev);


 FUNC_2(VAR_1, 1, VAR_4->pf_vlan, VAR_2);


 FUNC_3(VAR_3, VAR_2, !VAR_4->pf_vlan);


 if (!VAR_4->pf_vlan && !VAR_4->pf_qos && !VAR_6) {
  FUNC_0(VAR_1, VAR_2);
 } else {
  if (VAR_4->pf_qos || !VAR_6)
   FUNC_4(VAR_1, VAR_4->pf_vlan,
     VAR_4->pf_qos, VAR_2);
  else
   FUNC_4(VAR_1, VAR_4->pf_vlan,
     VAR_1->default_up, VAR_2);
 }


 VAR_1->vfinfo[VAR_2].num_vf_mc_hashes = 0;


 FUNC_1(VAR_1->netdev);

 VAR_3->mac.ops.clear_rar(VAR_3, VAR_5);


 VAR_1->vfinfo[VAR_2].vf_api = VAR_0;
}
