
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_5__ {int (* set_vlan_anti_spoofing ) (struct ixgbe_hw*,int,size_t) ;int (* set_mac_anti_spoofing ) (struct ixgbe_hw*,int,int ) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct ixgbe_hw {TYPE_3__ mac; } ;
struct ixgbe_adapter {int antispoofing_enabled; int num_vfs; struct ixgbe_hw hw; TYPE_1__* vfinfo; } ;
struct TYPE_4__ {scalar_t__ pf_set_mac; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ixgbe_adapter*,size_t,int,int *) ;
 int FUNC_3 (struct ixgbe_hw*,int,int ) ;
 int FUNC_4 (struct ixgbe_hw*,int,size_t) ;

__attribute__((used)) static int FUNC_5(struct ixgbe_adapter *VAR_4,
        u32 *VAR_5, u32 VAR_6)
{
 u8 *VAR_7 = ((u8 *)(&VAR_5[1]));
 int VAR_8 = (VAR_5[0] & VAR_1) >>
      VAR_2;
 int VAR_9;

 if (VAR_4->vfinfo[VAR_6].pf_set_mac && VAR_8 > 0) {
  FUNC_0(VAR_3,
         "VF %d requested MACVLAN filter but is administratively denied\n",
         VAR_6);
  return -1;
 }


 if (VAR_8) {
  if (!FUNC_1(VAR_7)) {
   FUNC_0(VAR_3, "VF %d attempted to set invalid mac\n", VAR_6);
   return -1;
  }







  if (VAR_8 > 0 && VAR_4->antispoofing_enabled) {
   struct ixgbe_hw *VAR_10 = &VAR_4->hw;
   VAR_10->mac.ops.set_mac_anti_spoofing(VAR_10, 0,
         VAR_4->num_vfs);
   VAR_10->mac.ops.set_vlan_anti_spoofing(VAR_10, 0, VAR_6);
   VAR_4->antispoofing_enabled = 0;
  }
 }

 VAR_9 = FUNC_2(VAR_4, VAR_6, VAR_8, VAR_7);
 if (VAR_9 == -VAR_0)
  FUNC_0(VAR_3,
         "VF %d has requested a MACVLAN filter but there is no space for it\n",
         VAR_6);

 return VAR_9 < 0;
}
